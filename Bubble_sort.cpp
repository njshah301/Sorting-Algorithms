/*
 ====================================================================|
                          |=    Programmer Name: Nilay Shah         =|
                          |=     Id:201901026                       =|
                          |=     Program: Bubble Sort               =|
                          |=     Average Time Complexity=O(n^2)     =|
  ===================================================================|

                                         */
#include<iostream>
using namespace std;
class Bubble_sort{
public:
    void swap(int *p1,int *p2){
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    }
    void Bubble(int arr[],int n){
    int i,j;
    int check=0;
    for(i=0;i<n;i++){
            check=0;
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);  //swap bigger element to right side
                check++;                  //This check is used because if the array is already sorted than it's not check further and break so that reduce some time complexity

            }
        }
        if(check==0){
            break;
        }
    }
    }
    void Print(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    }
}r1,r2,r3;
int main(){
int n;
cout<<"Enter the size of array\n";
cin>>n;
int arr[n];
int i;
cout<<"Enter element to sort:\n";
for(i=0;i<n;i++){
    cin>>arr[i];
}
r1.Bubble(arr,n);
r1.Print(arr,n);
return 0;
}
