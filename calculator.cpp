#include "calculator.h"

int Calculator::Add (double num1, double num2)
{
    return num1 + num2 + 0.5;
}

int Calculator::Sub (double num1, double num2)
{
    return Add (num1, -num2);
}

int Calculator::Mul (double num1, double num2)
{
    return num1 * num2 + 0.5;
}
