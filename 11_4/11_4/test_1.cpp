// C语言开篇
// 人和计算机交流的语言

// 第一个C语言程序
//包含一个stdio.h的文件
//std-标准 stendard input output
//#include<stdio.h>
//int 是整型
//main 前面的int表示main函数调用返回一个整型值 
//int main()    //主函数-程序的入口
//{
//	//这里完成代码编写
//	//函数-print function  -printf-打印函数
//
//	printf("hello word \n");
//	return 0;  //返回0
//}

//#include<stdio.h>
//数据类型
//char		字符数据类型
//short		短整型
//int		整形
//long		长整型
//long long 更长的整形
//float		单精度浮点数
//double	双精度浮点数

//%d - 打印整型
//%c - 打印字符
//%f - 打印浮点数字-打小数
//%p - 以地址的形式打印
//%x - 打印16进制数字

//char 字符类型
//int main()
//{
//	char ch = 'A';
//	printf("%c\n",ch); //%c--打印字符格式的数据
//
//	//short int -短整型
//	//int 整型
//	int age = 20;
//	printf("%d\n", age);   //%d--打印整型十进制数据
//
//	//long 长整型
//	long num = 100;
//	printf("%d\n", num);
//
//	//float 单精度浮点型
//	float f = 5.0;
//	printf("%f\n", f);
//
//	//double 双精度浮点型
//	double d = 3.14;
//	printf("%lf\n", d);
//
//	//各数据类型字节大小
//	printf("%d\n", sizeof(char));		// 1
//	printf("%d\n", sizeof(short));		// 2
//	printf("%d\n", sizeof(int));		// 4 
//	printf("%d\n", sizeof(long));		// 4/8
//	printf("%d\n", sizeof(long long));	// 8
//	printf("%d\n", sizeof(float));		// 4
//	printf("%d\n",sizeof(double));		// 8
//
//	//计算机中的单位 
//	//bit-比特位  一个比特位只存放一个 1 或 0
//	//byte-字节  一个字节 = 8个比特位的大小
//	//kb 1kb = 1024byte 
//	//mb 1mb = 1024kb
//	//gb 1gb = 1024mb
//	//tb 1tb = 1024gb
//	//pb 1pb = 1024tb
//	return 0;
//}


//#define _CRT_SECURE_NO_WERNINGS 
//#include <stdio.h>
////常量、变量
//int main()
//{
//	//计算2个数的和
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//
//	//输入数据-使用输入函数scanf
//	scanf_s("%d%d", &num1, &num2); //取地址符&
//	//C语言语法规定，变量要定义在当前代码块的最前面
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}





//int num2 = 20;		//全局变量-定义在代码块{}之外的变量
//int main()
//{
//	int num1 = 10;	//局部变量-定义在代码块{}之内的变量
//	//局部变量和全局变量的名字不能相同
//	//如出现相同情况，则局部变量优先
//	return 0;
//}

//int main()
//{
//	short age = 20;			//向内存申请2个字节 =16bit位，用来存放20
//	float weight = 95.6f;	//向内存申请4个字节，存放小数
//	return 0;
//}



//变量的作用域和生命周期
//局部变量的作用域是变量所在的局部范围
//全局变量的作用域是整个工程

//局部变量的生命周期是：进入作用域生命周期开始，出作用域生命周期结束。
//全局变量的生命周期是：整个程序的生命周期。
#include<stdio.h>
int main()
{
	int num1 = 10;
	{
		int num = 0;
		printf("%d\n", num);
		printf("%d\n", num1);
	}
	printf("%d\n", num1);
	return 0;
}