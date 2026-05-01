// CALCULATE SUM OF DIGITS OF A NUMBER

#include <iostream>
using namespace std;

int sumOfDigits(int num)
{
    int digSum=0;

    while (num > 0)
    {
        int lastDig = num % 10;
        num /= 10;
        digSum += lastDig;
    }

    return digSum;
}

int main()
{
    cout << "Sum of individual numbers= " << sumOfDigits(54321) << endl;

    return 0;
}