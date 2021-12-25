# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
int add(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}
int mul(int x, int y) {
	return x * y;
}
int div(int x, int y) {
	return x / y;
}
void menu() {
	printf("***************************************\n");
	printf("******     旷野小屋——计算器    ******\n");
	printf("***************************************\n");
	printf("******    1：相加     2：相减    ******\n");
	printf("******    3：相乘     4：相除    ******\n");
	printf("******         0：退出           ******\n");
	printf("***************************************\n");
}
//用回调函数实现：

int main() {
	int input = 0;
	do {
		menu();
		printf("请输入你需要的功能所代表的数字：");
		scanf("%d", &input);
		switch (input) {
			case 0:
				break;
			case 1:
				hd(add);
				break;
			case 2:
				hd(sub);
				break;
			case 3:
				hd(mul);
				break;
			case 4:
				hd(div);
				break;
			default:
				printf("输入错误，请重新输入\n");
				break;
		}
	} while (input);
}
//用函数指针实现：
//int main() {
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do {
//		menu();
//		printf("请输入你的选择：\n");
//		scanf("%d", &input);
//		int(*arr[4])(x, y) = { add,sub,mul,div };
//		
//		if (input > 0 && input <= 4){
//			printf("请输入第一个数：\n");
//			scanf("%d", &x);
//			printf("请输入第二个数：\n");
//			scanf("%d", &y);
//			printf("%d\n", arr[input - 1](x, y));
//		}
//		else if (input == 0)
//			printf("已经退出系统！！\n");
//		else
//			printf("选择错误，请重新输入！！\n");
//	} while(input);
//	return 0;
//}