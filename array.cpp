#include<stdio.h>
//정렬 연습
int main() {
	int a, b, c,d,e;
	int arr[5] = { 0 };
	int i, j, k;
	
	printf("1~100사이 숫자 5개를 입력세요\n");
	scanf_s("%d %d %d %d %d", &a, &b, &c,&d,&e);
	while (!(a >= 1 && a <= 100 && b >= 1 && b <= 100 && c >= 1 && c <= 100 && d >= 1 && d <= 100 && e >= 1 && e <= 100)) {
		printf("1~100 사이의 숫자가 아닙니다 다시 입력하세요\n");
		scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &e);
	}
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;
	arr[3] = d;
	arr[4] = e;
	
		for (i = 0; i < 5; i++) {
			for (j = i + 1; j < 5; j++) {
				if (arr[i] < arr[j]) {
					k = arr[i];
					arr[i] = arr[j];
					arr[j] = k;

				}
			}
			
		}
		for(int i=0;i<5;i++)
		printf("%d ",arr[i]);
	
}