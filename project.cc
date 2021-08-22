#include<iostream>
#include<vector>
#include<iterator>
#include<string>

using namespace std;

int main()
{
	string currstring,prestring=" ",maxstring;
	int  currnu=1,maxnu=0;
	while(cin>>currstring)
	{
		if(currstring == prestring)
		{
			++currnu;
			if(currnu >maxnu)
			{
				maxnu = currnu;
				maxstring = currstring;
			}
		}	
		else
		{
			currnu=1;

		}
		
		prestring = currstring;
	}
	if(maxnu >1)
		cout<<"最大重复单词为："<<maxstring<<"对应次数为："<<maxnu<<endl;
	else
		cout<<"任何单词都未连续出现过"<<endl;	
	return 0;
}
