# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
//千辛万苦终于打印出了菱形
int main() {
	int s = 21;
	for (int i = 0; i < s; i++) {
		if(i<s/2+1){
			for (int j1 = 0; j1 < s/2+1; j1++) {
				if (j1 < s/2-i)
					printf(" ");
				else
					printf("*");
			}
		}
		if (i == 0)
			printf("\n");
		if (i > 0&&i< s / 2+1) {
			for (int k = 0; k < i; k++) {
				if (k == i - 1)
					printf("*\n");
				else
					printf("*");
			}
		}
		/*Sleep(1000);*/
		if (i > s/2) {
			for (int j2 = 0; j2 < s/2; j2++) {
				if (s / 2+ j2 < i)
					printf(" ");
				else
					printf("*");
			}
			for (int k2 = 0; k2 < s - i; k2++) {
				if (k2 == s - i - 1)
					printf("*\n");
				else
					printf("*");
			}
		}


	}
	return 0;
}