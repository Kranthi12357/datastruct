#include<iostream>
#include<stack>
using namespace std;

class paranthesis
{
  string s;
  stack<char>st;
public:
  void read();
  bool isbalanced();
};
void paranthesis::read()
{
  cout<<"enter the string "<<endl;
  cin>>s;
  for(int i=0;i<s.length();i++)
  {
    if(s[i]=='#'|| s[i]>='a' && s[i]<= 'z')
      continue;

    if(s[i]=='('|| s[i]=='<'||s[i]=='['||s[i]=='"')
  {
    st.push(s[i]);
  }
  else
    if (st.empty()== true && s[i]==')'||st.empty()==true&& s[i]=='>')
    {
      st.push(s[i]);
    }
  else
  if (st.top()=='('&& s[i]==')'||st.top()=='<'&& s[i]=='>'||st.top()=='['&&s[i]==']'||st.top()=='"'&&s[i]=='"')
  {
    st.pop();
  }
  else
  {
    cout<<"fail";
  }

  }
}
bool paranthesis::isbalanced()
{
  if(st.empty())
  {
    return true;
  }
  else
      return false;
}
int main()
{
  int ch;
  paranthesis a;
  while(1)
  {
  cout<<"enter the  choice"<<endl;
    cout<<"1.enter the code"<<endl;
    cout<<"2.check balanced or not"<<endl;
    cin>>ch;
    switch (ch) {
      case /* vlue */1:a.read();
      break;
      case 2 : if(a.isbalanced())
                {
                    cout<<("balanced");
                }
                else
                    cout<<("not balanced");
    }
  }
}
