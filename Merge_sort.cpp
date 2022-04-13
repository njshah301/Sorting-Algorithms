/*
 ====================================================================|
                          |=    Programmer Name: Nilay Shah         =|
                          |=     Id:201901026                       =|
                          |=     Program: Merge Sort                =|
                          |=Average Time Complexity=O(nlogn)        =|
  ===================================================================|

                                         */
#include<iostream>
using namespace std;

class Merge_Sort{
    public:

   
void Merge(int arr[],int ls,int mid,int rs){           //This method Merge two subarrays in sorted order
int size1=mid+1-ls;
int size2=rs-mid;
int a[size1],b[size2];
int size=rs-ls+1;
int i=0,j=0;
int temp=0;

for(int i=0;i<size1;i++)
{
    a[i]=arr[i];
}

for(int i=size1;i<size;i++)
{
    b[temp++]=arr[i];
}
i=0,j=0;
temp=0;
while(i<size1 && j<size2)
{
    if(a[i]<=b[j])
    {
        arr[temp++]=a[i++];
    }
    else
    {
        arr[temp++]=b[j++];
    }
}
if(i<size1)
{
    while(i<size1)
    {
        arr[temp++]=a[i++];
    }
}
if(j<size2)
{
    while(j<size2)
    {
        arr[temp++]=b[j++];
    }
}



}
void MergeSort(int arr[],int ls,int rs){

if(ls<rs)
{
    int mid=(ls+rs)/2;
    MergeSort(arr,ls,mid);                  //This recurcive method create two subarrays
    MergeSort(arr,mid+1,rs);                //This recurcive method create two subarrays
    Merge(arr,ls,mid,rs);
}
}
void Print(int arr[],int n){
int i;
for(i=0;i<n;i++){

    cout<<arr[i]<<" ";
}


}

}r1,r2;

int main()
{
    int n;
    cout<<"Enter size of an array:\n";
    cin>>n;
    int arr[n];
int i,ls=0,rs=n-1;                                          //ls is most left size and rs is most right size index
cout<<"Enter an element in array::\n";
for(i=0;i<n;i++){
    cin>>arr[i];
}
 r1.MergeSort(arr,ls,rs);
 r1.Print(arr,n);



    return 0;
}
