#include<stdio.h>
void pp(int num)//4
{
	int p=1,i,j;
	for(i=0;i<num;i++)// 0 1 2 3
	{
		for(j=0;j<=i;j++)//0<=0
		{
			printf("%d ",p);//1
		}
		printf("\n");
	}
}


/*
4
1
1 1
1 1 1
1 1 1 1
*/










int main()

{

	int num;

	scanf("%d",&num);

	pp(num);

	return 0;

}


