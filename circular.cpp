#include<iostream>
using namespace std;
int len;
class node
{
public:
int data ;
node *link;



};
class cirLink
{
public:
node *last;


public:
void insert();
void display();
void  addbegin();
void addafter();
void delet();
int length();
cirLink()
{

last = NULL;

}
};

void cirLink::insert()
{

node*tmp;
tmp = new node;
cout<<"enter your data";
cin>>tmp->data;
tmp->link = NULL;

if(last== NULL)
{


last = tmp;
last->link = last;

}
else
{

tmp->link = last->link;
last->link = tmp;
last = tmp;



}
}
void cirLink::addbegin()
{
node*tmp;
tmp = new node;
cout<<"enter your data";
cin>>tmp->data;
tmp->link = NULL;

if(last==NULL)
{

last = tmp;
last->link =last;
}

else
{




tmp->link = last->link;
last->link = tmp;



}



}


void cirLink::display()
{

if(last==NULL)
{
cout<<"no lists";

}
else
{
   node*p;
	p= last->link;
do
{

  cout<<p->data;

 p= p->link;

}while(p!=last->link);


}


}
void cirLink::addafter()

{int loc,i=1;
cout<<"enter your location";
cin>>loc;

if(loc>len)
{

cout<<"greater";
}
else
{

node*tmp;
tmp = new node;
cout<<"enter your data";
cin>>tmp->data;
tmp->link = NULL;

node * p;
p = last->link;

while(i<loc)
{


p = p->link;

i++;

}

tmp->link = p->link;
p->link = tmp;
}


}

int  cirLink::length()
{       int count =0;
	node *p ;
	if(last!=NULL)
	{
	p= last->link ;
	do
	{
	 p= p->link;
		count++;
	}while(p!=last->link);
	
	}
		return count ;
}


void cirLink::delet()
{

int loc;
cout<<"enter your location";
cin>>loc;
len = length();
if(loc >len)
{

	cout<<"greater";
}
else
if(loc == 1 )
{	if(last->link == last)
	{
		last = NULL;
		delete last;
	}
	else
        {
 	node*tmp;
	tmp =last->link;
	 last->link =tmp->link ;
	tmp->link = NULL;
	free(tmp);
        }
}
else
{
int i = 1;
 node *p,*q;
p = last->link;
while(i<loc-1)
{

p= p->link ;
i++;
}

q = p->link;

if(q->link == last->link)
{

p->link = last->link;
last = p;
q->link = NULL;
}
else
{
p->link = q->link;

q->link = NULL;


free (q);
}
}
}


int main()

{ cirLink a;


int ch;

while(1)
{
   cout<<"1.in"<<endl;
   cout<<"2.addatbegin"<<endl;
   cout<<"3.display"<<endl;
   cout<<"4.adf"<<endl;
cout<<"5.del"<<endl;
 cout<<"6.length"<<endl;
   cout<<"enter your choice";
     cin>>ch;
	switch(ch)
	{

	case 1 : a.insert();
		break;

	case 2 : a.addbegin();
		break;

	case 3 :a.display();

		break;
	case 4 : a.addafter();
		break;
	case 5 : a.delet();
		break;
	case 6: cout<<a.length();
		break;
	default : cout<<"wrong entry";
}		



}

}
