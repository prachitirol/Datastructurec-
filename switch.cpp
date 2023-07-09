 #include<iostream>
/*using namespace std;
int main(){
    int n;
    cin>>n;
   // int x,y,z,a;
   switch(n)
   case(100):cout<<(n/100)<<endl;
             cout<<n;
             break;

   case(50):cout<<(n/50)<<endl;
             cout<<n;
             break;

   case(20):cout<<(n/20)<<endl;
             cout<<n;
             break;

    case(10):cout<<(n/10)<<endl;
             cout<<n;
             break;

             case(100):cout<<(n/100)<<endl;
             cout<<n;
             break;

}*/

using namespace std;

int main()
{
  int amount;
  cin>>amount;
  
  int Rs100 , Rs50 , Rs20 , Rs10,Rs5;

  switch(1)
  {
      case 1: Rs100=amount/100;
              amount=amount%100;
              cout<<"No of 100 Rupee ="<<Rs100<<endl;
              
         
      case 2: Rs50=amount/50;
              amount=amount%50;
              cout<<"No of 50 Rupee ="<<Rs50<<endl;
              

      case 3: Rs20=amount/20;
              amount=amount%20;
              cout<<"No of 20 Rupee ="<<Rs20<<endl;
               

      case 4: Rs10=amount/10;
              amount=amount%1;
              cout<<"No of 10 Rupee ="<<Rs10<<endl; 
          
       case 5: Rs5=amount/5;
              amount=amount%5;
              cout<<"No of 5 Rupee ="<<Rs5<<endl;    }
        return 0;
}