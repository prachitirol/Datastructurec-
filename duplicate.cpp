#include<iostream>
using namespace std;
int duplicateinarray(int *arr,int n)
{
    int ans=0;
    for(int i=0;i< arr.size();i++)
    {
        ans=ans^arr[i];
    }
    for (int i = 1; i < n; i++)
    {
     ans=ans^i ;  /* code */
    }
return ans;
    
}

int main(){
    int arr[10] ={2,3,4,1,6,7,8,9,12,2};
    duplicateinarray(arr,10);
}