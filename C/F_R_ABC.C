#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *f1;
	char ch;
	clrscr();
	f1=fopen("abc.txt","r");
	if(f1==NULL)
	{
		printf("\nFile not found.");
		return;
	}
	printf("\nData:\n");
	while(1)
	{
		ch=fgetc(f1);
		if(feof(f1))
			break;
		printf("%c",ch);
	}
	fclose(f1);
	return;
}
