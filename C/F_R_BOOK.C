#include<stdio.h>
#include<conio.h>
#include"BOOK.h"
void main()
{
	FILE *fb;
	BOOK b;
	int no;
	fb=fopen("book.data","rb"); //file to be opened for reading purpose(binry)
	while(1)
	{
		fread(&b,sizeof(BOOK),1,fb);
		if(feof(fb))
			break;
		output(&b);
	}
	fclose(fb);
	return;
}
