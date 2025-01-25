#include<iostream>
using namespace std;
class node{
public:
int data;
node* next;
node* pre;
node(int val){
data=val;
next=pre=NULL;
}
};
class doublylist{
    node* head;
    node* tail;
public:
doublylist(){ 
    head=tail=NULL;
}
void push_front(int val){
node* newnode=new node(val);
if(head==NULL){
    head=tail=newnode;
}
else{
newnode->next=head;
head->pre=newnode;
head=newnode;
}
}
void push_back(int val){
    node* newnode=new node(val);
    if(head==NULL){
    head=tail=newnode;
}
else{
    tail->next=newnode;
    newnode->pre=tail;
    newnode->next=NULL;
    tail=newnode;
}
}
void pop_front(){
    node* temp=head;
    temp=temp->next;
    temp->pre=NULL;
    delete head;
    head=temp;
}
void pop_back(){
    node* temp=head;
    while(temp->next!=tail){
        temp=temp->next;
    }
temp->next=NULL;
delete tail;
tail=temp;
}
void printdll(){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}
};
int main(){
doublylist dll;
dll.push_front(1);
dll.push_front(2);
dll.push_front(3);
dll.push_front(4);
dll.push_front(5);
dll.push_back(5); 
dll.pop_front();
dll.pop_back();
dll.printdll();
    return 0;
}