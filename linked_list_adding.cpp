#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node* next;
};
//inserting node at front
void push(Node** head_ref,int new_data)
{
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next=(*head_ref);
	(*head_ref) = new_node;
}

void printlist(Node* node)
{
	while(node!=NULL)
	{
		cout<<" "<<node->data;
		node=node->next;
	}
}

int main()
{
   Node* head = NULL;
   push(&head,4);
   push(&head,9);

   cout<<"created linked list is:";
   printlist(head);
   return 0;
}