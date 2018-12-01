#include<iostream>
#include<deque>
using namespace std;
class stack
{
deque<int>s;
public:
  void push();
  void pop();
  void display();

};
void stack::push()
{
  cout<<"enter the data to insert"<<endl;
  int data;
  cin>>data;
  s.push_back(data);
}
void stack::pop()
{
  if(s.empty())
  {
    cout<<"stack is empty"<<endl;

  }
  else
  {
    cout<<s.back();
    s.pop_back();
  }
}

void stack::display()
{
    deque<int> ::iterator i;
    for(i = s.begin();i!=s.end();i++){
      cout<<*i<<endl;
    }

}

int main()
{
  stack b;
  int ch;
  while(1){
    cout<<"1.push"<<endl<<"2.pop"<<endl<<"3.dis"<<endl;
    cin>>ch;
    switch (ch) {
      case /* value */1:b.push();
      break;
      case 2 : b.pop();
      break;
      case  3: b.display();
      break;
    }
  }
}
