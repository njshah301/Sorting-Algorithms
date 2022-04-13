/*
 ====================================================================|
                          |=    Programmer Name: Nilay Shah         =|
                          |=     Id:201901026                       =|
                          |=     Program: Bubble Sort               =|
                          |=     Average Time Complexity=O(n^2)     =|
  ===================================================================|

                                         */
#include <iostream>
using namespace std;
class Bubble_sort
{
public:
    void swap(int *p1, int *p2)
    {
        int temp;
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }

    void insertion(int arr[], int n)
    {
        for(int i=1;i<n;i++)
        {
            int num=arr[i];
            int j=i-1;
            while(j>=0 && arr[j]>num)
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=num;
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
    cout << "Enter the size of array\n";
    cin >> n;
    int arr[n];
    int i;
    cout << "Enter element to sort:\n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    r1.insertion(arr, n);
    r1.Print(arr, n);
    return 0;
}
