
#include<stdio.h>

main()
{
	int r,c,s;
	for(r=1;r<=5;r++)
	{
		for(s=5;s>r;s--)
		{
			printf(" ");
		}

		for(c=1;c<=r;c++)
		{
			printf("%d",c);
		}
			printf("\n");
	}
	 for(r=1;r<=4;r++)
        {
     	for(s=0;s<r;s++)
     	{
     		printf(" ");
		 }
       for(c=r;c<=4;c++)
       {
       		printf("%d",c);
	   }
	   printf("\n");
	 }

}
