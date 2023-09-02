#include<stdio.h>
#include<conio.h>
void main()
{
	char a[80];
	FILE *f1;
	f1=fopen("note.txt","r");
	printf("\nData:\n");
	while(1)
	{
		fgets(a,80,f1);
		if(feof(f1))
			break;
		puts(a);
	}
	fclose(f1);
	return;
}
