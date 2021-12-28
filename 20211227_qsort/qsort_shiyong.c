#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//创建一个结构体类型st
struct st {
	char id[20];//学号
	char name[20];//姓名
	int age;//年龄
	char sex[5];//性别
};
//用qsort测试int类型数组排序
int comp_int(const void* e1, const void* e2) {
	return (*(int*)e1) - (*(int*)e2);
}
void test_int() {
	int intarr[] = { 2,3,4,1,8,5,7,42,38,59,63,99,108,138 };
	int sz = sizeof(intarr) / sizeof(intarr[0]);
	qsort(intarr, sz, sizeof(intarr[0]), comp_int);
	for (int i = 0; i < sz; i++) {
		printf("%d ", intarr[i]);
	}
}
//用qsort测试double类型数组排序
int comp_double(const void* e1, const void* e2) {
	return (int)( * (double*)e1 - *(double*)e2);
}
void test_double() {
	double dubarr[] = { 12.8,56.7,38.9,23.0,58.9,15.3,138.8 };
	int sz = sizeof(dubarr) / sizeof(dubarr[0]);
	qsort(dubarr, sz, sizeof(dubarr[0]), comp_double);
	for (int i = 0; i < sz; i++) {
		printf("%lf  ", dubarr[i]);
	}
}

//用qsort测试自定义结构体类型数组排序
int comp_struct(const void* e1, const void* e2) {
	return ((struct st*)e1)->age - ((struct st*)e2)->age;
}
void test_st() {
	struct st strr[] = { {"10268","张三丰",108,"男"},{"18938","石破天",16,"男"},{"15387","叮　当",14,"女"},{"12383","阿　绣",14,"女"},{"18259","郭　靖",28,"男"},{"12587","黄　蓉",25,"女"} };
	int sz = sizeof(strr) / sizeof(strr[0]);
	qsort(strr, sz, sizeof(strr[0]), comp_struct);
	for (int i = 0; i < sz; i++) {
		printf("姓名：%s 学号：%s 年龄：%d 性别：%s\n", strr[i].name, strr[i].id, strr[i].age, strr[i].sex);
	}
}


int main() {
	test_int();//用qsort测试int类型数组排序
	printf("\n");
	test_double();//用qsort测试double类型数组排序
	printf("\n");
	test_st();//用qsort测试自定义结构体类型数组排序
	return 0;
}