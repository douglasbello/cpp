#include <vector>

int main()
{
    const int dmv = 17; // dmv is a named constant
    int var = 17;
    constexpr double max1 = 1.4 * dmv; // OK if max1 is a constant expression
    constexpr double max2 = 1.4 * var; // error: var is not a constant expression
    const double max3 = 1.4 * var; // OK, may be evaluated at run time
    double sum(const std::vector<double&>); // sum will not modify its argument
    std::vector<double> v {1.2,3.4,4.5}; // v is not a constant
    const double s1 = sum(v); // OK: evaluated at run time
    constexpr double s2 = sum(v); // error: sum(v) not constant expression

}


// For a function to be usable in a constant expression, that is, in an expression that will be evaluated by the compiler,
// it must be defined constexpr. For example:

constexpr double square(double x)
{
	return x * x;
}
