#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *f1,*f2;
	char ch;
	clrscr();
	f1=fopen("abc.txt","r");
	if(f1==NULL)
	{
		printf("\nFile Not Found.");
		return;
	}
	f2=fopen("pqr.txt","w");
	while(1)
	{
		ch=fgetc(f1);
		if(feof(f1))
			break;
		fputs(ch,f2);
	}
	fclose(f1);
	fclose(f2);
	getch();
	return;
}