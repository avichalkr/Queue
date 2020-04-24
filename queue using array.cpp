#include<iostream>
#include<stdlib.h>
#include<iostream>
#define size 10
using namespace std;
int head=-1;
int tail=-1;
int queue[size];
void enqueue(int value)
{
	if(head==-1)
	{
	head=0;	
	}
	if(tail==size-1)
	{
		cout<<"Overflow";
	}
	else
	{
		queue[++tail]=value;
	}
}
void dequeue()
{
	if(tail==-1)
	{
		cout<<"underflow";
	}
	else
	{
		head++;
	}
}
int peek()
{
	if(tail!=-1)
	{
			return queue[head];

	}
}
void display()
{
	for(int i=head;i<tail;i++)
	{
		cout<<queue[i]<<endl;
	}
}
int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	enqueue(60);
	enqueue(70);
	
	cout<<"the elements of queueu are"<<endl;
	display();
	cout<<"the first elemnt at head posn of queue is"<<peek()<<endl;
	dequeue();
	cout<<"the elements of queueu are"<<endl;
	display();
	
	return 1;
	
}
