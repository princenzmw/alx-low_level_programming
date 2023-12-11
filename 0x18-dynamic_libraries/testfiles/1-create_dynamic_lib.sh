#!/bin/bash

# Compile all Source files (.c) into Object files (.o)
gcc -Wall -pedantic -Werror -Wextra -c -fPIC *.c

# Create the dynamic library
gcc -shared -o liball.so *.o

# Clean up all the Object files
rm *.o

echo "Dynamic library liball.so created successfully."
