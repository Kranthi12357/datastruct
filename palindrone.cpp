#include<iostream>
#include<stack>
using namespace std;
void pop();
void compare();
string str,str1;
stack<char>s;
int main()
{
  cout<<"enter the string "<<endl;
  cin>>str;
  for(int i=0;i<str.length();i++)
  {
    s.push(str[i]);
  }
  pop();
  compare();
}
void pop()
{

  while(!s.empty()){
    str1.push_back(s.top());
    s.pop();
  }

}
void compare()
{
    if(str == str1)
    {
      std::cout << "found" << '\n';
    }
    else
    {
      cout<<"not found";
    }

}
