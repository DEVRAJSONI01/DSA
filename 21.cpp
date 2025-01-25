//problem in printing the code

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
    public:
    node* head;
    node* tail;
    
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
    void insert(int val,int pos){
        if(pos==0){
            push_front(val);
            return;
        }
        if(pos<0){
            cout<<"invalid"<<endl;
        }
        node* newnode=new node(val);
        node* temp=head;
        for(int i=0;i<pos-1;i++){
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
    void printll(){
        node* temp=head;
        while (temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
        }
        
};
class solution{
    public:
    node* merge(node* head1,node*head2){
        if(head1==NULL || head2==NULL){
            return head1=NULL?head2:head1;
        }
        if(head1->data<=head2->data){
            head1->next=merge(head1->next,head2);
            return head1;
        }
        else{
            head2->next=merge(head1,head2->next);
            return head2;
        }
    }
};
int main(){
    list ll1;
    list ll2;
    solution s1;
    ll1.insert(1,0);
    ll1.insert(2,1);
    ll1.insert(4,2);
    //ll1.insert(4,3);
    ll1.printll();
    ll2.insert(1,0);
    ll2.insert(3,1);
    ll2.insert(4,2);
    //ll2.insert(4,3);
    ll2.printll();
    s1.merge(ll1,ll2);
    return 0;
}