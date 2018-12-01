#include<iostream>
#include<stack>
using namespace std;
class postfix
{
    string exp;
    stack<int>s;
  public:
    void read();
    void evaluate();
    void evaluatepostfix(string &k);
};
void postfix::read()
{
cout<<"enter the strind"<<endl;
cin>>exp;
}
void postfix::evaluate()
{
  evaluatepostfix(exp);
}
void postfix::evaluatepostfix(string &k)
{
  for(int i=0;i<k.length();i++)
  {
    if(isdigit(k[i]))
    {
      s.push(k[i]-'0');
    }
    else
    {
        int op2 = s.top();
          s.pop();
        int op1 = s.top();
        s.pop();
        switch (k[i]) {
          case /* value */'+': s.push(op1+op2);break;
          case '-':s.push(op1-op2);break;
          case '*':s.push(op1*op2);break;
        }
    }
    cout<<s.top();
  }
}

int main()
{
  postfix a;
  a.read();
  a.evaluate();
}
