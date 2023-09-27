#include <stdio.h>
int main() {
	int v1, v2, s, t,res;
	printf("enter the speed of the first car  ");
	scanf_s("%d", &v1);
	printf("\nenter the speed of the second car  ");
	scanf_s("%d", &v2);
	printf("\nenter the distance between the cars ");
	scanf_s("%d", &s);
	printf("\nenter the driving time of the cars  ");
	scanf_s("%d", &t);
	res = (v1 + v2) * t + s;
	printf("\n distance between cars in %d",t);
	printf(" hours =  %d", res);
	return 0;
}









