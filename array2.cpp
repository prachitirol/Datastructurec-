#include<iostream>
using namespace std;

    void printArray(int arr[],int size)
    {
        cout<<"printing array"<<endl;
        for (int i = 0; i < size; i++)
        {
           cout<<arr[i]<<" "; /* code */
        }
        cout<<"Printing DONE"<<" "<<endl;
        cout<<endl;
    }
    void printArraych(char arr[],int size)
    {
        cout<<"printing array"<<endl;
        for (int i = 0; i < size; i++)
        {
           cout<<arr[i]<<" "; /* code */
        }
        cout<<"Printing DONE"<<" "<<endl;
        cout<<endl;
    }
    int main(){

    int first[10];
    //index 3 value
    cout<<"the value  of 3 index is:"<<first[6]<<endl;
//value index to out of the scope
    cout<<"the value  of 10 index is:"<<first[10]<<endl;

int second[3]={1,2,3};
    cout<<"the value  of 3 index is:"<<second[2]<<endl;
    //next printing all element
    int third[15]={2,3,4};
    int n=15;
    printArray(third,15);

    //
    int fourth[12]={0};
    printArray(fourth,12);
    //
    int fifth[14];
    printArray(fifth,14);

    //character print in array
    char ch[5]={'a','b','c'};
    printArraych(ch,5);

    cout<<"Everthing is good : )";
}