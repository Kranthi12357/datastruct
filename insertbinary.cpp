#include<iostream>
using namespace std;
class node
{

public:
node* left;
node* right;
int data;
};

class search
{
 public:
node*root;

void insert();
node* search1(node*,int data);
node* insert2(node*,int data);
void insert3();
search()
{

root == NULL;
}
};

node* search::insert2(node*root,int data)
{

node*tmp = new node;
tmp->data = data;
if(root == NULL)
 {
	root = tmp;

 }
else
if(root->data > tmp->data )
root->left = insert2(root->left,data);


else
if(root->data<tmp->data)
root->right = insert2(root->right,data);


}
void search::insert()
{

node*tmp,*p;
tmp = new node;

tmp->left = NULL;
tmp->right = NULL;
cout<<"enter the data";
cin>>tmp->data;

if(root == NULL)
{
root = tmp;
}
else
{
		node*q = root;
	while(q)
	{
		p =  q;	
	if(tmp->data > q->data)
	{

		q  = q->right;

	}
	else
	{


	q = q->left;

	}
	}
	if(p->data > tmp->data)
	{
		
		p->right = tmp;
	}
	else
	if(p->data < tmp->data)
	{
		p->left = tmp;
	
	}


}
}
void search::insert3()
{
int data;
cout<<"enter the data ";
cin>>data;
insert2(root,data);

}

int main()
{

search a;
int ch;

cout<<"enter your choice";
cin>>ch;

switch(ch)
{
	case 1 : a.insert();
	break;
	case 2 :
		 a.insert3();
	break;
}

main();
}
