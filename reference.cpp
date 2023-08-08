#include<iostream>
using namespace std;
/*void update(int n){
    n++;
}
int main(){
    int n=6;
    cout<<"main memeory"<<endl;
    cout<<n++<<endl;

    cout<<"reference memeory"<<endl;
    update(n);
    cout<<n<<endl;*/
    void update(int n)
        {
            n++;
        }
    int main(){
        int i=5;
        //create reference varible
        int &j=i;
        cout<<i<<endl;
        cout<<j<<endl;
        i++;
      cout<<i<<endl;
      j++;
      cout<<j<<endl;
      int n=9;
      cout<< "before the value of n"<<n<<endl;
      update(n);
      cout<<"after the value of n"<<n;
    }

