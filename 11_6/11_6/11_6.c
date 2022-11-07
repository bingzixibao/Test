#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//scanf是C语言提供的
//scanf_s不是标准C语言提供的，是VS编译器提供的
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	//scanf_s("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//常量
//int main()
//{
//	//常量分类如下：
//	/*1.字面常量
//	3;
//	100;
//	3.14;
//	.....*/
// 
//	//2.const修饰的常变量
//	//const - 常属性 - 修饰后的变量不能再更改
//	const num = 4;
//	printf("%d\n", num);
//		return 0;
//}

//3.#define 定义的标识符常量
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}

//4.枚举常量
//枚举 - 一一列举
//例如：性别、三原色、星期

//枚举关键 - enum
//enum Sex {     //枚举常量
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s = FEMALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}

//字符串+转义字符+注释
//int main()
//{
//	char arr1[] = "abc";  //数组
//	//"abc" -- 'a','b','c','\0' -- '\0'是字符串的结束标志
//	//注：字符串的结束标志是一个\0的转义字符。在计算字符串长度的时候\0是结束标志，不算作字符串内容。
//	char arr2[] = { 'a','b','c',0};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c','\0'};
//	printf("%d\n", strlen(arr1));    //strlen - string length - 计算字符串长度
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//转义字符 - 转变原来的意思
//int main()
//{
//	//printf("abc");
//	//printf("abcn\n");   // \n换行  \t水平制表符
//	//printf("abc\n");
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	return 0;
//}
//#include<string.h>
//int main()
//{
//								  // \ddd ddd表示1-3个八进制的数字 0-7
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	printf("%c\n", '\132');
//	// \32 -- 32是个八进制数字
//	// 32作为8进制代表的那个十进制数字，作为ASCII码值，对应的数字
//	// 32 -- > 10进制等于 26 - > 作为ASCII码值代表的字符
//
//	 // \xdd dd表示2个十六进制的数字
//	printf("%c\n", '\x61');
//
//	return 0;
//}



//选择语句
//int main()
//{
//	int input = 0;
//	printf("考入大学\n");
//	printf("你要好好学习么?(1/0)>：");
//	scanf("%d", &input);	// 1/0
//	if (input == 1)
//		printf("获得优质offer\n");
//	else
//		printf("回家卖红薯\n");
//	return 0;
//}


//循环语句
//int main()
//{
//	int line = 0;
//	printf("加入大学\n");
//	while (line < 2000)
//		{
//			printf("敲一行代码:%d \n",line);
//			line++;
//		}
//	if (line>=2000)
//		printf("获得优质offer");
//	return 0;
//}


//函数
//自定义函数
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	//sum = num1 + num2;
//	sum = Add(num1, num2);
//	//sum = a + b;
//	sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}


//数组 - 一组相同类型元素的集合
//数组下标默认从0开始
//int main()
//{
//	int arr[10] = {0,1,2,3,4,5,6,7,8,9};  //定义存放10个元素的数组
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//
//	//printf("%d\n", arr[4]);
//	//char ch[10];
//	//float fl[10];
//	return 0;
//}


//操作符
//int main()
//{
//	//算数操作符 + - * / %
//	int a = 5 % 2;
//	printf("%d\n", a);
//
//	//移位操作符  <<左移  >>右移
//	int b = 1;
//	printf("%d\n", b);
//	//整型1占4个字节=32bit位
//	//00000000000000000000000000000001
//	int c = b << 5;
//	printf("%d\n", c);
//	return 0;
//}

//位操作 - 二进制位操作  按位操作时0为假，1为真
// &按位与    一假则假
// |按位或    一真为真
// ^按位异或  对应的二进制位相同则为0，对应的二进制相异则为1
//int main()
//{
//	int a = 3;		//011
//	int b = 5;		//101
//	int c = a & b;	
//	int d = a | b;
//	int e = a ^ b;
//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("%d\n", e);
//	return 0;
//}

//赋值运算符 
//int main()
//{
//	//复合赋值符 =  +=  -=  *=  /=  &=  ^=  |=  >>=  <<=
//	int a = 10;
//	a = 20; // =是赋值  ==是判断是否相等
//	a = +10;//1
//	a += 10;//2
//	a = a - 20;
//	a -= 20;
//	a = a & 2;
//	a &= 2;
//	return 0;
//}

//单目操作符
//双目操作符
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//a + b; //双目操作符
//
//	//c语言中我们用 0 1 表示真假
//	//int a = 0;
//	int a = -2;		// - 负值
//	int b = -a;
//	int c = +3;		// + 正值
//	printf("%d\n", a);
//	printf("%d\n", !a);  // !逻辑反操作
//	printf("%d\n", b);
//	printf("%d\n", c);
//
//	// sizeof 操作数的类型长度（以字节为单位）
//	int d = 5;
//	printf("%d\n", sizeof(d)); //sizeof 计算的是变量/类型所占空间的大小，单位是字节
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof d);
//
//	int arr[10] = { 0 }; //10个整型元素的数组
//	int sz = 0;
//	//10*sizeof(int) = 40
//	printf("%d\n", sizeof(arr));
//	//计算数组的元素个数
//	//个数 = 数组总大小/每个元素的大小
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//
//	// ~ 对一个数的二进制位按位取反
//	int e = 0;
//	int f = ~e;
//	//0 在二进制中的表示
//	//00000000000000000000000000000000
//	// 
//	// 只要是整数，内存中存储的都是二进制的补码
//	// 正数--原码，反码，补码 相同 
//	//原码		---->			反码		---->			补码
//	//直接按照正负			原码的符号位变					反码+1
//	//写出的二进制序列		其他位取反得到
//	//负数在内存中存储的时候，存储的是二进制的补码
//	//11111111111111111111111111111111  （补码）
//	//11111111111111111111111111111110   (补码-1 后是反码）
//	//10000000000000000000000000000001   （反码首位不变，后面的取反是源码）
//	printf("%d\n", e);
//	printf("%d\n", f);//使用的，打印的是这个数的源码
//
//	// 前置++、后置++  前置--、后置--
//	int g = 10;
//	int h = g++;  //后置++，先赋值在++
//	int i = ++g;  //前置++，先++在赋值
//	printf("g = %d h = %d i = %d \n", g, h, i); //12 10 12
//	int j = g--;
//	int k = --g;
//	printf("j = %d k = %d \n", j, k); //12 10
//
//	//（类型）强制类型转换
//	int l = (int)3.14;
//
//	//关系操作符 >  >=  <  <=  !=(用于测试“不等于”)  ==(用于测试“相等”) 
//	
//	//逻辑操作符 &&(逻辑与)  ||(逻辑或)
//	//真 - 非0
//	//假 - 0
//	int m = 3;
//	int n = 5;
//	int q = 0;
//	int o = m && n;  //都真才真，一真为假
//	int p = m || q;  //一真为真，都假为假
//	printf("o = %d\n", o);
//	printf("p = %d\n", p);
//
//	//条件操作符  
//	//exp1 ? exp2 : exp3
//	//表达式1(exp1)结果为真，则运行表达式2(exp2),同时表达式2的结果是整个表达式的结果;
//	//表达式1(exp1)结果为假，则运行表达式3(exp3),同时表达式3的结果是整个表达式的结果;
//	int a1 = 10;
//	int b1 = 20;
//	int max = 0;
//	max = (a1 > b1 ? a1 : b1); //  条件操作符 / 三目操作符
//	printf("max = %d\n", max);
//
//	//逗号表达式 exp1,exp2,exp3....expN
//
//	//下标引用、函数调用和结构成员 []  () . ->
//	int arr2[10] = { 0 };
//	arr2[4];  //[] - 下标引用操作符
//			  //() - 函数调用操作符
//	return 0;
//}


//void test()
//{
//	static int a = 1;  //加上static后，变量 a 就变成了静态的局部变量
//	a++;
//	printf("a = %d\n", a);
//}
//
//int main()
//{
//	//常见关键字
//	//auto  break  case  char  const  conyiune  default  do  double  else  enum  extern
//	//float  for  goto  if  int  long  register  return  short  signed(有符号的）  sizeof  static  
//	//struct(结构体关键字)  switch  typedef  union(联合体/共用体)  unsigned(无符号的)  void  volatile  while
//
//	//定义变量名不能和关键字重名
//	//register int a2 = 10;  //建议把a2定义成寄存器变量
//
//	////typedef - 类型定义 -  类型重定义
//	//typedef unsigned int u_int;
//	//unsigned int num11 = 20;
//	//u_int num12 = 20;
//
//	//static - 修饰局部变量
//	//当static修饰局部变量时，局部变量的生命周期边长
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	//static - 修饰全局变量
//	//当static修饰全局变量时，全局变量的作用域被改变。让静态的全局变量只能在自己所在的源文件内部使用
//	//extern - 声明外部符号
//	extern int g_val;
//	printf("%d\n", g_val);
//
//	//static修饰函数
//	//static修饰函数时，同样改变了函数的链接属性
//	//声明外部函数
//	extern int Add(int, int);
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}


//#define 定义常量和宏
//定义标识符常量
//#define MAX 100;
//
////函数解决
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
////定义宏 - 带参数
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	//函数解决
//	int max =  Max(a, b);
//	printf("%d\n", max);
//	//宏解决
//	max = MAX(a, b);
//	//max = (a>b?a:b);
//	printf("%d\n", max);
//	return 0;
//}


//指针
// 指针大小在32位平台是4个字节，64位平台上是8个字节。
//int main()
//{
//	int a = 10;   //申请4个字节空间
//	// & 取地址符
//	int* p = &a;
//	printf("%p\n", p);
//	*p = 20; //解引用操作符 
//	printf("%d\n", p);
//	//有一种变量是用来存放地址的 - 指针变量  int*
//	printf("%p\n", &a);
//	return 0;
//}
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%d\n", sizeof(pc));
//	*pc = 'a';
//	printf("%c\n", pc);
//	return 0;
//}











