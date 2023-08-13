#include<iostream>
using namespace std;
int factno(int n){

int a=0,b=1;
//cout<<a<<" "<<b<<" ";
int sum;
for (int i = 0; i < n; i++)
{
    sum=a+b;
   //cout<<sum <<" ";
   a=b;
   b=sum; /* code */
  
}

return b;
}
int main(){
  int n;
  cin>>n;
  
  cout<<factno(n);
}

//int main(){
    
//factno();
//}
  /* int sum=1, fact=1;
  while (fact<=n)
  {
    sum=sum*fact;
    cout<<"sum of n factorial:"<< sum<<endl;
    fact=fact+1;
    /* code */
 