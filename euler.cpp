#include<iostream>
using namespace std;

class node
{

int data;
node*left;
node*right;
friend class EULER;
};
class EULER
{
	node*root;
	public:
	void insert();
	node* insert1(node*,int);
	void inorder();
	void inorder1(node*);
	void euler();
	EULER()
	{
		root = NULL;

	}
	
};

void EULER::inorder()
{

	inorder1(root);

}
void EULER::inorder1(node*root)
{
if(root!=NULL)
{
	inorder1(root->left);
	cout<<root->data;
	inorder1(root->right);

}
}
void EULER::insert()
{
	int data;
	cout<<"enter the data";
	cin>>data;
	root=insert1(root,data);
	
}
node* EULER::insert1(node*root,int data)
{

	node*tmp;
	tmp= new node;
	tmp->data = data;

	if(root==NULL)
	return tmp;

		if(root->data > tmp->data)
		root->left = insert1(root->left,data);
		


		if(root->data < tmp->data)
		root->right = insert1(root->right,data);
	


		
	
	return root;


}



int main()
{

	int ch;
	EULER a;
	while(1)
	{
	cout<<"1.insert"<<endl;
	cout<<"2.inorder"<<endl;
	cout<<"3.euler"<<endl;
	cout<<"enter the data";
	cin>>ch;
	switch(ch)
	{
		case 1 : a.insert();
				break;

		case 2 :a.inorder();
			break;


	}



	}






}
