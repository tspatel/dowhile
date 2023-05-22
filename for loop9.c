#include<stdio.h>
main()
{
	int n,count=1;
	printf("enter the number =");
	scanf("%d",&n);
	printf("multipliction table %d \n",n);
	for(n;count<=10;count++)
	printf("%d x %d =%d\n",n,count,(n*count));
	
	
}
