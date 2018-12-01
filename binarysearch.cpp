#include<iostream>
using namespace std;

class node
{
int data;
node*left;
node*right;
friend class kranti;
};
class kranti
{

node* root;
public:
void insert();
void inorder1(node* &root);
void inorder();
kranti()
{

root = NULL;
}

};
void kranti:: inorder()
{

inorder1(root);
}
void kranti::inorder1(node* &root)
{

if(root!=NULL)
{

inorder(root->left);
cout<<root->data;
inorder(root->right);

}



}
void kranti::insert()
{

node*tmp;
tmp =new node;
cout<<"enter the data";
cin>>tmp->data;
tmp->left = NULL;
tmp->right = NULL;




if(root == NULL)
{

root = tmp;

}
if(root->data > tmp->data)
{

	node*t = root;
while(t->left!=NULL)
{

	t = t->left ;


}

t->left = tmp;
tmp->right = NULL;
tmp->left = NULL;




}

if(root->data < tmp->data)
{

	node*t = root;
while(t->left!=NULL)
{

	t = t->right ;


}

t->right = tmp;
tmp->right = NULL;
tmp->left = NULL;
}



}

int main()
{
	kranti a;
int ch;

cout<<"1.insert"<<endl;
cout<<"2.inorder"<<endl;
cout<<"enter your choice";
cin>>ch;
switch(ch)
{

	case 1 : a.insert();
		break;

	case 2 : a.inorder();
		break;




}

main();

return 0;
}




