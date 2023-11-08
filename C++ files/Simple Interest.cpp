#include <stdio.h>

int main()
{
	float SI,P,R,T;
	printf("Enter Principle:");
	scanf("%f",&P);
	printf("Enter Rate:");
	scanf("%f",&R);
	printf("Enter Time:");
	scanf("%f",&T);
	SI=(P*R*T)/100;
	printf("Simple Interest is:%f",SI);
	
	return 0;
}


