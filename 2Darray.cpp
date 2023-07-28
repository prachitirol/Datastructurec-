#include<iostream>
using namespace std ;
bool ispresnt(int arr[][4],int target,int i,int j)
{
  for (int i = 0; i < 3; i++)
    { 
       for (int j = 0; j < 4; j++)
       {
      if( arr[i][j]==target){
         return 1;
      }
       }
   }
   return 0;
}
void printsum(int arr[][4],int i,int j)
{
  for (int i = 0; i < 3; i++)
    { int sum=0;
       for (int j = 0; j < 4; j++)
       {
      sum=sum+ arr[i][j];
         
      }
      cout<<sum<<" ";
       }
         }
   

int main(){

    int arr[3][4];

   for (int i = 0; i < 3; i++)
    { 
       for (int j = 0; j < 4; j++)
       {
        cin>>arr[i][j];
       }
   }
   
     for (int i = 0; i < 3; i++)
    { 
       for (int j = 0; j < 4; j++)
       {
        cout<<arr[i][j]<<" ";
       }
       cout<<endl;   
    }
   cout<<"Enter the element of the array"<<endl;
   int target;
   cin >>target;
   if(ispresnt(arr,target,3,4)){
      cout<<"element found"<<endl;

   }
   else
   cout<<"element is not found"<<endl;

   printsum(arr,3,4);
    
}
        