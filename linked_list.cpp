#include<iostream>
#include<vector>
#include<algorithm>
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
else{
newnode->next=head;
head=newnode;
}
}
void push_back(int val){
    node* newnode=new node(val);
    if(head==NULL){
    head=tail=newnode;
    return;
    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
}
void pop_front(){
    if(head==NULL){
        return;
    }
node* temp=head;
head=head->next;
temp->next=NULL;
delete temp;
}
void pop_back(){
    if(head==NULL){
        return;
    }
node* temp=head;
while(temp->next!=tail){
    temp=temp->next;
}
temp->next=NULL;
delete tail;
tail=temp;
}
void insert(int val,int pos){
    node* newnode=new node(val);
    if(pos<0){
        cout<<"invalid";
        return;
    }
    if(pos==0){
        push_front(val);
        return;
    }
    node* temp=head;
    for(int i=0;i<pos-1;i++){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
int search(int key){
node* temp=head;
int idx=0;
while(temp!=NULL){
    if(temp->data==key){
        return idx;
    }
    temp=temp->next;
    idx++;
}
return -1;
}
void printll(){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
};
int main(){
    list ll;
    ll.push_front(5);
    ll.push_front(6);
    ll.push_front(7);
    ll.push_front(8);
    ll.push_back(3);
    ll.pop_front();
    ll.pop_back();
    ll.insert(2,0);
    cout<<ll.search(7)<<endl;
    ll.printll();
    cout<<endl;
    return 0;
}