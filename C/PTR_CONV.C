#include<stdio.h>
#include<conio.h>
void main()
{
	void convert(char*);
	char a[50];
	int i=0;
	printf("\nString:");
	gets(a);
	puts(a);
	while(a[i]!='\0')
	{
		convert(&a[i]);
		i++;
	}
	puts(a);
	getch();
	return;
}
void convert(char*b)
{
	if(*b>=65&&*b<=90)
		*b=*b+32;
	else
	{
		if(*b>=97&&*b<=122)
			*b=*b-32;
	}
}