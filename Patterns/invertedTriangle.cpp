#include <iostream>
using namespace std;

int main()
{
    int n, num = 1;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // spaces
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }

        // nums
        for (int j = 1; j <= n - i; j++)
        {
            cout << num;
        }
        num++;
        cout << endl;
    }

    return 0;
}
