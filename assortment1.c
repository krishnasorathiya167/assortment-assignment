#include<stdio.h>

main()
{
	int i,n;
	
	printf("Enter Size Of Array = ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter VAlue Of Element = \n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n--------------------\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	
	printf("All Negative Value = ");
	
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("%d",a[i]);
		}
	}
	
}
