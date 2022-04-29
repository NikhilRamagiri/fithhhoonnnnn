#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cin >> r;
    cin >> c;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
            sum += arr[i][j];
        }
        cout << sum;
        cout << endl;
    }

    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
        {
            cout << arr[j][i] << " ";
            sum += arr[j][i];
        }
        cout << sum;
        cout << endl;
    }

    int pd = 0, sd = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j)
            {
                pd += arr[i][j];
            }
            if (i + j == r - 1)
            {
                sd += arr[i][j];
            }
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << pd << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i + j == r - 1)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << sd;
}
