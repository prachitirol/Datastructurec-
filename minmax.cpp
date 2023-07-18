#include<iostream>
using namespace std;

int maxarray(int num[],int n){
    cout<<"print the no.";
    int maxi= INT8_MIN;
    for (int i = 0; i < n; i++)
    {
        /* code */maxi=max(num[i],n);
        cout<<maxi<<endl;
    }
        cout<<"printing DONE";

return maxi;
}

int minarray(int num[],int n){
        cout<<"print the no.";

    int mini= INT8_MAX;
    for (int i = 0; i < n; i++)
    {
        /* code */mini=min(num[i],n);
        cout<<mini<<endl;
        
    }
           cout<<"printing DONE";
 
return mini;
}




int main(){
    //arrray declaration
//int arr[5]={1,2,3,4,5};

    //cout<<"hello joo";
    int arr1[16];
   // cin>>arr1[16];
   int n=16;
  for (int i = 0; i < n; i++)
  {
    /* code */    cin>>arr1[i];

  }
  
  cout<< maxarray(arr1,16);
  cout<< minarray(arr1,16);

}
   