#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main()
{

	int a[10];
	srand(time(NULL));
	auto  *p1 =begin(a),*p2 =end(a);
	while(p1!=p2)
	{

		*p1++=rand()%50;
	}
	cout<<"数组的值为："<<endl;
	for(auto i:a)
		cout<<i<<" ";
	return 0;
}
