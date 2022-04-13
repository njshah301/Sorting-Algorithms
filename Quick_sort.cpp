/*
 ====================================================================|
                          |=    Programmer Name: Nilay Shah         =|
                          |=     Id:201901026                       =|
                          |=     Program: Quick Sort                =|
                          |=     Average Time Complexity=O(nlogn)   =|
  ===================================================================|

                                         */
#include <iostream>
using namespace std;
class Quick_Sort
{
public:
    void swap(int *p1, int *p2)
    {
        int temp;
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }

    int Partition(int arr[], int ls, int rs)
    {                   // This method does part of two which has left part that less than arr[temp] and right part that greater than arr[temp]
        int temp = ls;  // main number that we take ,here we take first element of given part
        int start = ls; // this start and last is used for our main parting method
        int last = rs;
        while (start < last)
        {
            while (arr[temp] >= arr[start])
            { // left part side implementation
                start++;
            }
            while (arr[temp] < arr[last])
            { // right part side implementation
                last--;
            }

            if (start < last)
            {
                swap(&arr[start], &arr[last]);
            }
        }

        swap(&arr[ls], &arr[last]);
        return last; // The main position of our temp is returned
    }

    void Quick(int arr[], int ls, int rs)
    {
        if (ls < rs)
        {
            int Place = Partition(arr, ls, rs);

            Quick(arr, ls, Place - 1); // implementation of left part
            Quick(arr, Place + 1, rs); // implementation of right part
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
    cout << "Enter size of an array:\n";
    cin >> n;
    int i, arr[n];
    cout << "Enter an element in array:\n";
    for (i = 0; i < n; i++)
    {

        cin >> arr[i];
    }
    r1.Quick(arr, 0, n - 1); // Quick method call
    r1.Print(arr, n);        // print method call

    return 0;
}
