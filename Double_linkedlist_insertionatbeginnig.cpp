#include<iostream>
using namespace std;

struct node{
    int data;
    node*next;
    node*prev;

    node(int value):data(value),next(nullptr),prev(nullptr){}
};
//A function to insert a new node at the beginnig of the list.
void insertatbeg(node*head,int value){
    node* newnode=new node(value);
    newnode->next=head;
    if(head!=nullptr){
        head->prev=newnode;
    }
    head=newnode;
}

//A function to display the elements of the list.

void display(node*head){
    node*temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    node*head=nullptr;
    int value,n;

    cout<<"Enter the number of elements in the DLL:";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the value:";
        cin>>value;
        insertatbeg(head,value);
    }
    cout<<"The Double linked list:"<<endl;
    display(head);
    return 0;
}

