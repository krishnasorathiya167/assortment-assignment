#include<stdio.h>

main()
{
	int i,n,max1,max2;
	
	printf("Enter VAlue Array Size = ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter Value Of Element = \n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);	
	}	
	printf("Enter Of Array = ");
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]>max1)
		{
			max2=max1;
			max1=a[i];
		}
		else if(a[i]>max2 && a[i]<max1)
		{
			max2=a[i];
		}
	}
	printf("\nFirst Largest Number = %d",max1);
	printf("\nSecound Largest Number = %d",max2);
}