# Notes on c++

---

## Visual Studio Settings

### Keyboard Shortcuts

* ctrl f7 -> Individual file compilation
* f5 -> Build and run Project
* f9 -> creates a breakpoint on the line(cursor's line)

### Configuration settings

* All configurations <-> All platforms
    * Output directory : $(SolutionDir)\bin\$(Platform)\$(Configuration)\
    * Intermediate directory: $(SolutionDir)\bin\intermediates\$(Platform)\$(Configuration)\
* C++ -> Optimization -> maximize speed
* 

## Compilation Process

every translation unit gets compiled into an object file.

## Linking Process


## Debugging

* Breakpoints
    * f9 puts a breakpoint in the cursor's line in VS.
    * step into button lets lookup into function code upon call
    * continue button runs the program until it hits the next break point

* Memory Lookup
    * Debug > Windows > Memory for memory view ```&variablename``` shows the variable in the memory 

## Important Commands for linux

```bash
g++ file.cpp #compiles the file.cpp and creates a *.out file -> executable
g++ file1.cpp file2.cpp #compiles the files to a single *.out file
g++ -c file1.cpp file2.cpp #creates  object files file1.o file2.o
g++ file1.o file2.o #compiles the object files

```

## GDB commands

```bash
g++ -g file_mame.cpp # must compile with -g for debugging
gdb executable_file #starts a debugger session
b function_name #setting a breaking point on a function
b line_number #setting a breakpoint on line
n #goes to next line -> next
s #goes inside the function call -> step
f # where the fuck am I?
backtrace #on which function you are now and the pathway to this function
info b #shows the numbers of breakpoints in your code
info locals #shows the state of all local variables
delete 1 #delets the breakpoint 1
f frame_number #frame number is the function number from backtrace
```

## Makefiles

```makefile
file_to_be_made: from_which_file1 from_which_file2
    command to create file_to_be_made
```

## Pointers

* pointers are actually integers storing memory addresses

## Referencing

* disguised pointers

## Enums

enumeratin -> Practically it is just is an integer
by default, But type could be cast.

```C++
enum Enumeration : unsigned int{
    var1 = 1, var2 ,var3, var4
};
```

## Arrays

Can create some serius problem if tried to access index out of the scope of the array length

```c++
int arr_name[arr_length];
```