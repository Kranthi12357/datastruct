#include<iostream>
#define SIZE 25
using namespace std;
int pre(char);
int infixToPostfix(char* exp);
class intopo
{
string s;
char  stack[SIZE];
int tos;
public:

int isFull()
{
	

	if(tos==(SIZE-1))
	{

		return 1;
	}
	else
	{
		return 0;

	}


}
int isEmpty()
{

	if(tos==-1)
	{

		return 1;

	}
	else
	{

		return 0;


	}


}

void push(char ch)
{


	if(isFull())
	{


		cout<<"stack is empty";


	}

	else 
	{

		stack[++tos] = ch;


	}



}

int peek()
{


	if(isEmpty())
	{
		cout<<"stack is empty";

	
	}
	else
	{

		return (stack[tos]);

	}



}

int pop()
{


	if(isEmpty())
	{
		cout<<"stack iseempty";

	}
	else
	{

		
		 return stack[tos--];
	}

}



intopo()
{


tos == -1;

s= "a+b*(c^d-e)^(f+g*h)-i";
    

}
};

int isOperand(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');

}

int pre(char ch)
{
switch(ch)
{


	case '+' :
	case '-' : return 1;
	
	case '*' : 
	case '/' : return 2;


	case '(' : return 4;
	
	case ')' : return 0;

}
	

}

int infixToPostfix(char* exp)
{
    int i, k;
   intopo a;
 
    for (i = 0, k = -1; exp[i]; ++i)
    {
        // If the scanned character is an operand, add it to output.
        if (isOperand(exp[i]))
            exp[++k] = exp[i];
         
        // If the scanned character is an ‘(‘, push it to the stack.
        else if (exp[i] == '(')
            a.push(exp[i]);
         
        // If the scanned character is an ‘)’, pop and output from the stack 
        // until an ‘(‘ is encountered.
        else if (exp[i] == ')')
        {
            while (!a.isEmpty() && a.peek() != '(')
                exp[++k] = a.pop();
            if (!a.isEmpty() && a.peek() != '(')
                    return -1; // invalid expression             
            else
                 a.pop();
        }
        else // an operator is encountered
        {
            while (!a.isEmpty() && pre(exp[i]) <= pre(a.peek()))
                exp[++k] = a.pop();
           a.push(exp[i]);
        }
 
    }
 
    // pop all the operators from the stack
    while (!a.isEmpty())
        exp[++k] = a.pop( );
 
    exp[++k] = '\0';
   cout<<exp;
}

int main()
{

	

char exp[] = "a+b*(c^d-e)^(f+g*h)-i";
 infixToPostfix(exp);

return 0;

}



