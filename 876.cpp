#include<iostream>
using namespace std;
class node{
public:
int data;
node* next;
node(int val){
    data=val;
    next=NULL;
}
};
class list{
    node* head;
    node* tail;
public:
list(){
    head=tail=NULL;
}
void push_front(int val){
    node* newnode=new node(val);
    if(head==NULL){
        head=tail=newnode;
        return;
    }
    newnode->next=head;
    head=newnode;
}

//brute force
void middleBF(){
    node* temp=head;
    int idx=0;
    while(temp!=NULL){
        idx++;
        temp=temp->next;
    }
    temp=head;
    int pos=0;
    while(temp!=NULL){
        if(pos==idx/2){
            cout<<temp->data<<endl;
            return;
        }
        temp=temp->next;
        pos++;
    }
}

//optimal approch
void middleOA(){
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data<<endl;
}
void printll(){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
};
int main(){
list ll;
ll.push_front(1);
ll.push_front(2);
ll.push_front(3);
ll.push_front(4);
ll.push_front(5);
ll.push_front(6);
ll.printll();
ll.middleBF();
ll.middleOA();
    return 0;
}