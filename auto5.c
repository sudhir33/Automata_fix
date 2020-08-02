#include<stdio.h>
void printCharacterPattern(int num)
{
	int i,j;
	char ch='a';
	char print;
	for(i=0;i<num;i++)//0 1 
	{
		print=ch;//'a'
		for(j=0;j<=i;j++)//j=0;0<=1
		{
			printf("%c",ch++); //a ab abc
		}
		ch=print;
		printf("\n");
	}
}

/*
4
a
ab
abc
abcd
*/











int main()
{
	int num;
	scanf("%d",&num);
	printCharacterPattern(num);
	
}
