#include <iostream>
#include <iterator>
using namespace std;

// In assignments and in arithmetic operations, C++ performs all meaningful conversions between the basic types so that they can be mixed freely
// like in the example below.
int some_function()
{
    double d = 2.2;
    int i = 7;
    d = d+i;
    i = d*i;
    return i;
}

int main()
{
    cout << some_function() << endl;
    return 0;
}
