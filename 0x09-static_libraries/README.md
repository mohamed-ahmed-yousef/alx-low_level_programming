- Deal with Static library in c
### Static library
- Command to create static library.
- this command run before make `main.c`
```sh
    gcc -c -Wall -Werror -Wextra *.c  #to compiler  static library files.
```
-  to create static lib use `ar`
```sh
    ar -rc libname.a *.o  #to create static lib
    # lib+name you want+[.a || .lib]
```
- to index static library use `ranlib`
```sh
    ranlib libname.a
    # or use
    ar -rcs libname.a *.o
```
- final command to create executable file
```sh
    gcc main.c -L. -lname -o main
    # -L -> to determine the path of library.
    # . current path
    # -l+name of lib -> library name
    # -o -> to line
    #  main -> final name of output file.
```
-----
### Shared [ dymaic ] library
-  set of commands we will use to create a shared library
```sh
    cc -fPIC -c util_file.c
    cc -fPIC -c util_net.c
    cc -fPIC -c util_math.c
    cc -shared libutil.so util_file.o util_net.o util_math.o
```
- The first three commands compile the source files with the PIC option, so they will be suitable for use in a shared library (they may still be used in a program directly, even thought they were compiled with PIC). The last command asks the compiler to generate a shared library
- use shared memory
- Done in two stage 
- compile time - check symbol to ensure that all thing found.
- Run time - to tell `system's dynamic loader` where to find our shared memory
- Command to use
```sh
    cc main.o -L. -lutil -o prog # compilation part.
    # Run time 
    # We use "LD_LIBRARY_PATH" ->  environment variable to tell the dynamic loader to look in other directories.
```
### Loading A Shared Library Using dlopen()
- We use `dlopen()` to load shared library.
```c
#include <dlfcn.h>      /* defines dlopen(), etc.       */


void* lib_handle;       /* handle of the opened library */

lib_handle = dlopen("/full/path/to/library", RTLD_LAZY);
if (!lib_handle) {
    fprintf(stderr, "Error during dlopen(): %s\n", dlerror());
    exit(1);
}
```
- We can Call Functions Dynamically Using `dlsym()`
- To Unload A Shared Library Use `dlclose()`
```c
    dlclose(lib_handle);  // This will free down all resources taken by the library
```
## Summary 
- Command to Create Shared memory 

```sh
    gcc -c -fPIC *.c # -c to generate a object file(.o)
    #-fPIC  to make the code position independent

    gcc -shared -o liball.so *.o #  put together those objects files into one library.

    nm -D liball.so # To verify that you did it and have the right functions as dynamic symbols 

    # HOw to use.
    export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH # to add the location of your library files into the environmental variable to know where to find the functions

    gcc -L . main.c -l all -o example #To compile it


```


----- 
`fprintf` in c
- int fprintf(FILE *stream, const char *format, ...);
- The fprintf() function takes three arguments:

`stream`: A pointer to the file stream to write to. This can be either a FILE * object returned by fopen() or one of the standard streams stdout, stderr, or stdin.

`format`: A string that specifies the format of the output. This string can contain format specifiers, which are special sequences that are replaced by the values of corresponding arguments.

`...`: Optional arguments that correspond to the format specifiers in the format string.
- How to use it.
```c
#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("output.txt", "w");
    fprintf(fp, "Hello, %s!\n", "world");
    fclose(fp);
    return 0;
}
```
