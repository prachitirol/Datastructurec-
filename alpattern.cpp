#include<iostream>
using namespace std;
int main(){
    int n ;
    cin >> n;
     
   int i = 0;
  int num=0;
 while (i < n )
  {  
 int   j=1;
   while (j<=n){
  char ch =('A'+num+i*2 );
   //char ch=('A'+i-2);
   cout<< ch << " ";
   num=num+1;
   j=j+1; 
   }
   cout<< endl;
   i=i+1;

   
}
}
