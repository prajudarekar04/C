#include<stdio.h>
#include<conio.h>
void main()
{
	char a[80];
	FILE *f1;
	f1=fopen("note.txt","w");
	printf("\nEnter Lines\n");
	while(1)
	{
		gets(a);
		if(strcmp(a,"stop")==0)
			break;
		fputs(a,f1);
		fputs("\n",f1);
	}
	fclose(f1);
	return;
}