#include<iostream>
using namespace std;
int positive(int arr[],int n)
{ int s=0,e=n-1;
    for(int i=0;i<n;i++){


  if (arr[i]<0)  {
    s=arr[i];
    s++;
  }
  else{ e=arr[i];
    e--;}
    return s;

} 

}
int main()
{
int arr[]={-12,11,-13,-5,6,-7,5,-3,-6};
cout<<"print the new array "<<positive(arr,9);

}