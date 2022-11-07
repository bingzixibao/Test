#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//指针
//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	printf("%d\n", sizeof(pd));
//	*pd = 5.5;
//	printf("d = %lf\n", d);
//
//	//int a = 10;
//	////printf("%p\n",& a);
//	//int* p= &a;//p是一个指针变量，类型是int*
//	////printf("%p\n", p);
//	//*p = 20; //* 叫做解引用操作符/间接访问操作符
//	//printf("a = %d\n", a);
//	return 0;
//}

//结构体 - 用结构体来描述复杂对象

//创建一个结构体类型
struct Book
{
	char name[20];//C语言程序设计
	short price;//定价
};

#include<string.h>
int main() 
{
	//利用结构体类型创建一个该类型的结构体变量
	struct Book b1 = {"C语言程序设计",55};
	strcpy(b1.name,"C++"); //字符串拷贝 - 库函数

	struct Book* pb = &b1;

	//利用pb打印书名和价格

	// -> 操作符 结构体指针
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);

	// . 操作符  结构体变量
	/*printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);*/

	/*printf("书名：%s\n", b1.name);
	printf("价格：%d\n", b1.price);
	b1.price = 15;
	printf("修改后的价格：%d\n", b1.price);*/
	return 0;
}

