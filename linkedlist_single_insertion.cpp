//insertion at head;
/*
#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};
void insertion(node* &head,int val){
    node* temp=head;
    node* n=new node(val);
    n->next=head;
    head=n;
}
void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node* head=NULL;
    insertion(head,8);
    insertion(head,7);
    insertion(head,6);
    insertion(head,5);
    insertion(head,4);
    print(head);
}
*/


//insertion at tail
/*
#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};
void insertion(node* &head,int val){
    node* temp=head;
    node* n=new node(val);
    if(head==NULL){
        head=n;
    }
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    }
}
void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node* head=NULL;
    insertion(head,8);
    insertion(head,7);
    insertion(head,6);
    insertion(head,5);
    insertion(head,4);
    print(head);
}
*/



//insertion at a position
/*
#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};
void insertion(node* &head,int pos,int val){
    node* temp=head;
    node* n=new node(val);
    if(pos==1||head==NULL){
        n->next=head;
        head=n;
    }
    else{
        for(int i=1;i<pos-1&&temp!=NULL;i++){
            temp=temp->next;
        }
        n->next=temp->next;
        temp->next=n;
    }
}
void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node* head=NULL;
    insertion(head,1,8);
    insertion(head,2,7);
    insertion(head,3,6);
    insertion(head,4,5);
    insertion(head,5,4);
    print(head);
}
*/
