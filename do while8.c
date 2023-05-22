#include<stdio.h>
main()
{
	int i,f=1;
	printf("enter the value  =");
	scanf("%d",&i);
	do{
		f=f*i;
		i--;
		
	}while(i>0);
	printf("the factorial is =%d",f);
	
	
}
