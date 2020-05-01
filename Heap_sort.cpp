/*
 ====================================================================|
                          |=    Programmer Name: Nilay Shah         =|
                          |=     Id:201901026                       =|
                          |=     Program: Heap Sort                 =|
                          |=     Average Time Complexity=O(nlogn)   =|
  ===================================================================|

                                         */
#include<iostream>
using namespace std;
class Heap{
public:
    void Heapify(int arr[],int n,int i){
    int largest=i;
    int left=2*i+1;                           //left is left chid of i where i is started with 0
    int right=2*i+2;                          //right is right chid of i where i is started with 0
    if(left<n && arr[left]>arr[largest]){
        largest=left;
    }
    if(right<n && arr[right]>arr[largest]){
        largest=right;
    }

    if(largest!=i){
        swap(arr[largest],arr[i]);    //swap if left or right child is greater than it parent
       Heapify(arr,n,largest);        //check heap condition till up to root
    }

    }
void Heap_sort(int arr[],int n){
    int i,j;
    for(i=n/2-1;i>=0;i--){           //i will start with non leaf node and check the condition of heap
        Heapify(arr,n,i);
    }

    for(i=n-1;i>=0;i--){
        swap(arr[0],arr[i]);        //max element is eliminated at last position,thus we got maximum  element at arr[i]
        Heapify(arr,i,0);
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
cout<<"Enter size of array:\n";
cin>>n;
int i,arr[n];
cout<<"Enter an element of array:\n";
for(i=0;i<n;i++){
    cin>>arr[i];
}
r1.Heap_sort(arr,n);
r1.Print(arr,n);
return 0;
}
