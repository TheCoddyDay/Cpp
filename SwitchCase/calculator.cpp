// Program to build a simple calculator using switch Statement
#include <bits/stdc++.h>
bool addition(bool, bool);
bool subtraction(bool, bool);
bool multiply(bool, bool);
bool devid(bool, bool);

int main()
{
    char oper;
    float num1, num2;
    std::cout << "Enter an operator (+, -, *, /):";
    std::cin >> oper;
    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> num1 >> num2;

    switch (oper)
    {
    case '+':
        addition(true, true);
        break;
    case '-':
        subtraction(true, true);
        break;
    case '*':
        multiply(true, true);
        break;
    case '/':
        devid(true, true);
        break;
    default:
        // operator is doesn't match any case constant (+, -, *, /)
        std::cout << "Error! The operator is not correct";
        break;
    }

    return 0;
}

bool addition(bool ok, bool skip)
{
    while (ok)
    {
        int a, b = 1;
        std::cout << "0 to quit" << std::endl;
        std::cout << "Enter " << b << "th Number to add" << std::endl;
        std::cout << a << "+ ";
        std::cin >> a;
        if (a == 0)
            break;
        if (skip)
        {
            if (a < 0)
            {
                std::cout << "Skipping that Number" << std::endl;
                continue;
            }
        }
        a += a;
        b++;
    }
    return true;
}
bool subtraction(bool ok, bool skip)
{
    while (ok)
    {
        int a, b = 1, c = 0;
        std::cout << "0 to quit" << std::endl;
        std::cout << "Enter " << b << "th Number to subtract" << std::endl;
        std::cout << a << "- ";
        std::cin >> a;
        if (a == 0)
            break;
        if (skip)
        {
            if (a < 0)
            {
                std::cout << "Skipping that Number" << std::endl;
                continue;
            }
        }
        if (a < 0)
        {
            c++;
            std::cout << "Not able to do it more" << std::endl;
            continue;
            if (c == 3)
                break;
        }
        a -= a;
        b++;
    }
    return true;
}
bool multiply(bool ok, bool skip)
{
    while (ok)
    {
        int a, b = 1, c = 0;
        std::cout << "0 to quit" << std::endl;
        std::cout << "Enter " << b << "th Number to multiply" << std::endl;
        std::cout << a << "* ";
        std::cin >> a;
        if (a == 0)
            break;
        if (skip)
        {
            if (a < 0)
            {
                std::cout << "Skipping that Number" << std::endl;
                continue;
            }
        }
        if (a < 0)
        {
            c++;
            std::cout << "Not able to do it more" << std::endl;
            continue;
            if (c == 3)
                break;
        }
        a *= a;
        b++;
    }
    return true;
}
bool devid(bool ok, bool skip)
{
    while (ok)
    {
        int a, b = 1, c = 0;
        std::cout << "0 to quit" << std::endl;
        std::cout << "Enter " << b << "th Number to devid" << std::endl;
        std::cout << a << "/ ";
        std::cin >> a;
        if (a == 0)
            break;
        if (skip)
        {
            if (a < 0)
            {
                std::cout << "Skipping that Number" << std::endl;
                continue;
            }
        }
        if (a < 0)
        {
            c++;
            std::cout << "Not able to do it more" << std::endl;
            continue;
            if (c == 3)
                break;
        }
        a /= a;
        b++;
    }
    return true;
}