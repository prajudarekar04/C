#include<stdio.h>
#include"slist.h"
#include<stdlib.h>
void main()
{
	int opt,d,res,sv,rv,pos,i,n,*ptr;
	SLIST p;
	SLIST q;
	init(&p);
	init(&q);
	while(1)
	{
		printf("\nSingle Linked List\n1.Add End\n2.Add Beg\n3.Display\n4.Odd Display\n5.Even Display\n6.Odd Nodes\n7.Even Nodes\n8.Data Sum\n9.Delete First\n10.Delete Last\n11.Delete All\n12.Delete i Node\n13.Search Value\n14.Find and Replace\n15. max. data\n16.min data\n17.insertA2\n18.insertB2\n19.copy all\n20.sort\n21.isOrdered\n22.append list\n23.reverse\n24.rdisplay\n25.\n26.\n27.insertB\n28.insertA\n29.revCopy\n30.Exit\nOption:");
		scanf("%d",&opt);
		if(opt>29)
			break;
		switch(opt)
		{
			case 1:
				printf("\nData at End:");
				scanf("%d",&d);
				addEnd(&p,d);
				break;
			case 2:
				printf("\nData at Begin:");
				scanf("%d",&d);
				addBeg(&p,d);
				break;
			case 3:
				display(&p);
				break;
			case 4:
				odisplay(&p);
				break;
			case 5:
				edisplay(&p);
				break;
			case 6:
				printf("\nOdd Nodes:%d",ocount(&p));
				break;
			case 7:
				printf("\nEven Nodes:%d",ecount(&p));
				break;
			case 8:
				printf("\nSum:%d",sum(&p));
				break;
			case 9:
			      if(p.st==NULL)
				printf("\nEmpty List");
			      else
				delFirst(&p);
			      break;
			case 10:
			      if(p.st==NULL)
				printf("\nEmpty List");
			      else
				delLast(&p);
			      break;
			case 11:
			      if(p.st==NULL)
				printf("\nEmpty List");
			      else
				delAll(&p);
			      break;
			case 12:
			      if(p.st==NULL)
				printf("\nEmpty List");
			      else
			      {
					printf("\nEnter Position to Delete");
					scanf("%d",&pos);
					if(pos<1||pos>p.cnt)
						printf("\nInvalid Input");
					else
						deliNode(&p,pos);
			      }
			      break;
			case 13:
				if(p.st==NULL)
					printf("\nEmpty List");
				else
				{
					printf("\nEnter Search Value:");
					scanf("%d",&sv);
					if(search(&p,sv)==0)
						printf("\nNot Found");
					else
						printf("\nFound");
				}
				break;
			case 14:
				if(p.st==NULL)
					printf("\nEmpty List");
				else
				{
					printf("\nEnter Search Value:");
					scanf("%d",&sv);
					printf("\nEnter Replace Value:");
					scanf("%d",&rv);
					findRepl(&p,sv,rv);
				}
				break;
			case 15:
				if(p.st==NULL)
					printf("\nEmpty List.");
				else
					printf("\nMax. value:%d",findMax(&p));
				break;

			case 16:
				if(p.st==NULL)
					printf("\nEmpty List.");
				else
					printf("\nMin. value:%d",findMin(&p));
				break;
			case 17:
				if(p.st==NULL)
					printf("\nEmpty List.");
				else
					insertA2(&p);
				break;
			case 18:
				if(p.st==NULL)
					printf("\nEmpty List.");
				else
					insertB2(&p);
				break;
			case 19:
				delAll(&q);
				copyList(&q,&p);
				display(&q);
				break;

			case 20:
				if(p.st==NULL)
					printf("\nEmpty List.");
				else
					sort(&p);
				break;
			case 21:
				if(p.st==NULL)
					printf("\nEmpty List.");
				else
				{
					if(isOrdered(&p)==0)
						printf("\nNot Ordered.");
					else
						printf("\nOrdered.");
				}
				break;
			case 22:
				if(p.st==NULL)
					printf("\nEmpty List.");
				else
				{
					appendList(&q,&p);
					display(&q);
					delAll(&q);
				}
				break;
			case 23:
				reverse(&p);
				break;
			case 24:
				rdisplay(p.st);
				break;
			case 25:
				ptr=listToArray(&p);
				printf("\nData:\n");
				for(i=0;i<p.cnt;i++)
					printf("%4d",ptr[i]);
				free(ptr);
				break;
			case 26:
				printf("\nEnter info. count:");
				scanf("%d",&n);
				ptr=(int *)malloc(n*sizeof(int));
				printf("\nArray Data\n");
				for(i=0;i<n;i++)
					scanf("%d",(ptr+i));
				arrayToList(&p,ptr,n);
				break;
			case 27:
				printf("\nPosition to insert before:");
				scanf("%d",&pos);
				printf("\nData:");
				scanf("%d",&d);
				if(pos<1||pos>p.cnt)
					printf("\nInvalid");
				else
					insertB(&p,pos,d);
				break;
			case 28:
				printf("\nPosition to insert after:");
				scanf("%d",&pos);
				printf("\nData:");
				scanf("%d",&d);
				if(pos<1||pos>p.cnt)
					printf("\nInvalid");
				else
					insertA(&p,pos,d);
				break;
			case 29:
				if(q.st!=NULL)
					delAll(&q);
				if(p.st==NULL)
					printf("\nEmpty List.");
				else
				{
					q=revCopy(&p);
					display(&q);
				}
				break;
		}
	}
}