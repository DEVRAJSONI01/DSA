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
    void insert(int val,int pos){
        node* newnode =new node(val);
        node* temp=head;
        if(pos<0){
            cout<<"invalid"<<endl;
            return;
        }
        if(pos==0){
            push_front(val);
            return;
        }
        int count=0;
        while(count!=pos-1){
            temp=temp->next;
            count++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
    void makeCycle(int pos){
        node* temp=head;
        node* startNode;
        int count=1;
        while(temp->next!=NULL){
            if(count==pos){
                startNode=temp;
            }
            temp=temp->next;
            count++;
        }
        temp->next=startNode;
    }

    bool hasCycle(){
        node* slow=head;
        node* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return true;
            }
        }
        return false;
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
    ll.insert(1,0);
    ll.insert(2,1);
    ll.insert(3,2);
    ll.insert(4,3);
    //ll.makeCycle(3);
    cout<<ll.hasCycle()<<endl;
    //ll.printll();
    return 0;
}