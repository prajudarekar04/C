#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *f1;
	char ch;
	clrscr();
	f1=fopen("abc.txt","w");
	printf("\nType characters:\n");
	while(1)
	{
		scanf("%c",&ch);
		if(ch=='+')
			break;
		fputc(ch,f1);
	}
	fclose(f1);
	return;
}