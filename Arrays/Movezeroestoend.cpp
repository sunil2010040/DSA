#include <bits/stdc++.h>
using namespace std;

int moveToend(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] != 0)
                {
                    swap(arr[i], arr[j]);
                }
            }
            for (int i = 0; i < n; i++)
            {
                return arr[i];
            }
        }
    }
}

int main()
{
    int r, numbers[r];
    cin >> r;
    for (int i = 0; i < r; ++i)
    {
        cin >> numbers[i];
    }
    for (int i = 0; i < r; ++i)
    {
        cout << moveToend(numbers, r) << " ";
    }
    return 0;
}