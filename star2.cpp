#include<stdio.h>

int main() {
	int num,max,k=0;
	scanf_s("%d",&num);
	max = num * 2 - 1;
	
	
	for (int i = 0; i <=max-1; i++) {
	
		if (i<num) {
			for (int j = 1; j <= max-i; j++) {
				if (i >=j) {
					printf(" ");
					k = j;
				}
				else 
					printf("*");
			}

		}
		
		 if (i>=num) {
			for (int j = max; j >= max-i; j--) {
				
				if ((max-j)<k-1) {
					printf(" ");
					
					
					
				}
				else
					printf("*");
					
			}
			k = k - 1;
		}
		
		printf("\n");
	}
	return 0;
}