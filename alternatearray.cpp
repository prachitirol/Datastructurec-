#include<iostream>
using namespace std;

void binarysearcharray(int arr[],int size){
   int next=0;
for (int i = 0; i < size; i+=2)
{
   if(i+1<=size)
   {
   // swap(arr[i],arr[i+1]);
     next=arr[i+1];
     arr[i+1]=arr[i];
     arr[i]=next;
   } 
}

   }


void printarray(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
      cout<<arr[i]<<" ";  /* code */
    }
    cout<<"   ";
}


int main(){
    
    
    int arr1[7]={23,45,6,7,8,8,1};
    int brr[6]={3,4,5,6,7,9};

   binarysearcharray(arr1,7);
   binarysearcharray(brr,6);

printarray(arr1,7);
printarray(brr,6);


   
  
  
}
   