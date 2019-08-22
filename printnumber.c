//Write a program that prints the numbers from 1 to 100 and for multiples of '3' print "Fizz" instead of
//the number and for the multiples of '5' print "Buzz".
#include<stdio.h>
#include<stdlib.h>

void main()
{
	int i;
	for(i=1;i<=100;i++)
	{
		if((i%3==0)&&(i%5==0))
		{
			printf("Fizz Buzz,");
		}
		else if(i%3==0)
		{
			printf("fizz,");
		}
		else if(i%5==0)
		{
			printf("Buzz,");
		}
		else
		{
			printf("%d,",i);
		}
	}
	printf("\n");
}
