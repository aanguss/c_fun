#include <math.h>
// https://www.srcmake.com/home/google-cpp-test-framework

// Get the Square root of a number. 
double squareRoot(const double a) 
{
double b = sqrt(a);
if(b != b) // NaN check
    { return -1.0; }
else
    { return sqrt(a); }
}