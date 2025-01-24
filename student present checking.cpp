#include<stdio.h>    //Program to check a particular student is present or not.
int main()
{
	int r,c;
	printf("Enter the roll no of the student");
	scanf("%d",&r);
	printf("Enter the roll no to be checked with");
	scanf("%d",&c);
	if(r==c)
	printf("The student is present");
}