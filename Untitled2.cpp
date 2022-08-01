#include <stdio.h>

int main ( ) {
	printf ( " nhap n :  \n") ;
	int n;
	scanf("%d", &n);
	int a[n];
	printf (" nhap mang a:  \n");
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int max = a[0]; 
	int near_max = 0;
	for (int i = 1; i < n; i++) {
		
		if ( max < a[i] ) {
			max = a[i];
		}
	}
		for (int i = 0; i < n; i++) {	
		if ( near_max < a[i] && a[i] < max) {
			near_max = a[i];
		}
		}
	
		
	printf (" gia tri max %d va gan max %d \n", max, near_max);
	return 0;
}
