#include<stdio.h>
main()
{
	int n,count=1;
	printf("enter the number =");
	scanf("%d",&n);
	printf("multipliction table %d =\n",n);
	do{
		printf("%d x %d =%d\n",n,count,(n*count));
		count++;
		
	}while(count<=10);
	
	
	
}
