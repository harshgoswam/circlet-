#include<stdio.h>
main()
{
	int r,c,s;
	for(r=5;r>=1;r--)
     {
     	for(s=0;s<r;s++)
     	{
     		printf(" ");
		 }
       for(c=r;c<=5;c++)
       {
       	printf("%d",c);
	   }
	   printf("\n");
	 }
}
