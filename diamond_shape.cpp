#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    // Print upper half of the diamond
    for (int i = 1; i <= n; i++)
    {
        // Print spaces
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        // Print asterisks
        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "*";

        cout << endl;
    }

    // Print lower half of the diamond
    for (int i = n - 1; i >= 1; i--)
    {
        // Print spaces
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        // Print asterisks
        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "*";

        cout << endl;
    }
}
