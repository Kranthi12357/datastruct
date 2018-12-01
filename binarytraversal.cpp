#include<iostream>
#include<climits>
using namespace std;

class node
{	public:
	int data;
	node*left;
	node*right;

};

class binary
{
	node*root;
	public:
	void insert();
	void inorder(node*);
	void inorder1();
	void preorder(node*);
	void preorder1();
	void postorder(node*);
	void postorder1();
	void min();
	void max();
	int isBst(node*);
	void isbst();
	int  binary_tree(node*,int min,int max);
	binary()
	{
		root = NULL;
	

	}
}; 



int binary::binary_tree(node *root ,int min,int max)
{

if(root == NULL)
return 1;

if(root->data < min || root ->data >max)
return 0;


return binary_tree(root->left,min,root->data-1) && binary_tree(root->right,root->data+1 , max);


}

int binary::isBst(node*root)
{


return(binary_tree(root,INT_MIN,INT_MAX));



}



void binary::isbst()
{

	if(isBst(root))
	{
	
		cout<<"not Bst";

	}
	else
	{


		cout<<"not bst";


	}



}
void binary::min()
{

if(root == NULL)
{

cout<<"no elements";

}
else
{

node*t =root;

while(t->left!=NULL)

{

t = t->left;



}

cout<<t->data;



}



}




void binary::max()
{

if(root == NULL)
{

cout<<"no elements";

}
else
{

node*t =root;

while(t->right!=NULL)

{

t = t->right;



}

cout<<t->data;



}



}




void binary::insert()
{
	node*tmp;
	tmp = new node;
	cout<<"enter the data";
	cin>>tmp->data;
	tmp->left = NULL;
	tmp->right = NULL;
	
	if(root ==NULL)
	{
		
		root=tmp ;

	}
	else
	{

		if(root->data <tmp->data)
		{

			node*t ;
			t = root;
			while(t->right!=NULL)
			{


				t =t->right;

			}

			t->right = tmp;
			tmp->right = NULL;
			tmp->left = NULL;
		
		}
		else
		if(root->data> tmp->data)
		{

			node*t = root;
			while(t->left!=NULL)
			{


				t = t->left;


			}
			t->left = tmp;
			tmp->right = NULL;
			tmp->left = NULL;

	
	
		}

	}	


}

void binary::inorder(class node*root )
{


	if(root!=NULL)
	{

		inorder(root->left);
		cout<<root->data;
		inorder(root->right);


	}


	
}

void binary::inorder1()
{


	inorder(root);



}



void binary::postorder(class node*root )
{


	if(root!=NULL)
	{

		postorder(root->left);
		postorder(root->right);
		cout<<root->data;


	}


	
}

void binary::postorder1()
{


	postorder(root);



}

void binary::preorder(class node*root )
{


	if(root!=NULL)
	{
		cout<<root->data;
		preorder(root->left);
		preorder(root->right);
		


	}


	
}

void binary::preorder1()
{


	preorder(root);



}









int main()
{

	binary a;
	int ch;
	while(1)
	{
		cout<<"1.insert";
		cout<<"2.inorder";
		cout<<"3.postorder";
		cout<<"4.preorder";
		cout<<"2.enter your choice";
		cin>>ch;
		
		switch(ch)
		{


			case 1 : a.insert();
					break;
			
			case 2 : a.inorder1();
					break;

			case 3 : a.postorder1();
					break;
			
			case 4 : a.preorder1();
					break;

			case 5 : a.min();
					break;
			case 6 : a.max();
					break;
			
			case 7 : a.isbst();
					break;

		}


	}






}









