# 0x18-dynamic_libraries

## PROCEDURES used to create a Lybrary

## How to create a Dynamic Library

The way to create a Dynamic Library in Linux is with the `gcc` command using the `-c` to generate the object files (.o) from the source files (.c) and the `-fPIC` to make the code position independent. Thus, the following command makes a bunch of .o files from each .c file in the current directory (You can select which functions you want for your library).
```
gcc -c -fPIC *.c
```
The next thing is to put together those objects files into one library. To do this as a Dynamic Library we also use `gcc` but with the `-shared` option. The `-o` is to specify the name of the file we want it to have.
```
gcc -shared -o libdynamic.so *.o
```
This way we must have our library created. To verify that we did it and have the right functions as dynamic symbols we can use:
```
nm -D libdynamic.so
```
At this point, Our Dynamic Library have been created successfully!

## How to use it

Now, we have to compile the library with our `main.c` file to link it and use it as we want. For this to work, we have to add the location of our library files into the environmental variable to know where to find the functions.
```
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
```
Then, we can compile it by typing the following:
```
gcc -L . 0-main.c -ldynamic -o example
```
Note that the name we gave to the library in this example was `dynamic`. Here we use the `-L` option to tell the program where to find the library, in this case `.` that refers to the current directory. The `-l` option is to tell the compiler to look for the library.

# How to use it in Python

With Python you can import the libraries you created in C. All you have to do is import ctypes and use CDLL just like this one below:
```py
#!/usr/bin/python3
import ctypes
prinko = ctypes.CDLL(‘./fudji.so’)
```
Then you can use your previously created functions as you want. Let’s say that you want to call a function called `mul` from your library, then you can call it as `prinko.mul`.
You can find an example in this folder:

- [Library](./100-operations.so) - Dynamic library that contains functions in [math.c file](./math.c)
- [Python file](./test.py) - a file where I used my created library: `100-operations.so`
