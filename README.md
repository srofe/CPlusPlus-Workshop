# The C++ Workshop

From **The C++ Workshop** book published by [Packt Publishing](https://www.packtpub.com). A number of exercises and
activities to introduce C++ modern programming concepts.

The book introduces these concepts through a range of chapters covering:

1. **Your First C++ Application** introduces the basics of building a C++ program, keywords, pre-processor directives,
   basic input and output via the console and functions.
2. **Control Flow** provides examples of if/else statements, switch/case statements, various looping mechanisms as well
   as break and continue statements.
3. **Built-In Data Types** explains the basic data types, then how these can be combined into container types such as
   arrays and vectors, and more complicated containers such as structs and classes.
4. **Operators** looks at the various arithmetic, relational, logical and bitwise operators.
5. **Pointers and References** explains the use of pointers and references and how these are used.
6. **Dynamic Variables** looks at dynamic memory allocation and memory management.
7. **Ownership and Lifetime of Dynamic Variables** delves deeper into the subject of dynamic variables and memory
   management.
8. **Classes and Structs** provides more detail on the use of these container types, including constructors and
   destructors.
9. **Object-Oriented Principles** looks at some basic topics on object-oriented programming such as encapsulation.
10. **Advanced Object-Oriented Principles** deals with inheritance, polymorphism and some low-level programming aspects
    of C++.
11. **Templates** introduces the topic of templates and how these can be used to reduce duplication when developing
    algorithms.
12. **Containers and Iterators** dives deeper into containers such as vectors, sets, queues and stacks, and how to
    traverse these using iterators.
13. **Exception Handling** looks at handling errors using exceptions.

While the book suggests using online C++ compilers for writing and running the examples and activities introduced. While
that is convenient, it is typically now how C++ programs are developed. For the examples I have used the
[CLion](https://www.jetbrains.com/clion/) integrated development environment from
[JetBrains](https://www.jetbrains.com).

The project is set up using a top-level `CMakeLists.txt` file which used to include subdirectories for each book chapter.
Within each Chapter subdirectory are number of Exercises and Activities, again in separate subdirectories. Each
subdirectory has its own `CMakeLists.txt` file. The lower level Exercise and Activity `CMakeLists.txt` files are for
building executables, whereas the upper level `CMakeLists.txt` files just include the lower level subdirectories.

## Your First C++ Program

This chapter starts with the typical _Hello World_ program which is written and compiled in the first exercise. Following
this some language keywords are introduced to indicate what words have been reserved and should not be used. The concept
of preprocessor directives is discussed to introduce `#include`, macros and conditional compilation. Exercise 2 shows
how preprocessor directives can be used to define constant values.

Basic console input and output are shown in Exercise 3 which prompts a user to enter some information, and print this
back to them. Functions are introduced and passing of parameters by value or reference is discussed, as well as function
overloading. Exercise 4 shows how to use a function to determine the maximum of two numbers.

Finally, an Activity is presented for the reader to write their own program which will:

* Have a user enter their name and age.
* Use macros to define age brackets to group people.
* Print the age group which the user belongs to.

## Control Flow

This chapter provides examples of `if/else` statements, `switch/case` statements as well as `while`, `do while`, `for`
range-based loops and `break/contine` statements.

The first exercise (Exercise 5) shows how `if/else` blocks can be used to make decisions by informing the user if a
number is greater than or less than 10.

Exercise 6 provides an example of a simple menu program which prompts the user with a list of items, and when an item
is selected it reports the cost of that item. 

Exercise 7 provides the same menu program using `switch/case` instead of `if/else`.

Exercise 8 extends the menu program using a `while` loop to allow the user to select options indefinitely. Exercise 9
provides and example of a simple `while` and`do while` loops, then exercise 10 provides an example of a `for` loop.

Exercise 11 uses two loops to prompt for number, then outputs that number of randomly generated integers. If the user
enters a value of `0`, the program stops.
