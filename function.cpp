#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

double power(double, int); // declaration
// double power(double base, exponent);

int main()
{
    int base, exponent;
    cout << "What is the base? : ";
    cin >> base;
    cout << "What is the exponent?: ";
    cin >> exponent;

    double myPower = power(base, exponent);
    // myPower = pow(base, exponent) // from <cmath>
    cout << myPower << std::endl;
}

double power( double base, int exponent) // function definition
{
    double result = 1;
    for(int i=0; i<exponent; i++)
    {
        result = result * base;
    }
    return result;
}

