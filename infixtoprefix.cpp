#include<iostream>
#include<stack>
using namespace std;

class infix
{
  string exp;
  stack<char>ch;
public:
  void read();
  int isoperator(char c);
  int higherprecidence(char c,char p);
  void infixtopostfix(string &s);
  int isoperand(char c);
  int pre(char p);



};

void infix::infixtopostfix(string &s)
{
  string postfix =" ";
  for(int i=0;i<s.length();i++)
  {

      if(isoperand(s[i]))
      {
        postfix = postfix+s[i];
      }
      else
      if(isoperator(s[i]))
      {
          while(!ch.empty() && higherprecidence(ch.top(),s[i]))
          {
              postfix = postfix+ch.top();
              ch.pop();

          }
          ch.push(s[i]);

      }
      else
      if(s[i] == '(')
      {
        ch.push(s[i]);
      }
      else
      if(s[i]==')')
      {
            while(!ch.empty()&& ch.top()!='(')
              {
                  postfix+= ch.top();
                  ch.pop();

              }
              ch.pop();
      }


    }

      while(!ch.empty())
      {

          postfix+=ch.top();
          ch.pop();

      }

      cout<<postfix;

}
void infix::read()
{
cout<<"enter the string"<<endl;
cin>>exp;
  infixtopostfix(exp);
}
int  infix::isoperator(char ch)
{
    if(ch=='+'|| ch =='-'||ch=='*'||ch=='/')
    {
      return true;
    }
    else
    {
    return false;
    }
}
int infix::isoperand(char ch)
{
  if(ch >='a' && ch<='z')return true;
  else
  if(ch >='0' && ch<='9')return  true;
  else
  if(ch >='A' && ch <= 'Z' )return true;
  else
  return false;
}
int infix::higherprecidence( char ch , char p)
{
    int op1 = pre(ch);
    int op2 = pre(p);

    if(op1>op2)
    {

        return true;

    }
    else
    {
      return false;
    }


}
int infix::pre(char p)
{
    int pre = -1;
    switch(p)
    {
      case '+':
      case '-': pre = 1;
      break;
      case '*':
      case '/': pre = 2;
      break;
      case '^':pre  = 3;

    }
return pre;

}
int main()
{

  infix a;
  a.read();




}
