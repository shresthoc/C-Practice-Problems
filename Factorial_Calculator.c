#include <stdio.h>
#include <math.h>
int main() {
	int n;
	printf("Enter the number whose factorial you want to calculate:");
	scanf("%d", &n);
	int i;
	for (i=n-1; i>=1; i--){
		n = n*i;
	}
	printf("%d", n);
	return 0;
}