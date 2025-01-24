#include<stdio.h>   //Program to check a year is leap year or not.
int main()
{
	int y;
	printf("Enter the year");
	scanf("%d",&y);
	if((y%100==0 && y%400==0) || (y%4==0))
    {
    printf("The year is leap year");
	}	
	else
	{
	printf("The year is not leap year");
	}
	return 0;	
}