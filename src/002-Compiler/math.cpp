#define INTEGER int

int Add(int a, int b)
{
    int result = a + b;
    return result;
}

int Multiply(int a, int b)
{
    int result = a * b;
    return result;
#include "endBrace.h"

// include header is just copy and paste what is in the header file.

// if you want to check what preprocessor do,
// open properties->C/C++->Preprocessor->Preprocess to a File->Yes

// INTEGER works just like what int do.
INTEGER Minus(int a, int b)
{
    INTEGER result = a - b;
    return result;
}

#if 0 // if false.
int Divde(int a, int b)
{
    int result = a / b;
    return result;
}
#endif

// obj is binary machine code which can open with text editor.