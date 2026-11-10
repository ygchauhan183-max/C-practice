#include<stdio.h>
int main(){
	float c, f;
	printf("Enter celcius value:");
	scanf("%f", &c);
	f = (c*(9.0/5.0) + 32);
	printf("Fahrenheit = %.2f", f);
	return 0;
}
