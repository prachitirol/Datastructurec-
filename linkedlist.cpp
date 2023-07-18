#include<iostream>
#include<conio.h>
using namespace std;
struct node{
    int data;
    node *link;

};
node *head=NULL;
int main(){

    node *ptr= new node();
    ptr->data=3;
    
    ptr->link=NULL;
    head=ptr;
}