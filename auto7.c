#include<stdio.h>
void arrayRevers(int len, int *arr)//1 2 3 4 5
{
	int i,temp,originalLen=len;//5
	
	for (i=0;i<=originalLen/2;i++)//
	{
		temp=arr[len-1];
		arr[len-1]=arr[i];
		arr[i]=temp;
		len-=1;
	}
}

/*
5
1 2 3 4 5
5 4 3 2 1
*/










int main()
{
	int len,arr[100],i;
	scanf("%d",&len);
	for (i=0;i<len;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	arrayRevers(len, arr);
	for (i=0;i<len;i++)
	{
		printf("%d ",arr[i]);
		
	}
}
