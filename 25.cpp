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
class solution{
    public:
    node* head;
    node*tail;
    solution(){
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
        node* newnode=new node(val);
        node* temp=head;
        if(head==NULL){
            head=tail=newnode;
            return;
        }
        if(pos==0){
            push_front(val);
            return;
        }
        for(int i=0;i<pos-1;i++){
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
    node* reverseKGroup(node* head, int k) {
        int count =0;
        node* temp=head;
        while(count<k){
            if(temp==NULL){
                return head;
            }
            temp=temp->next;
            count++;
        }
        node* prev=reverseKGroup(temp,k);
        temp=head;
        count=0;
        while(count<k){
            node* next=temp->next;
            temp->next=prev;
            prev=temp;
            temp=next;
            count++;
        }
        return prev;
    }
    void print(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

};
int main(){
    solution s1;
    s1.insert(1,0);
    s1.insert(2,1);
    s1.insert(3,2);
    s1.insert(4,3);
    s1.insert(5,4);
    //s1.insert(6,5);
    s1.head = s1.reverseKGroup(s1.head, 3);
    s1.print();
    return 0;
}