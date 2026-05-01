#include <iostream>
using namespace std;

minOfTwo(int a, int b) //parameters
{
    if (a < b)
    {
        return a;
    } else
    {
        return b;
    }
}

int main()
{
    cout << minOfTwo(5, 3); //arguments

    return 0;
}