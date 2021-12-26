#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
//实验double类型数据实现冒泡排序
void maopao(double arr[], int n) {
	int a = 0;
	int b = 0;
	for (a = 0; a < n - 1; a++) {
		for (b = 0; b < (n - 1 - a); b++) {
			double tmp = 0;
			if (arr[b] > arr[b + 1]) {
				tmp = arr[b + 1];
				arr[b + 1] = arr[b];
				arr[b] = tmp;
			}
			
		}
	}
}
int main() {
	double arr[] = { 128.5,105,118.6,127.8,138.8,123,150,98,138,115 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 0;
	maopao(arr, n);
	for (x = 0; x < n; x++) {
		if (x == 0)
			printf("[ %lf", arr[x]);
		else if (x == n - 1)
			printf(" %lf ]", arr[x]);
		else
			printf(" %lf", arr[x]);
	}
	return 0;
}