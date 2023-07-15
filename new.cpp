#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

  int start=0,end=n-1;
  if (start==end)
  {
    
   
    cout<<"this is not pallindrome";
     start++;
    end--;

  }
  else{
        cout<<"this is  pallindrome";
  }
}