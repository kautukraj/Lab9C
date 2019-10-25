#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* head;

void insert(int,int);
void print();
void del();

void insert(int ins, int pos)
{
	struct Node* temp1 = (struct Node*) malloc(sizeof(struct Node*));
	temp1->data = ins;
	temp1->next = NULL;
	if (pos==1)
	{
	    temp1->next = head;
	    head = temp1;
	    return;
	}
	int i=0;
	struct Node* temp2 = head;
	for (i=0;i<pos-2;i++)
	    temp2 = temp2->next;
	    
	temp1->next = temp2->next;
	temp2->next = temp1;
}

void print()
{
	struct Node* tmp = head;
	while (tmp!=NULL)
	{
		printf("%d-->",tmp->data);
		tmp = tmp->next;
	}	
}


int main()
{
    head=NULL;
    int i,n,ins;
    scanf("%d",&n);
    
    for (i=0;i<n;i++)
    {
    	scanf("%d",&ins);
		insert(ins,i+1);
	}
    print();
    /* del();
    print(); */ 
    
}
 
