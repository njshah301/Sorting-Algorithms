/*
 ====================================================================|
                          |=    Programmer Name: Nilay Shah         =|
                          |=     Id:201901026                       =|
                          |=     Program: Selection Sort            =|
                          |=     Average Time Complexity=O(n^2)     =|
  ===================================================================|

                                         */
#include <iostream>
using namespace std;
class Selection_Sort
{
public:
    void swap(int *p1, int *p2)
    {
        int temp;
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }
    void Selection(int arr[], int n)
    {
        int i, j;
        for (i = 0; i < n; i++)
        {
            int mini = i;
            for (j = i + 1; j < n; j++)
            {
                if (arr[mini] > arr[j])
                {
                    mini = j;
                }
            }
            swap(&arr[i], &arr[mini]); // minimum element is selected and swapped it left most side
        }
    }
    void Stable_Selection(int arr[], int n)
    { // This is for stability of selection sort
        int i, j;
        for (i = 0; i < n; i++)
        {
            int mini = i;
            for (j = i + 1; j < n; j++)
            {
                if (arr[mini] > arr[j])
                {
                    mini = j;
                }
            }
            
            // In spite of swapping we have put minimum element to its original sorted place
            int m = arr[mini];
            while (mini > i)
            {
                arr[mini] = arr[mini - 1];
                mini--;
            }
            arr[i] = m;
        }
    }

    void Print(int arr[], int n)
    {
        int i;
        for (i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
} r1, r2, r3;
int main()
{
    int n;
    cout << "Enter the size of an array:\n";
    cin >> n;
    int arr[n];
    int i;
    cout << "Enter element to sort:";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int num;
    cout << "Enter between this two:\n\n 1:Selection Sort\n\n 2:Stable Selection Sort\n\n:";
    cin >> num;
    switch (num)
    {
    case 1:
    {
        r1.Selection(arr, n);
        break;
    }
    case 2:
    {
        r1.Stable_Selection(arr, n);
        break;
    }
    default:
        cout << "Invalid Input:\n";
    }
    r1.Print(arr, n);

    return 0;
}
