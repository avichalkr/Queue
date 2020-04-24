#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
struct node *front;
struct node *rear;
struct node *head=NULL;
void insert(int data)
{
	struct node *newnode= new node();
	if(front==NULL)
	{
		newnode->data=data;
		front=newnode;
		rear=newnode;
		//front->next=NULL;
		rear->next=NULL;
		
	}
	else
	{
		rear->next=newnode;
		newnode->data=data;
		front->next=newnode;
		rear=newnode;
		rear->next=NULL;
	}
}
void delet()
{
	struct node *temp;

	if(front==NULL)
	{
		cout<<"queue underflow"<<endl;
	}
	else
	{
		temp=front;
		front->next;
		free(temp);
	}
}
void display()
{
	struct node *temp;
	temp=front;
	cout<<"the queue is"<<endl;
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp=temp->next;
	}
}
int main()
{
	insert(10);
insert(20);
	insert(30);
	insert(40);
	insert(50);
	insert(60);
	insert(70);
	insert(80);
	insert(90);
	insert(100);
	display();
	delet();
	display();
	delet();
	display();	
	return 1;
}
