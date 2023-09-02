#include<stdio.h>
#include<conio.h>
void main()
{
	char a[50];
	char *b=a;
	int i=0;
	printf("\nEnter String:");
	gets(a);
	printf("\nString\n");
	while(*(b+1)!='\0')
	{
		printf("%c",*(b+i));
		i++;
	}
	getch();
	return;
}