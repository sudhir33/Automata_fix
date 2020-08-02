#include<stdio.h>
void sortarray(int len,int *arr)//1 2 3 4 5
{
	int i,max,loc,j,temp;
	for(i=0;i<len;i++)
	{
		max=arr[i];//2
		loc=i;
		for(j=i;j<len;j++)
		{
			if(max<arr[j])//i=0 j=1
			{
				max=arr[j];//2
				loc=j;
			}
		}
		temp=arr[i];//1
		arr[i]=arr[loc];
		arr[loc]=temp;
	}
}


/*
23,24,12,14,21,
len=5
24 23 21 14 12
*/




int main()
{
	int arr[100]={23,24,12,14,21},len=5,i;
	sortarray(len,arr);
	for(i=0;i<len;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;

}//23,24,12,14,21
