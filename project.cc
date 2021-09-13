#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int book[10];
	srand(time(NULL));
	printf("产生的10个随机数字为： \n");
	for(int i =0;i<10;i++)
	{
		int number = rand()%100;
		book[i]=number;
		printf("%d ",number);
	}
	printf("\n 排序以后的数字为：\n");
	for(int i =1;i<9;i++)
	{
		for(int j =0;j<10-i;j++)
		{
			int temp;
			if(book[j]<book[j+1])
			{
				temp = book[j];
				book[j] = book[j+1];
				book[j+1] = temp;
			}
		}
	}
	for(auto i:book)
		printf("%d ",i);
	printf("\n");
	return 0;
}
