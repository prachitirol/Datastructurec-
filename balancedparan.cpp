#include <iostream>
#include<stack>
using namespace std;
bool isbalanced(string n)
{
    stack <char> s;
    char ch;
    for (int i=0;i<n.size();i++)
    {
        if(n[i]=='('||n[i]=='['||n[i]=='{'){
            s.push(n[i]);
           continue;

        }
        if(s.empty())
        {
            return false ;
        }
        switch(n[i]){
         case -')':
          ch = s.top();
           s.pop();
           if (ch=='{' || ch=='[')
                  return false;
                  break;
            case '}': 
               ch = s.top();
               s.pop();
               if (ch=='(' || ch=='[')
                  return false;
                  break;
            case ']': 
               ch = s.top();
               s.pop();
               if (ch =='(' || ch == '{')
                  return false;
                  break;
         }
      }
      return (s.empty()); 
}
int main() {
   string s;
   cin>>s;
   if (isbalanced(s))
      cout << "Balanced";
   else
      cout << "Not Balanced";
}

