#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//scanf��C�����ṩ��
//scanf_s���Ǳ�׼C�����ṩ�ģ���VS�������ṩ��
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

//����
//int main()
//{
//	//�����������£�
//	/*1.���泣��
//	3;
//	100;
//	3.14;
//	.....*/
// 
//	//2.const���εĳ�����
//	//const - ������ - ���κ�ı��������ٸ���
//	const num = 4;
//	printf("%d\n", num);
//		return 0;
//}

//3.#define ����ı�ʶ������
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}

//4.ö�ٳ���
//ö�� - һһ�о�
//���磺�Ա���ԭɫ������

//ö�ٹؼ� - enum
//enum Sex {     //ö�ٳ���
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

//�ַ���+ת���ַ�+ע��
//int main()
//{
//	char arr1[] = "abc";  //����
//	//"abc" -- 'a','b','c','\0' -- '\0'���ַ����Ľ�����־
//	//ע���ַ����Ľ�����־��һ��\0��ת���ַ����ڼ����ַ������ȵ�ʱ��\0�ǽ�����־���������ַ������ݡ�
//	char arr2[] = { 'a','b','c',0};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c','\0'};
//	printf("%d\n", strlen(arr1));    //strlen - string length - �����ַ�������
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//ת���ַ� - ת��ԭ������˼
//int main()
//{
//	//printf("abc");
//	//printf("abcn\n");   // \n����  \tˮƽ�Ʊ��
//	//printf("abc\n");
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	return 0;
//}
//#include<string.h>
//int main()
//{
//								  // \ddd ddd��ʾ1-3���˽��Ƶ����� 0-7
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	printf("%c\n", '\132');
//	// \32 -- 32�Ǹ��˽�������
//	// 32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ������
//	// 32 -- > 10���Ƶ��� 26 - > ��ΪASCII��ֵ������ַ�
//
//	 // \xdd dd��ʾ2��ʮ�����Ƶ�����
//	printf("%c\n", '\x61');
//
//	return 0;
//}



//ѡ�����
//int main()
//{
//	int input = 0;
//	printf("�����ѧ\n");
//	printf("��Ҫ�ú�ѧϰô?(1/0)>��");
//	scanf("%d", &input);	// 1/0
//	if (input == 1)
//		printf("�������offer\n");
//	else
//		printf("�ؼ�������\n");
//	return 0;
//}


//ѭ�����
//int main()
//{
//	int line = 0;
//	printf("�����ѧ\n");
//	while (line < 2000)
//		{
//			printf("��һ�д���:%d \n",line);
//			line++;
//		}
//	if (line>=2000)
//		printf("�������offer");
//	return 0;
//}


//����
//�Զ��庯��
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


//���� - һ����ͬ����Ԫ�صļ���
//�����±�Ĭ�ϴ�0��ʼ
//int main()
//{
//	int arr[10] = {0,1,2,3,4,5,6,7,8,9};  //������10��Ԫ�ص�����
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


//������
//int main()
//{
//	//���������� + - * / %
//	int a = 5 % 2;
//	printf("%d\n", a);
//
//	//��λ������  <<����  >>����
//	int b = 1;
//	printf("%d\n", b);
//	//����1ռ4���ֽ�=32bitλ
//	//00000000000000000000000000000001
//	int c = b << 5;
//	printf("%d\n", c);
//	return 0;
//}

//λ���� - ������λ����  ��λ����ʱ0Ϊ�٣�1Ϊ��
// &��λ��    һ�����
// |��λ��    һ��Ϊ��
// ^��λ���  ��Ӧ�Ķ�����λ��ͬ��Ϊ0����Ӧ�Ķ�����������Ϊ1
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

//��ֵ����� 
//int main()
//{
//	//���ϸ�ֵ�� =  +=  -=  *=  /=  &=  ^=  |=  >>=  <<=
//	int a = 10;
//	a = 20; // =�Ǹ�ֵ  ==���ж��Ƿ����
//	a = +10;//1
//	a += 10;//2
//	a = a - 20;
//	a -= 20;
//	a = a & 2;
//	a &= 2;
//	return 0;
//}

//��Ŀ������
//˫Ŀ������
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//a + b; //˫Ŀ������
//
//	//c������������ 0 1 ��ʾ���
//	//int a = 0;
//	int a = -2;		// - ��ֵ
//	int b = -a;
//	int c = +3;		// + ��ֵ
//	printf("%d\n", a);
//	printf("%d\n", !a);  // !�߼�������
//	printf("%d\n", b);
//	printf("%d\n", c);
//
//	// sizeof �����������ͳ��ȣ����ֽ�Ϊ��λ��
//	int d = 5;
//	printf("%d\n", sizeof(d)); //sizeof ������Ǳ���/������ռ�ռ�Ĵ�С����λ���ֽ�
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof d);
//
//	int arr[10] = { 0 }; //10������Ԫ�ص�����
//	int sz = 0;
//	//10*sizeof(int) = 40
//	printf("%d\n", sizeof(arr));
//	//���������Ԫ�ظ���
//	//���� = �����ܴ�С/ÿ��Ԫ�صĴ�С
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//
//	// ~ ��һ�����Ķ�����λ��λȡ��
//	int e = 0;
//	int f = ~e;
//	//0 �ڶ������еı�ʾ
//	//00000000000000000000000000000000
//	// 
//	// ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ���
//	// ����--ԭ�룬���룬���� ��ͬ 
//	//ԭ��		---->			����		---->			����
//	//ֱ�Ӱ�������			ԭ��ķ���λ��					����+1
//	//д���Ķ���������		����λȡ���õ�
//	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//	//11111111111111111111111111111111  �����룩
//	//11111111111111111111111111111110   (����-1 ���Ƿ��룩
//	//10000000000000000000000000000001   ��������λ���䣬�����ȡ����Դ�룩
//	printf("%d\n", e);
//	printf("%d\n", f);//ʹ�õģ���ӡ�����������Դ��
//
//	// ǰ��++������++  ǰ��--������--
//	int g = 10;
//	int h = g++;  //����++���ȸ�ֵ��++
//	int i = ++g;  //ǰ��++����++�ڸ�ֵ
//	printf("g = %d h = %d i = %d \n", g, h, i); //12 10 12
//	int j = g--;
//	int k = --g;
//	printf("j = %d k = %d \n", j, k); //12 10
//
//	//�����ͣ�ǿ������ת��
//	int l = (int)3.14;
//
//	//��ϵ������ >  >=  <  <=  !=(���ڲ��ԡ������ڡ�)  ==(���ڲ��ԡ���ȡ�) 
//	
//	//�߼������� &&(�߼���)  ||(�߼���)
//	//�� - ��0
//	//�� - 0
//	int m = 3;
//	int n = 5;
//	int q = 0;
//	int o = m && n;  //������棬һ��Ϊ��
//	int p = m || q;  //һ��Ϊ�棬����Ϊ��
//	printf("o = %d\n", o);
//	printf("p = %d\n", p);
//
//	//����������  
//	//exp1 ? exp2 : exp3
//	//���ʽ1(exp1)���Ϊ�棬�����б��ʽ2(exp2),ͬʱ���ʽ2�Ľ�����������ʽ�Ľ��;
//	//���ʽ1(exp1)���Ϊ�٣������б��ʽ3(exp3),ͬʱ���ʽ3�Ľ�����������ʽ�Ľ��;
//	int a1 = 10;
//	int b1 = 20;
//	int max = 0;
//	max = (a1 > b1 ? a1 : b1); //  ���������� / ��Ŀ������
//	printf("max = %d\n", max);
//
//	//���ű��ʽ exp1,exp2,exp3....expN
//
//	//�±����á��������úͽṹ��Ա []  () . ->
//	int arr2[10] = { 0 };
//	arr2[4];  //[] - �±����ò�����
//			  //() - �������ò�����
//	return 0;
//}


//void test()
//{
//	static int a = 1;  //����static�󣬱��� a �ͱ���˾�̬�ľֲ�����
//	a++;
//	printf("a = %d\n", a);
//}
//
//int main()
//{
//	//�����ؼ���
//	//auto  break  case  char  const  conyiune  default  do  double  else  enum  extern
//	//float  for  goto  if  int  long  register  return  short  signed(�з��ŵģ�  sizeof  static  
//	//struct(�ṹ��ؼ���)  switch  typedef  union(������/������)  unsigned(�޷��ŵ�)  void  volatile  while
//
//	//������������ܺ͹ؼ�������
//	//register int a2 = 10;  //�����a2����ɼĴ�������
//
//	////typedef - ���Ͷ��� -  �����ض���
//	//typedef unsigned int u_int;
//	//unsigned int num11 = 20;
//	//u_int num12 = 20;
//
//	//static - ���ξֲ�����
//	//��static���ξֲ�����ʱ���ֲ��������������ڱ߳�
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	//static - ����ȫ�ֱ���
//	//��static����ȫ�ֱ���ʱ��ȫ�ֱ����������򱻸ı䡣�þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//	//extern - �����ⲿ����
//	extern int g_val;
//	printf("%d\n", g_val);
//
//	//static���κ���
//	//static���κ���ʱ��ͬ���ı��˺�������������
//	//�����ⲿ����
//	extern int Add(int, int);
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}


//#define ���峣���ͺ�
//�����ʶ������
//#define MAX 100;
//
////�������
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
////����� - ������
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	//�������
//	int max =  Max(a, b);
//	printf("%d\n", max);
//	//����
//	max = MAX(a, b);
//	//max = (a>b?a:b);
//	printf("%d\n", max);
//	return 0;
//}


//ָ��
// ָ���С��32λƽ̨��4���ֽڣ�64λƽ̨����8���ֽڡ�
//int main()
//{
//	int a = 10;   //����4���ֽڿռ�
//	// & ȡ��ַ��
//	int* p = &a;
//	printf("%p\n", p);
//	*p = 20; //�����ò����� 
//	printf("%d\n", p);
//	//��һ�ֱ�����������ŵ�ַ�� - ָ�����  int*
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











