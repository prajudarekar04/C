#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *f1;
	int no;
	f1=fopen("num.txt","r");
	if(f1=NULL)
		return;
	while(1)
	{
		no=getw(f1);
		if(feof(f1))
			break;
		printf("%5d",no);
	}
	fclose(f1);
	return;
}