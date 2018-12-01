#include<iostream>
#include<fstream>
using namespace std;

int main()
{

char data[100];

fstream file;

file.open("kranthi.txt",ios::in);
file.read((char*)&data,sizeof(data));
 cout<<data;


}


#include<iostrea>
#include<fstream>
using namespace std;


int main()
{

char data[100];
fstream file;

file.open("kranthi.txt",ios::out);

file.write((char*)&data,sizeof(data));
 file>>data;

}
