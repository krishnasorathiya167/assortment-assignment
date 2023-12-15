#include<stdio.h>

main()
{
	int i,j,r,c;
	
	printf("Enter OF Row Size = ");
	scanf("%d",&r);
	
	printf("Enter OF Column Size = ");
	scanf("%d",&c);
	
	int a[r][c],b[r][c],d[r][c];
	
	printf("Enter Value Of First Element = \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter Value Of Secound Element = \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	
	printf("Addition Of Two Matrix = \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			d[i][j]=a[i][j]+b[i][j];
			printf("%d",d[i][j]);
		}
		printf("\n");
	}
	
	
	
	
}