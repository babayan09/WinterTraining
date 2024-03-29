#include <iostream>
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

void insertattail(node* &head, int val){
	node* n = new node(val);
	
	if(head==NULL){
		head=n;
		return;
	}
	
	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
	
}

void display(node* head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}

int main() {
	
	node* head=NULL;
	insertattail(head,12);
	insertattail(head,24);
	insertattail(head,36);
	
	display(head);
	
return 0;
}