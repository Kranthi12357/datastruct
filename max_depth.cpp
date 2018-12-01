#include<iostream>
using namespace std;
class node{
  int data;
  node*left;
  node*right;
  friend class BST;
};
class BST{
public:
  node*root ;
public:
  void insert();
  node*insert1(node*root,int data);
  int  maxdepth(node* root);
  void maxdepth1();
  BST()
  {
    root = NULL;
  }
};
void BST::maxdepth1()
{
  cout<<maxdepth(root->left);
}
void BST::insert()
{
  int c;
  cout<<"enter the data"<<endl;
  cin>>c;
  root = insert1(root,c);
}
node* BST::insert1(node*root,int data)
{
  node* tmp = new node;
  tmp->data = data;
  if(root==NULL)
  {
    return tmp;
  }
  else
  if(root->data > tmp->data)
  {
    root->left = insert1(root->left,data);
  }
  else
  if(root->data<tmp->data){
    root->right = insert1(root->right,data);
  }
  return root;
}

int  BST::maxdepth(node*root)
{
  if(root==NULL)
  {
    return 0;
  }
  else
  {
  int l = maxdepth(root->left);
  int r = maxdepth(root->right);

  if(l>r)
  return l+1;
  else
  return r+1;
}
}
int main()
{
  BST a;
  int ch;
  while(1)
  {
    cout<<"1.insert"<<endl;
    cout<<"2.depth"<<endl;
    cin>>ch;
    switch (ch) {
      case /* value */1:a.insert();
      break;
      case 2 : a.maxdepth1();
      break;
    }
  }



}
