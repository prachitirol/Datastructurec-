#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   int sum=1, fact=1;
  while (fact<=n)
  {
    sum=sum*fact;
    cout<<"sum of n factorial:"<< sum<<endl;
    fact=fact+1;
    /* code */
  }
  
}