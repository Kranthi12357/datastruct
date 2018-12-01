#include<iostream>
#include<vector>
#define SIZE 10
using namespace std;

class queue
{
  std::vector<int> v;
  int front ,rear;
public:
  void insert();
  void delet();
  void display();
  queue()
  {
    front = -1;
    rear = -1;
    v.reserve(5);
  }
};
void queue::display()
{
  if(rear>=front)
  {
  for(int i= front;i<=rear;i++)
  {
    cout<<v[i]<<endl;
  }
}
else
{
  for(int i=0;i<=rear;i++)
  {
    cout<<v[i]<<endl;
  }
  for(int i=front;i<v.capacity();i++)
  {
      cout<<v[i]<<endl;
}
}
}
void queue::delet()
{
  if(front==-1)
  {
    cout<<"no elements to delete"<<endl;
  }
  else
  if(front==v.capacity()-1)
  {
    front = 0;
  }
  else
  if(front == rear )
  {
    front = -1;
    rear = -1;
  }
  else
  {
    cout<<v[front];
    front++;
  }
}
void queue::insert(){
  if(front ==0&&rear==v.capacity()-1||rear == front-1)
  {
    std::cout << ""/* message */"que is full" << '\n';
  }

  else
  {
    int data;
    cout<<"enter the data to insert"<<endl;
    cin>>data;
    if(rear == v.capacity()-1)
    {
      rear = 0;
      v[rear]= data;
    }
    else
    if(front == -1)
    {rear++;
        v[rear]=data;
      front++;
    }
    else
    {

      rear++;
      v[rear]=data;
    }
  }
}
main()
{
  queue a;
  int ch;
  while(1)
  {
    cout<<"enter the data"<<endl;
    cout<<"1.insert"<<endl;
    cout<<"2.delete"<<endl;
    cin>>ch;
    switch (ch) {
      case 1:a.insert();
      break;
      case 2 : a.delet();
      break;
      case 3 : a.display();
      break;
    }
}
}
