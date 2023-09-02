#include<stdio.h>
#include<conio.h>
void main()
{
	void wordcount();
	clrscr();
	wordcount();
	return;
}
void worddcount()
{
	char a[20];
	int i=0,cnt=1;
	printf("\nString");
	gets(a);
	while(a[i]!='\0')
	{
		if(a[i]==32)
			cnt++;
		i++;
	}
	printf("\nWords:%d:",cnt);
	return;
}