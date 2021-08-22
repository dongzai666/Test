#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> a{1,3,5,6,7},b{1,2,3};
	auto c =a.cbegin(),d=b.cbegin();
	while(c != a.cend() && d != b.cend())
	{
		if(*c != *d)
		{
			cout<<"it`s not"<<endl;
			break;	
		}
		++c;
		++d;
	}
		if(c==a.cend())
			cout<<"a是b的前缀"<<endl;
		if(d==b.cend())	
			cout<<"b是a的前缀"<<endl;
	return 0;
}
