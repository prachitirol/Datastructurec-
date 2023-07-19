#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long n ;
    cin >> n;
    long ans=0;
    long i=0;

    while(n!=0)
    {
  long bit = n&1;
  //ans=(ans *10)+digit;
    ans=(bit * pow(10, i) + ans);

   n=n>>1;
i++;
 // n=n>>1;
 // n=n/10;101
 // i++;

    }
    //cout<<bit<<endl;
    cout<<ans;
}