#include<iostream>
using namespace std;


class node
{
public:
int data;
node*left;
node*right;


};
class deleteNode
{
node*root ;

public:

void deleteEle(node*root,int data);
void insert();
node* insert1(node*root,int data);
void inorder();
void inorder1(node*);
deleteNode()
{

root = NULL;

}



};
void deleteNode::inorder()
{

inorder1(root);

}
void deleteNode::inorder1(node*root)
{

if(root!=NULL)
{

inorder1(root->left);
cout<<root->data;
inorder1(root->right);

}

}
void deleteNode::insert()
{

cout<<"enter the data";
int data;
cin>>data;
root = insert1(root,data);


}

node* deleteNode::insert1(node*root,int data)
{
node*tmp = new node;
tmp->data = data;
if(root==NULL )
{
return tmp;
}

else
if(root->data > tmp->data)
{
root->left = insert1(root->left,data);
}
else
if(root->data < tmp->data)
{
root->right = insert1(root->right,data);

}
return root;
}
void deleteELe(node*root,int data)
{








}

int main()
{

deleteNode a;

int ch;
while(1)
{

cout<<"1.insert"<<endl;
cout<<"2.delete"<<endl;
cout<<"enter your choice";
cin>>ch;
switch(ch)
{

case 1 : a.insert();

	break;
case 2 : a.inorder();
	break;

}

}




}
