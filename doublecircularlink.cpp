#include<iostream>
using namespace std;

class node
{


public:
int data;
node*next;
noee*prev;



};

class DllCll
{
public:
node*start;
 
void insertEnd();
void insertAfter();
void insertBefore();

DllCll()
{

start =NULL;
}





};


void DllCll::insertEnd()
{


	node*tmp;
	tmp= new node;
	cout<<"enter your data";
	cin>>tmp->data;
	tmp->next = NULL;
	tmp->prev = NULL;



	if(start == NULL)
	{

		cout<<"list is empty";
		start = tmp;
		start->next = start;
		start->prev  = start;

	}

	else 
	{
		node*last;
		last->next = start;
		

	}



	
}




