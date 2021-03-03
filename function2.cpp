#include <iostream>

using std::cin;
using std::cout;

double power( double base, int exponent) // function definition
{
    double result = 1;
    for(int i=0; i<exponent; i++)
    {
        result = result * base;
    }
    return result;
}

void print_pow(double base, int exponent)
{
    double myPower = power(base, exponent);
    cout << base << " raised to the "<< exponent << " power is "<< myPower << ".\n";
}


int main()
{
    int base, exponent; // we need it to store value for cin
    cout << "What is the base? : ";
    cin >> base;
    cout << "What is the exponent?: ";
    cin >> exponent;

    print_pow(base, exponent);
    print_pow(100, 4);
    print_pow(4, 2);
}



