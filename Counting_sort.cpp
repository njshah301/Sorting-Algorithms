#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array\n";
    cin >> n;
    int arr[n];
    int i;
    cout << "Enter elements\n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    k = arr[0];
    for (i = 0; i < n; i++)
    {
        if (k < arr[i])
        {
            k = arr[i];
        }
    }
    int c[k];
    for (i = 0; i <= k; i++)
    {
        c[i] = 0;
    }
    int j;
    for (i = 0; i <= k; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[j] == i)
            {
                c[i]++;
            }
        }
    }

    for (i = 1; i <= k; i++)
    {
        c[i] = c[i] + c[i - 1];
    }
    int output[n];
    for (i = 0; i < n; i++)
    {
        output[i] = 0;
    }

    for (i = n - 1; i >= 0; i--)
    {
        output[c[arr[i]] - 1] = arr[i];
        c[arr[i]]--;
    }
    for (i = 0; i < n; i++)
    {
        cout << output[i] << " ";
    }

    return 0;
}
