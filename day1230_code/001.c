# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//1-100000的打印自幂数
int cf(int a, int n) {
	int k = a;
	if (n == 0)
		return 1;
	if (n == 1)
		return a;
	for (int i = 2; i <= n; i++) {
		a *= k;
	}
	return a;
}
//int main() {
//	int a = 0;
//	for (a = 1; a < 100000; a++) {
//		int n = 1;
//		int k = a;
//		int k1[6] = { 0 };
//		while (k >9) {			
//			k1[n] = k % 10;
//			k = k / 10;
//			n++;
//		}
//		if (a==(cf(k,n)+cf(k1[1],n)+cf(k1[2],n)+cf(k1[3],n)+cf(k1[4],n)+cf(k1[5],n)))
//			printf("%d\n",a);
//	}
//	return 0;
//}