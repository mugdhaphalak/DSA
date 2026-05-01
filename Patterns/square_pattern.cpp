#include <iostream>
using namespace std;

int main()
{

// 123 456 789
    int n = 3;
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << num;
            num++;
        }
        cout << endl;
    }
    cout<<endl;

// ABC DEF HIJ
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
    return 0;
}