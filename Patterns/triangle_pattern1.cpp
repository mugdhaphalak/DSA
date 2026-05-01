#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;



// *
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

// 1 22 333 4444
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout << num;
        }
        num++;
        cout << endl;
    }
    cout << endl;

// A BB CCC DDDD
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch;
        }
        ch++;
        cout << endl;
    }

    return 0;
}
