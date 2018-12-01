#include<iostream>
using namespace std;
int len;
class node
{          public:
	int data;
	node *rightlink;
	node *leftlink;
};

class dLL
{	public:
	node*root;
  
          public: 
	void insertEle();
	void  addAtBegin();
	void addAtAfter();
	void display();
	int length();
	void deletEle();
	
	void reverse();
dLL()
{

root =NULL;

}

};


void dLL::insertEle()
{

	node*tmp;
	tmp = new(node);
	cout<<"enter the elements";
	cin>>tmp->data;
	tmp->rightlink = NULL;
	tmp->leftlink = NULL;
	if(root==NULL)
	{
		root = tmp ;
	}
	else
	{	

	        node *p;	
		p = root;
		while(p->rightlink!=NULL)
		{
			p = p->rightlink; 
		}
			

			p->rightlink = tmp ;
			tmp->leftlink =  p;
			tmp->rightlink =NULL;

	}
}


void   dLL::addAtBegin()
{

	node*tmp;
	tmp = new(node);
	cout<<"enter your data";
	cin>>tmp->data;
	
	tmp->rightlink = NULL;
	tmp->leftlink = NULL;	

	if(root==NULL)
	{
		cout<<"there are no linked lists";

	}
	else
	{
		tmp->rightlink = root ;
		root = tmp;
		
   



	}

}


int  dLL::length()
{       int count =0;
	node * tmp =NULL;
	tmp = root ;
	while(tmp!=NULL)
	{
		
		tmp=tmp->rightlink ;

	          ++count;
	}



		return count ;
}

void dLL::display()
{
           int value;
	node *tmp;
	tmp = root;
	if(root == NULL)
	{

	cout<<"no linked lis";

	}
	else
	{
          
	while(tmp!=NULL)
	{


		value = tmp->data;

		tmp =tmp->rightlink;
                 cout<<"values"<<value<<endl;

	}
	}
} 


void dLL::addAtAfter()
{

	
                int i=1;
		int loc;
		cout<<"enter your loc";
		cin>>loc;
	      len = length();
	if(loc>len)
	{
		cout<<"greater ";
	}
	else 
	{    node *tmp;
	    tmp = new (node);
	   cout<<"enter your data";
	   cin>>tmp->data;
	   tmp->rightlink = NULL;
	   tmp->leftlink =NULL;


		node *p = root;
		while(i<loc)
		{
			p = p->rightlink;


                   i++;
		}


			tmp->rightlink = p->rightlink;
			  p->rightlink = tmp;
			   p->rightlink->leftlink = tmp;
			 tmp->leftlink = p; 
			
	}



}


void dLL::reverse()
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

q = q->rightlink;
k++;

}
temp = q->data;
q->data = p->data;
p->data = temp;

i++;
j--;
p =p->rightlink;
q = root;
}
}

void dLL::deletEle()
{


		
	int loc;
	cout<<"enter your loc";
	cin>>loc;
	node *tmp= root;
	if(loc>length())
	{


          cout<<"loc is greater than list";

	}

	  else
	    if(loc == 1)
	{	if(tmp->rightlink == NULL)
		{
			root = NULL;			
				delete tmp;
				
		
		}
		else
		{
		
		root = tmp->rightlink ;
		tmp->rightlink = NULL;
		root->leftlink =NULL;
		     free(tmp);
               }      
 	}

	else
	{        int i =1;
		
	
		 node*p ,*q ;
		p = root ;
		while(i<loc-1)
		{

			p = p->rightlink;
		

                   i++;
		}

			q = p->rightlink ;
		   	p->rightlink  = q->rightlink ;
                  	q->leftlink =NULL;
                            free(q);
	}
}	
int main()
{
 dLL a;

int ch;


while(1)
{


cout<<"1.insertEle"<<endl;
cout<<"2.addAtBegin"<<endl;
cout<<"3.addAtAfter"<<endl;
cout<<"4.display"<<endl;
cout<<"5.length"<<endl;
cout<<"6.delete"<<endl;

cout<<"7.reverse a list"<<endl;
cout<<"enter your choice"<<endl;
cin>>ch;

switch(ch)
{
  	case 1 : a.insertEle();
		break;

	case 2 : a.addAtBegin();
		 break;

	case 3 : a.addAtAfter();
		 break;
	case 4 : a.display();
		  break;

	case 5 :  len =a.length();
			cout<< len;
		   break;

	case 6 :  a.deletEle();
	              break;
	case 7 : a.reverse();
			break;

	default : cout<<"default entry";

}
}


}
