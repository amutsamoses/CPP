#include <stdio.h>
#include <conio.h>

int main()
{
	int Mass_No, m1,m2,m3,Total;
	float Average;
	
	printf("Enter Mass No.:");
	scanf("%d",&Mass_No);
	printf("Enter marks 1:");
	scanf("%d",&m1);
	printf("Enter marks 2:");
	scanf("%d",&m2);
	printf("Enter marks 3:");
	scanf("%d",&m3);
	
	Total=m1+m2+m3;
	Average=Total/3.0;
	
	printf("Student Mass Number:%d \n",Mass_No);
	printf("\nmarks 1 :%d",m1);
	printf("\nmarks 2 :%d",m2);
	printf("\nmarks 3 :%d",m3);
	printf("\nTotal : %d",Total);
	printf("\nAverage : %f",Average);
	
	return 0;
}
