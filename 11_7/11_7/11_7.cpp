#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//ָ��
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
//	//int* p= &a;//p��һ��ָ�������������int*
//	////printf("%p\n", p);
//	//*p = 20; //* ���������ò�����/��ӷ��ʲ�����
//	//printf("a = %d\n", a);
//	return 0;
//}

//�ṹ�� - �ýṹ�����������Ӷ���

//����һ���ṹ������
struct Book
{
	char name[20];//C���Գ������
	short price;//����
};

#include<string.h>
int main() 
{
	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
	struct Book b1 = {"C���Գ������",55};
	strcpy(b1.name,"C++"); //�ַ������� - �⺯��

	struct Book* pb = &b1;

	//����pb��ӡ�����ͼ۸�

	// -> ������ �ṹ��ָ��
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);

	// . ������  �ṹ�����
	/*printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);*/

	/*printf("������%s\n", b1.name);
	printf("�۸�%d\n", b1.price);
	b1.price = 15;
	printf("�޸ĺ�ļ۸�%d\n", b1.price);*/
	return 0;
}

