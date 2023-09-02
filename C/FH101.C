#include<stdio.h>
void main()
{
	FILE *flist;
	char c;
	flist=fopen("list.txt","w");
	while((c=getchar())!=EOF)
		putc(c,flist);
	while(getc(flist)!=EOF)
		printf("%c",c);
	return;
}