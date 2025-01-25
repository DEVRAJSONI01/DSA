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
class circularll{
    node* head;
    node* tail;
    public:
    circularll(){
        head=tail=NULL;
    }
    void insert_at_head(int val){
        node* newnode=new node(val);
        if(head==NULL){
            head=tail=newnode;
            tail->next=head;
        }
        else{
            newnode->next=head;
            tail->next=newnode;
            head=newnode;
        }
    }
    void insert_at_tail(int val){
        node* newnode=new node(val);
        if(head==NULL){
            head=tail=newnode;
            tail->next=head;
        }
        else{
            newnode->next=head;
            tail->next=newnode;
            tail=newnode;
        }
    }
    // void pop_front(){
    //     node* temp=head->next;
    //     while(temp->next!=head){
    //         temp=temp->next;
    //     }
    //     temp->next=head->next;
    //     temp=temp->next;
    //     delete head;
    //     head=temp;
    // }

    void pop_front(){
        if(head==NULL){
            return;
        }
        else if(head==tail){
            delete head;
            head=tail=NULL;
        }
        else{
        node* temp=head;
        head=head->next;
        tail->next=head;
        temp->next=NULL;
        delete temp;
        return;
        }
    }

    void pop_back(){
        if(head==NULL){return;}
        if(head==tail){
            delete head;
            head=tail=NULL;
        }
        node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=head;
        tail->next=NULL;
        delete tail;
        tail=temp;
    }

    void printcll(){
        if(head==NULL){
            return;
        }
        cout<<head->data<<" ";
        node* temp=head->next;
        while(temp!=head){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<temp->data<<endl;
    }

};
int main(){
circularll cll;
// cll.insert_at_head(1);
// cll.insert_at_head(2);
// cll.insert_at_head(3);
// cll.insert_at_head(4);
// cll.insert_at_head(5);
cll.insert_at_tail(1);
cll.insert_at_tail(2);
cll.insert_at_tail(3);
// cll.insert_at_tail(4);
// cll.insert_at_tail(5);
// cll.pop_front();
//  cll.pop_front();
//   cll.pop_front();
 cll.pop_back();
 cll.pop_back();
// cll.pop_back();
cll.printcll();
    return 0;
}