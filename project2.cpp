#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stdexcept>
using namespace std;
long long int fact(int nu);
int main()
{
	int number;
	cout<<"please cin one numbers:"<<endl;
	while(cin>>number)
	{
		try{
			if(number<0)
				throw runtime_error("error");
			cout<<"结果是："<<fact(number)<<endl;
			cout<<"是否继续输入计算：y/n?"<<endl;
			char n;
			cin>>n;
			if(n == 'y')
				;
			if(n == 'n')
				break;
		}
		catch(runtime_error)
		{
			cout<<"存在小于零的无效输入，是否继续 y/n"<<endl;
			char c;
			cin>>c;
			if(c == 'y')
			{
				cout<<"please cin one numbers:"<<endl;
				continue;			
			}
			if(c == 'n')
				break;
		}
	}	
	return 0;
}
long long int fact(int nu)
{
	long long int ret =1;
	while(nu>1)
	{
		ret*=nu--;	
	}
	return ret;
}

