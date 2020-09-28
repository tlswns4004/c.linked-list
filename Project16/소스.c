#include<stdio.h>
#include<stdlib.h>

typedef struct {
	struct node* next;
		int data;
}Node;

void addfront(Node *root, int data) {
	Node* node = (Node*)malloc(sizeof(node));
	node->data = data;
	node->next = root->next;
		root->next = node;
}
int main()
{
	Node* head = (Node*)malloc(sizeof(Node));
	Node* node1= (Node*)malloc(sizeof(Node));
	Node* node2= (Node*)malloc(sizeof(Node));
	node1->data = 10;
	node2->data = 2;
	head->next = node1;
	node1->next = node2;
	node2->next = NULL;
	Node* cur = head->next;
	while (cur != NULL)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	while (cur != NULL)
	{
		free(cur);
		cur = cur ->next;
	}
	free(head);
	
}