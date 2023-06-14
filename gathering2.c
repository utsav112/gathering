#include<stdio.h>

sum(int a[])

{

	int i,sum=0,n;
	printf("Enter the value = ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}

	for(i=0;i<=a[i];i++)
	{
		
		sum = sum + a[i];
		
	}
	printf("Sum of all Element=%d",sum);

}
main()
{

	int arr[100];
	sum(arr);
}
