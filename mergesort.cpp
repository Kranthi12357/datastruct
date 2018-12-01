#include<iostream>
#define SIZE 5
using namespace std;

class sorting
{
public:
int low,high,mid,a[SIZE];
public:

void mergesort(int a[] ,int l,int h);
void readelements();
void printelements(int a[]);
void print();
void mergesort1(int a[],int l,int m,int h);
};

void sorting::print()
{


	printelements(a);


}

void sorting::mergesort1(int a[],int l,int m,int h)
{
	int k,s;
	k= m-l+1;
	s= h-m;

	int L[k],R[s];
	int i,j,e;
	for(i=0;i<k;i++)
	{

		L[i] = a[l+i];
		i++;


	}
	for(j=0;i<s;i++)
	{

		R[i] = a[m+1+j];
		j++;


	}
	i=0;j=0;e=0;
	while(i<k && j<s)
	{


		if(L[i] <=R[j])
		{


			a[e] = L[i] ;
			i++;
			e++;


		}
		else
		{

			a[e] = R[j];
			j++;
			e++;

		}

	}

	while(i<k)
	{

		a[e] = L[i];
		i++;
		e++;


	}
	while(j<s)
	{

		a[e] = R[j];
		j++;
		e++;


	}



}
void sorting:: readelements()
{

	for(int i=0;i<SIZE;i++)
	{

		cin>>a[i];


	}

}

void  sorting::printelements(int a[])
{



	for(int i=0;i<SIZE;i++)
	{

		cout<<a[i];



	}
}

void sorting::mergesort(int a[] ,int l,int h)
{

if(h>l)
{

	int m= l+(h-l)/2;

	mergesort(a,l,m);
	mergesort(a,m+1,h);
	mergesort1(a,l,m,h);




}




}



int main()
{
	sorting g;
	int ch;
	while(1)
	{
		cout<<"1.enter the elements"<<endl;
		cout<<"2.print the elements"<<endl;
		cout<<"enter your choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1 : g.readelements();
					break;
			case 2: g.print();
					break;

			case 3 : {int l=0;
					int h =SIZE-1;
					g.mergesort(g.a,l,h);
					}break;



			case 4 : _Exit(0);

		}



	}

}
