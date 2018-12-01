#include<iostream>
#include<deque>
using namespace std;
class stack
{
    deque<int>d;
  public:
    void push();
    void pop();
    void display();

};
void stack::push(){
  int data;
  cout<<"enter the element to push"<<endl;
  cin>>data;
  d.push_back(data);
}
void stack::pop(){
if(d.empty())
{
cout<<"empty"<<endl;
}
else
{
  cout<<d.front()<<endl;
  d.pop_front();
}
}
void stack::display()
{

  deque<int> ::iterator i;
    for(i=d.begin();i!=d.end();++i){
      cout<<*i<<endl;
    }

}
int main()
{
  stack a;

  int ch;
  while (1) {
    /* code */  cout<<"1.insert"<<endl<<"2.pop()"<<endl<<"3.delete"<<endl;
    cin>>ch;
  switch(ch)
  {
    case 1 : a.push();
    break;
    case 2 : a.pop();
    break;
    case 3: a.display();
    break;
  }
}
}
