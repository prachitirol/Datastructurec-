#include<iostream>
using namespace std;

int binarysearcharray(int arr[],int n,int key){
   int start=0;
   int end=n-1;

   int mid=(start+end)/2;

   while(start<=end)
   {
     if(arr[mid]==key)
     {

    return mid;
    }
    if(key>arr[mid])
    {
      start=mid+1;
    }
    else{
      end=mid-1;
    }
   
    mid=(start+end)/2;
    
   }
   return -1;
}




int main(){
    
    
    int arr1[7]={23,45,6,7,8,8,12};
    int brr[6]={3,4,5,6,7,9};

   int arrindex = binarysearcharray(arr1,7,12);
   cout<<"index of 12: "<<arrindex;
   

   //binarysearcharray(brr,6,3);
   int brrindex = binarysearcharray(arr1,6,12);
   cout<<"index of 12: "<<brrindex;


   
  
 return 0; 
}
   