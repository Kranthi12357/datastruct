#include<iostream>
using namespace std;


class test
{
int a,b;
public:
void getdata();
void putdata();
test sum(test);



};
void test::getdata()
{


cout<<"enter a value";
cin>>a;

cin>>b;

}
void test::putdata()
{

cout<<"entered values are";
cout<<a<<b;
}

test test::sum(test y)
{


test z;
z.a = a+y.a;
z.b = b+y.b;

return z;
}
int main()
{

test t1,t2,t3;

t1.getdata();
t1.putdata();
t2.getdata();
t2.putdata();

t3 = t1.sum(t2);

t3.putdata();
}
