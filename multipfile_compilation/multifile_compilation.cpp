#include <iostream>
#include "multifile_compilation_utilis.h" // Double, preprocessor will find in the current directory


/*
There are 3 files:
1. header file : declarations
2. implementation file: definition
3. main file: calling 

NOTE: we have 1 mainfile and N header file, M implementation file arcording to header file N < M
because header file can include more implementation file 

*/
int main()
{
    Rectangle rectangle;
    rectangle.length = 10;
    rectangle.width = 10;

    std::cout << area(rectangle.length, rectangle.width) << std::endl; // 100
    std::cout << area(rectangle.length) << std::endl; // 100
    std::cout << area(rectangle) << std::endl; // 100

    // Default Arguments
    std::cout << pow(3, 3) << std::endl; // 27
    std::cout << pow(3) << std::endl; // 9

}

/*
Compile by using:
$ cd multipfile_compilation
$ g++ multifile_compilation.cpp multifile_compilation_utilis.cpp

tai@tai ~/Downloads/VietAI/c++/multipfile_compilation
$ ./a.out

100
100
100
27
9
*/

/*
// Compile from the Object files to hide the source file from another people.
// Create Object files
$ g++ -c multifile_compilation.cpp multifile_compilation_utilis.cpp
// and Compile from Object files rather than source file:
$ g++ multifile_compilation.o multifile_compilation_utilis.o
$ ./a.out

*/

/*
Makefile
makefile
---------------------------------------------------------
file1.cpp -> file1.o 
+
file2.cpp -> file2.o 
=
a.out
---------------------------------------------------------
When we change file1.cpp and then create object files
we only need, to linker to link all *. files
file1.cpp -> file1.o 
+
file2.o 
=
a.out

in Makefile or makefile:
file1.o : file1.cpp  // every time file1.cpp change, it will execute 
    g++ -c file1.cpp


Run
./math
*/