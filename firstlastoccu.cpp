#include<iostream>
using namespace std;


int first(int arr[],int n,int key){
   int start=0;
   int end=n-1;
   int ans=-1;
   int mid=(start+end)/2;

   while(start<=end)
   {
     if(arr[mid]==key)
     {
       ans=mid;
       end=mid-1;

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
   return ans;
}

int last(int arr[],int n,int key){
   int start=0;
   int end=n-1;
   int ans=-1;
   int mid=(start+end)/2;

   while(start<=end)
   {
     if(arr[mid]==key)
     {
       ans=mid;
       start=mid+1;

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
   return ans;
}




int main(){
    
    
    int arr1[7]={23,45,6,7,8,8,12};
   // int brr[6]={3,4,5,6,7,9};

  first(arr1,7,8);
   cout<<"index of firt occurence 8: "<<first(arr1,7,8)<<endl;
   
    last(arr1,7,8);
   cout<<"index of last occurence 8: "<<last(arr1,7,8)<<endl;


   
  
 return 0; 
}
   