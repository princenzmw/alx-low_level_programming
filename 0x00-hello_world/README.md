My first C programming project  

# 0x00-Hello_world  

README file.  

Learning the steps of compiling C files using gcc.  


0-preprocessor   

#!/bin/bash   
gcc -E $CFILE -o c   

1-compiler   

#!/bin/bash   
gcc -c $CFILE   

2-assembler   

#!/bin/bash   
gcc -S $CFILE   

3-name   

#!/bin/bash   
gcc $CFILE -o cisfun   

4-puts.c   

#include<stdio.h>   
/**   
 * main - Entry point   
 *   
 * Return: Always 0 (Success)   
 */   
int main(void)   
{   
	puts("\"Programming is like building a multilingual puzzle");   
	return (0);   
}   


5-printf.c   

#include<stdio.h>   
/**   
* main - Entry point   
*   
* Return: Always 0 (Success)   
*/   
int main(void)   
{   
	printf("with proper grammar, but the outcome is a piece of art,\n");   
	return (0);   
}   

6-size.c   

#include<stdio.h>   
/**   
* main - Entry point   
*   
* Return: Always 0 (Success)   
*/   
int main(void)   
{   
	printf("Size of a char: %d byte(s)\n", sizeof(char));   
	printf("Size of an int: %d byte(s)\n", sizeof(int));   
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));   
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));   
	printf("Size of a float: %d byte(s)\n", sizeof(float));   
	
	return (0);   
}   

100-intel   

#!/bin/bash   
gcc -S -masm=intel $CFILE   

101-quote.c   

#include <stdio.h>   
#include <unistd.h>   

/**   
* main - Entry point   
*   
* Return: Always 1 (Success)   
*/   
int main(void)   
{   
	write(2,   
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);   
	return (1);   
}   

