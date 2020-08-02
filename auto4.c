#include<stdio.h>
int countElement(int size,int numk,int *arr)
{
	int i,count=0;
	for(i=0;i<size;i++)
	{
		if(arr[i]>2*numk)//2*numk
		{
			count+=1;
		}
	}
	return count;
}

/*
size=5 numk=2 ---> 4
1 2 3 4 5
out:
1
*/










int main()

{

	int size,numk,arr[100],i;

	scanf("%d%d",&size,&numk);

	for(i=0;i<size;i++)

	{

		scanf("%d",&arr[i]);

	}

	printf("%d",countElement(size,numk,arr));

	return 0;

}
