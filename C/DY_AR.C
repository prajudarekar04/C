#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i=0,n;
	char s[20];
	char *p[5];
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\nCity Name:");
		scanf("%s",s);
		n=strlen(s)+1;
		*(p+i)=(char*)malloc(n*sizeof(char));
		strcpy(*(p+i),s);
	}
	printf("\nCity Name\n");
	for(i=0;i<5;i++)
	{
		puts(*(p+i));
		free(*(p+i));
	}
	getch();
	return;
}
