#include<stdio.h>
#include<conio.h>
void main()
{
	void isBinary();
	clrscr();
	isBinary();
	return;
}
void isBinary()
{
	int no,i=0;
	char a[50];
	printf("\nString:");
	scanf("%d",&no);
	while(a[i]!='\0')
	{
		if(a[i]=='0'||a[i]=='1')
		i++;
		else
			break;
	}
	if(a[i]=='\0')
		printf("\nBinary String");
	else
		printf("\nOther string");
	getch();
	return;
}