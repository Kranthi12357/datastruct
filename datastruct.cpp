//============================================================================
// Name        : datastruct.cpp
// Author      : kranthi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include<iostream>
using namespace std ;
int len;
class node
{          public:
	int data;
	 node*link;
};

class array
{
public:

	
	node*root ;


public:
	void append();
        int  length();
	void display();
         void addatbegin();
         void addatafter();
	void delet();
	void reverse();
	
array(){

		
		root = NULL;
               
	}
};

void array::append()
{
	 node*tmp;
	tmp = new(node);
	cout<<"enter your data";
	cin>>tmp->data;
	tmp->link =NULL;

	if(root==NULL)
	{
		cout<<"list is empty";
		root = tmp;
	}
	else
	{
	    node*p;
	    p = root ;
	    while(p->link!=NULL)
	    {
	    	p=p->link;

	    }
		p->link = tmp ;

	}
}

int  array::length()
{         int count =0;
	 node*p;
	p = root;
	while(p!=NULL)
	{
	++count ;
	   p= p->link;
	}

	return count;
}


void array::display()
{
	 node*tmp;
	tmp = root;

	if(root ==NULL)
	{

		cout<<"list is empty";
	}
	else
	{
	while(tmp!=NULL)
	{

		cout<<tmp->data;
		tmp = tmp->link;
	}


}
}

void array::addatbegin()
{
 node *tmp ;
tmp =new (node);
cout<<"enter your data";
cin>>tmp->data;
tmp->link = NULL;

if(root==NULL)
{
cout<<"no linked lists"<<endl;
root = tmp;
}
else
{

tmp->link = root;

root = tmp;

}


}


void array::addatafter()
{
int loc;
cout<<"enter your location";
cin>>loc;


if(loc>length())
{
cout<<"more than the length";

}
else
{
int i = 1;
 node * tmp , *p;
p = root ;
while(i<loc)
{
p = p->link ;
i++;
}

tmp = new(node);
cout<<"enter your data ";
cin>>tmp->data;
tmp->link = NULL ;

tmp->link = p->link;
p->link = tmp;

}
}


void array::delet()
{

int loc;
cout<<"enter your location";
cin>>loc;
if(loc>length())
{
cout<<"more than list";
}
else
if(loc ==1 )
{
struct node*tmp;
tmp =root;
 root =tmp->link ;
tmp->link = NULL;
free(tmp);
}
else
{
int i = 1;
 node *p,*q;
p = root;
while(i<loc-1)
{

p= p->link ;
i++;
}

q = p->link;


p->link = q->link;

q->link = NULL;

free (q);
}
}

void array::reverse()
{ 


int i,j,k,temp;

len = length();
i=0;
j = len-1;

node * p , *q;

p = root;
q = root;

while(i<j)
{  
    k=0;
while(k<j)
{

q = q->link;
k++;

}
temp = q->data;
q->data = p->data;
p->data = temp;

i++;
j--;
p =p->link;
q = root;
}
}
int main()
{                 
	array a;
	int ch;
	while(1)
	{

		cout<<"single list operations";
		cout<<"1.append"<<endl;
		cout<<"2.add at begin"<<endl;
		cout<<"3.add at after"<<endl;
		cout<<"4.length of list"<<endl;
		cout<<"5.display"<<endl;
		cout<<"6.delete"<<endl;
                 cout<<"7.reverse a list"<<endl;
		cout<<"enter your choice";
		cin>>ch;
		switch(ch)
		{

		case 1: a.append();
		         break;

		case 2 : a.addatbegin();
                           break;
		
                case 3 : a.addatafter();
                            break;  
              
		case 4 : 
                          
                             len=a.length();
                               cout<<len;
		               break;
		case 5: a.display();
		          break;
	        
                case 6 : a.delet();
                                   break;

                 case 7 : a.reverse();
			 break;          
                case  8  : _Exit(1);
		            break;

		default : cout<<"wrong entry";
		}

	}

}
