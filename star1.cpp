#include<stdio.h>

int main() {
	int num,edn;
	scanf_s("%d",&num);
	edn = num * 2 - 1;
	
	for (int i = 1; i <= edn; i++) {
		if (i<=num) {
			for (int j = 1; j <= i; j++) {
				printf("*");
			}
		}
		 else if (i>num) {
			for (int j =(edn-i); j >=0; j--) {
				printf("*");
				
			}
			
		}
		printf("\n");
	}


	return 0;
}