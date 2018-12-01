#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>s[],int v);
void addedge(vector<int>s[],int u,int v);

void addedge(vector<int>s[] ,int u,int v)
{

	s[v].push_back(u);
	s[u].push_back(v);


}

void print( vector<int>s[],int V)
{

	for(int i=0;i<V;i++)
	{
			cout<<"list of adj"<<i<<endl<<"head";
		for(auto x: s[i])
			{
				cout<<"-"<<x;

			}


	}
}


int main()
{
	vector<int>v[5];
	int ch;	
	int src,des;
	while(1)
	{
		cout<<"1.add";
		cin>>ch;
		switch(ch)
		{

			case 1 : {
					cout<<"enter the source and des";
					cin>>src;
					cin>>des;
					addedge(v,src,des);

				}break;
			case 2 :print(v,5);

		}




	}	





}
