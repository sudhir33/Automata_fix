#include<stdio.h>
void removeElement(int size,int indexValue,int *inputList)
			//5 2     
			//1 2 3 4 5
{
	int i,j;
	if(indexValue<size)//1 2 4 5 5
	{
		for(i=indexValue;i<size-1;i++)//i=2;2<4
		{
			inputList[i]=inputList[i+1];//
		}
		for(i=0;i<size-1;i++)
		{
			printf("%d ",inputList[i]);
		}
	}
	else
	{
		for(i=0;i<size;i++)
		printf("%d ",inputList[i]);
	}

}

/*
5 2
1 2 3 4 5
1 2 4 5
*/






int main()

{

	int size,indexValue,inputList[100],i;

	scanf("%d%d",&size,&indexValue);

	for(i=0;i<size;i++)

	{

		scanf("%d",&inputList[i]);

	}

	removeElement(size,indexValue,inputList);

	return 0;

}
