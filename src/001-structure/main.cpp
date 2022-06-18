// Everything begin with '#' is a preprocessor statement.
// A preprocessor statement happens just before the actual compilation.
// In this case is 'include'.
// "#include" is looing for a file. In this case, is looking for 'iostream'.
// We call a file that can be 'included' as a HEADER.
// HEADER is declaring variables or functions are exist. // Keyword: Declaration, defination.
// Declarations in a header file have to be defined in the header file or in other cpp file.
#include <iostream>

void Log(const char* message)
{
    std::cout << message << std::endl;
}

// MAIN funciton is a entry point for execution file.
// which means, a computer starts to execute the code in the main function first.
int main()
{
    // Codes always execute line by line.
    // In this case, 'std' is a namespace in 'iostream' header file 
    // and 'cout', 'endl' and 'cin' are functions or variables in the namespace.

    // '<<' is an operator that join strings.

    // std::cout << "Hello World!" << std::endl; // Line 1
    Log("Hello World!");
    std::cin.get();

    // 'return 0' means that the program executed without error and terminate program.
    // in 'int main()' function, if you don't return anything,
    // it will assume that you are returning the zero.

    return 0; // Line 3
}

// Only *.cpp file gets compiled.
// Every *.cpp file will get complied into an 'object file'.
// LINKER's job is the take all of obj files and stich those together.
// when you build(complie) a single cpp file, you will get a one obj file for the cpp file. LINKER will do nothing here.
// Instead, when you build a whole solution or a project, LINKER kicks in and make a exe file in this exemple.