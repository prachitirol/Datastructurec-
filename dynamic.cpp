#include<iostream>
using namespace std;
int fact(int *arr,int n){
    int fact=0;
    for (int i = 0; i < n; i++)
    {
       fact=fact+arr[i];
    }
    return fact;
    
}
int main(){
    int n;
    cin>>n;
    int *arr=new int [n];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
       }

   int ans= fact(arr,n);
   cout<<"answer is"<<ans<<endl; 

   return 0;

}