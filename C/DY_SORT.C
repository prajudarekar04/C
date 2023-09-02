#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i=0,j,n,pos;
	char s[20];
	char *p[5],*tmp;
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
		puts(*(p+i));
	for(i=0;i<4;i++)
	{
		pos=i;
		for(j=i+1;j<5;j++)
		{
			n=strcmp(*(p+j),*(p+pos));
			if(n<0)
				pos=j;
		}
		if(i!=pos)
		{
			tmp=*(p+i);
			*(p+i)=*(p+pos);
			*(p+pos)=tmp;
		}
	}
	printf("\nCity Name");
	for(i=0;i<5;i++)
	{
		puts(*(p+i));
		free(*(p+i));
	}
	getch();
	return;
}