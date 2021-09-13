#include<iostream>
#include<vector>
using namespace std;
int a[10];
void quicksort(int left,int right);
int main(int argc,char *argv[])
{
	srand(time(NULL));
	cout<<argv[1]<<endl;
	cout<<"随机生成数字为：";
	for(int &i:a)
	{
		i = rand()%100;
		cout<<i<<" ";
	}
	cout<<endl;
	quicksort(0,9); 
	cout<<"排完序后数字为：";
	for(int i: a)
		cout<<i<<" ";
	cout<<endl;
	return 0;
}
void quicksort(int left,int right)
{
	int i,j,temp;
	if(left > right)
		return ;
	i = left;
	j = right;
	temp = a[left];
	while(i != j)
	{
		while(a[j] >= temp && i<j)
			j--;
		while(a[i] <= temp && i<j)
			i++;
		if(i<j)
		{
			int t;
			t = a[j];
			a[j] = a[i];
			a[i] = t;
		}
	}
	a[left] = a[i];
	a[i] = temp;
	quicksort(left,i-1);
	quicksort(i+1,right);
}
