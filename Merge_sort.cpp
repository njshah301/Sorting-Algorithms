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
void Merge(int arr[],int ls,int mid,int rs){            //This method Merge two subarrays in sorted order
int size1,size2;                              //this size is for two subarrays
size1=mid-ls+1;
size2=rs-mid;
int a[size1],b[size2];
int i;
for(i=0;i<size1;i++){
    a[i]=arr[i+ls];
}
for(i=0;i<size2;i++){
    b[i]=arr[i+mid+1];
}

int nj,kj,fj;
nj=0;                     //for array a[size1]
kj=0;                    //for array b[size2]
fj=ls;                  //for main array arr[n]
while(nj<size1 && kj<size2){
    if(a[nj]<b[kj]){
        arr[fj]=a[nj];
        nj++;
    }
    else{
        arr[fj]=b[kj];
        kj++;
    }
    fj++;
}
//Now,Here if extra elements are available than this procedure include it
while(nj<size1){
    arr[fj]=a[nj];nj++;
    fj++;
}
while(kj<size2){
    arr[fj]=b[kj];
    kj++;
    fj++;
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
