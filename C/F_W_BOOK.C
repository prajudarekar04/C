#include<studio.h>
#include<conio.h>
#include"BOOK.h"
void main()
{
	FILE *fb;
	BOOK b;
	int no;
	fb=fopen("book.data","wb");
	while(1)
	{
		printf("\nBook No.:");
		scanf("%d",&no);
		if(no==0)
			break;
		input(&b,no);
		fwrite(&b,sizeof(BOOK),1,fb);
	}
	fclose(fb);
	return;
}