#include<iostream>
#include<stdio.h>
#include<vector>
#include<iterator>
using namespace std;

int main()
{

	int a[10];
	vector<int>  b;
	srand(time(NULL));
	auto  *p1 =begin(a),*p2 =end(a);
	while(p1!=p2)
	{

		*p1++=rand()%50;
	}
	cout<<"数组的值为："<<endl;
	for(auto i:a)
	{
		b.push_back(i);
		cout<<i<<" ";
	}
	for(auto &i:b)
	{
		i*=2;
	}
	cout<<"二倍以后的值："<<endl;
	for(auto i=b.cbegin();i!=b.cend();i++)
		cout<<*i<<" ";
	cout<<endl;
	return 0;
}
