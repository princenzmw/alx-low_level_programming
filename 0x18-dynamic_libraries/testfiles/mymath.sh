#!/bin/bash

# Compile Source file (math.c) into an Object file (math.o)
gcc -Wall -pedantic -Werror -Wextra -c -fPIC math.c

# Create the dynamic library
gcc -shared -o 100-operations.so *.o

# Clean up all the Object files
rm *.o

echo "Dynamic library '100-operations.so' created successfully."
