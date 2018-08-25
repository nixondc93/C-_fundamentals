#include <iostream>
#include <math.h>
using namespace std;

int captureNum1();
int captureNum2();

int main()
{
    int num1, num2, result, choice;

    cout << "Options:" << endl;
    cout << "\tAddition Enter 1" << endl;
    cout << "\tSubtraction Enter 2" << endl;
    cout << "\tMultiplication Enter 3" << endl;
    cout << "\tDivision Enter 4" << endl;
    cout << "\tSquare Root Enter 5" << endl;
    cout << "\tCube Root Enter 6" << endl;
    cout << "\tPower Enter 7" << endl;
    cout << "\tEnter your option: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        result = captureNum1() + captureNum2();
        cout << "Your result is " << result << endl;
        break;
    case 2:
        result = captureNum1() - captureNum2();
        cout << "Your result is " << result << endl;
        break;
    case 3:
        result = captureNum1() * captureNum2();
        cout << "Your result is " << result << endl;
        break;
    case 4:
        num1 = captureNum1();
        num2 = captureNum2();
        if (num2 == 0)
        {
            cout << "Cannot divide by 0" << endl;
        }
        else
        {
            result = num1 / num1;
            cout << "Your result is " << result << endl;
        }
        break;
    case 5:
        result = sqrt(captureNum1());
        cout << "Your result is " << result << endl;
        break;
    case 6:
        result = cbrt(captureNum1());
        cout << "Your result is " << result << endl;
        break;
    case 7:
        num1 = captureNum1();
        num2 = captureNum2();
        result = pow(num1, num2);
        cout << "Your result is " << result << endl;
        break;
    default:
        cout << "Invalid Entry" << endl << endl;
        main();
    }
    return 0;
}

int captureNum1()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    return num;
};

int captureNum2()
{
    int num;
    cout << "Enter second number: ";
    cin >> num;
    return num;
};
