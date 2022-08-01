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
	int near_max = a[1];
	for (int i = 1; i < n; i++) {  // tim so lon nhat 
		
		if ( max < a[i] ) {
			max = a[i];
		} 
	}
	printf (" gia tri max %d", max); 
		for (int i = 0; i < n; i++) {	  // tim so gan lon nhat
		if ( near_max < a[i] && a[i] < max) {
			near_max = a[i]; 
		} else {  break;
		}
		}
		
	if ( near_max != max) {
	printf (" gia tri  gan max %d \n",near_max);	
} else  { printf (" ko co gia tri gan max");
}
return 0;

}
