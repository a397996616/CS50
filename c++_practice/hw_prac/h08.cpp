#include<iostream>
using namespace std;

struct Node{
	int data;
	Node * next;
};

struct LinkedList{
	Node* head;
	Node* tail;
};

void deleteNode(struct Node* &head, int value){

	Node * p = head;
        while(p){
	Node * temp = p;
	if (p -> data == value)
		p = p->next;
	delete temp;
	}	
	
}

int * linkedlisttoarray(LinkedList * list, int len){
	int *p = new int[len];
	Node *tem;
	tem = list -> head;
	for (int i = 0; i<len; i++){
		p[i] = tem -> data;
		tem = tem-> next;
	}
	return p;
	}

int main(){
	LinkedList * newList = new LinkedList;
	newList -> head = NULL;
	newList -> tail = NULL;
	Node * head = new Node;
	head -> data = 10;
	head -> next = new Node;
	head -> next -> data = 20;
	newList ->head = head;
	newList ->tail = head -> next;

	int *o =linkedlisttoarray(newList, 2);
//	cout<<"linked list :"<<linkedlisttoarray(newList, 2)<<endl;
//	cout<<"o: "<<o<<endl;
	for (int i = 0; i<2; i++){
		cout<<o[i]<<" "<<endl;
	}

	

}
