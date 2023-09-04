#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdint.h>
#include "main.h"

/**
 * struct ElfHeader - ELF header structure
 * @e_ident: ELF identification bytes
 * @e_type: Type of ELF file
 * @e_machine: Machine architecture
 * @e_version: ELF file version
 * @e_entry: Entry point address
 * @e_phoff: Program header table offset
 * @e_shoff: Section header table offset
 * @e_flags: Processor-specific flags
 * @e_ehsize: ELF header size
 * @e_phentsize: Size of program header entry
 * @e_phnum: Number of program header entries
 * @e_shentsize: Size of section header entry
 * @e_shnum: Number of section header entries
 * @e_shstrndx: Section header string table index
 */
struct ElfHeader
{
	unsigned char e_ident[16];
	uint16_t e_type;
	uint16_t e_machine;
	uint32_t e_version;
	uint64_t e_entry;
	uint64_t e_phoff;
	uint64_t e_shoff;
	uint32_t e_flags;
	uint16_t e_ehsize;
	uint16_t e_phentsize;
	uint16_t e_phnum;
	uint16_t e_shentsize;
	uint16_t e_shnum;
	uint16_t e_shstrndx;
};

/**
 * display_elf_header - Display ELF header information
 * @header: Pointer to the ELF header structure
 */
void display_elf_header(const struct ElfHeader *header);

/**
 * is_valid_elf - Check if the file is a valid ELF file
 * @header: Pointer to the ELF header structure
 * Return: 1 if valid, 0 otherwise
 */
int is_valid_elf(const struct ElfHeader *header);

/**
 * display_error - Display error message and exit
 * @message: The error message to display
 */
void display_error(const char *message);

int main(int argc, char *argv[])
{
	const char *elf_filename;
	int fd;
	struct ElfHeader elf_header;
	ssize_t bytes_read;

	if (argc != 2)
	{
		display_error("Usage: elf_header elf_filename");
	}

	elf_filename = argv[1];
	fd = open(elf_filename, O_RDONLY);

	if (fd == -1)
	{
		display_error("Error opening ELF file");
	}

	bytes_read = read(fd, &elf_header, sizeof(struct ElfHeader));

	if (bytes_read != sizeof(struct ElfHeader) || !is_valid_elf(&elf_header))
	{
		display_error("Not a valid ELF file");
	}

	display_elf_header(&elf_header);

	close(fd);
	return (0);
}

/**
 * display_elf_header - Display ELF header information
 * @header: Pointer to the ELF header structure
 */
void display_elf_header(const struct ElfHeader *header)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < 16; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

	printf("  Class:                             %s\n",
	       header->e_ident[4] == 1 ? "ELF32" : "ELF64");

	printf("  Data:                              %s\n",
	       header->e_ident[5] == 1 ? "2's complement, little endian" :
		"2's complement, big endian");

	printf("  Version:                           %d (current)\n",
		header->e_version);

	printf("  OS/ABI:                            %d\n", header->e_ident[7]);

	printf("  ABI Version:                       %d\n", header->e_ident[8]);

	printf("  Type:                              ");
	switch (header->e_type)
	{
	case 1:
		printf("REL (Relocatable file)\n");
		break;
	case 2:
		printf("EXEC (Executable file)\n");
		break;
	case 3:
		printf("DYN (Shared object file)\n");
		break;
	case 4:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("UNKNOWN (0x%x)\n", header->e_type);
	}

	printf("  Entry point address:               0x%lx\n",
		(unsigned long)header->e_entry);
}

/**
 * is_valid_elf - Check if the file is a valid ELF file
 * @header: Pointer to the ELF header structure
 * Return: 1 if valid, 0 otherwise
 */
int is_valid_elf(const struct ElfHeader *header)
{
	return (header->e_ident[0] == 0x7F && header->e_ident[1] == 'E' &&
		header->e_ident[2] == 'L' && header->e_ident[3] == 'F');
}

/**
 * display_error - Display error message and exit
 * @message: The error message to display
 */
void display_error(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}
