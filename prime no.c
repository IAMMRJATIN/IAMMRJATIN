#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	printf("Enter a number : \n");
	scanf("%d",&n);
	
	if(n>1){
			for(i=2;i<=(n/2);i++)
			if(n%i==0)
			{
			printf("No is  not prime\n");
			break;
			}	
		
	
		else
			{
			printf("No is prime\n");
			break;
			}
		}	
	else if(n<1){
			printf("Number is not prime");
		}
}
