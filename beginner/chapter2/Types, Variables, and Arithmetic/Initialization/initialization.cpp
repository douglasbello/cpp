#include <complex>
#include <vector>
// variety of ways to express initializations:

int main()
{
    double d1 = 2.3;
    double d2 {2.3};

    std::complex<double> z = 1; // a complex number with double-precision floating-point scalars
    std::complex<double> z2 {d1,d2};
    std::complex<double> z3 = {1,2}; // the = is optional with {...}
    
    std::vector<int> v {1,2,3,4,5,6}; // a vector of ints
    

    // when defining a variable, you don't actually need to state its type explicitly when it can be deduced from the initalizer:

    auto b = true;
    auto ch = 'x';
    auto i = 123;
    auto d = 1.2;
    auto y = 5;
    auto f = sqrt(y); // f has the type of whatever sqrt(y) returns
    
    // We use auto where we don't have a specific reason to mention the type explicitly. "Specific reasons" include:
    //	The definition is in a large scope where we want to make the type clearly visible to readers of our code.
    //	We want to be explicit about a variable's range of precision (double rather than float)
}
