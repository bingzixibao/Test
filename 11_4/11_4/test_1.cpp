// C���Կ�ƪ
// �˺ͼ��������������

// ��һ��C���Գ���
//����һ��stdio.h���ļ�
//std-��׼ stendard input output
//#include<stdio.h>
//int ������
//main ǰ���int��ʾmain�������÷���һ������ֵ 
//int main()    //������-��������
//{
//	//������ɴ����д
//	//����-print function  -printf-��ӡ����
//
//	printf("hello word \n");
//	return 0;  //����0
//}

//#include<stdio.h>
//��������
//char		�ַ���������
//short		������
//int		����
//long		������
//long long ����������
//float		�����ȸ�����
//double	˫���ȸ�����

//%d - ��ӡ����
//%c - ��ӡ�ַ�
//%f - ��ӡ��������-��С��
//%p - �Ե�ַ����ʽ��ӡ
//%x - ��ӡ16��������

//char �ַ�����
//int main()
//{
//	char ch = 'A';
//	printf("%c\n",ch); //%c--��ӡ�ַ���ʽ������
//
//	//short int -������
//	//int ����
//	int age = 20;
//	printf("%d\n", age);   //%d--��ӡ����ʮ��������
//
//	//long ������
//	long num = 100;
//	printf("%d\n", num);
//
//	//float �����ȸ�����
//	float f = 5.0;
//	printf("%f\n", f);
//
//	//double ˫���ȸ�����
//	double d = 3.14;
//	printf("%lf\n", d);
//
//	//�����������ֽڴ�С
//	printf("%d\n", sizeof(char));		// 1
//	printf("%d\n", sizeof(short));		// 2
//	printf("%d\n", sizeof(int));		// 4 
//	printf("%d\n", sizeof(long));		// 4/8
//	printf("%d\n", sizeof(long long));	// 8
//	printf("%d\n", sizeof(float));		// 4
//	printf("%d\n",sizeof(double));		// 8
//
//	//������еĵ�λ 
//	//bit-����λ  һ������λֻ���һ�� 1 �� 0
//	//byte-�ֽ�  һ���ֽ� = 8������λ�Ĵ�С
//	//kb 1kb = 1024byte 
//	//mb 1mb = 1024kb
//	//gb 1gb = 1024mb
//	//tb 1tb = 1024gb
//	//pb 1pb = 1024tb
//	return 0;
//}


//#define _CRT_SECURE_NO_WERNINGS 
//#include <stdio.h>
////����������
//int main()
//{
//	//����2�����ĺ�
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//
//	//��������-ʹ�����뺯��scanf
//	scanf_s("%d%d", &num1, &num2); //ȡ��ַ��&
//	//C�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}





//int num2 = 20;		//ȫ�ֱ���-�����ڴ����{}֮��ı���
//int main()
//{
//	int num1 = 10;	//�ֲ�����-�����ڴ����{}֮�ڵı���
//	//�ֲ�������ȫ�ֱ��������ֲ�����ͬ
//	//�������ͬ�������ֲ���������
//	return 0;
//}

//int main()
//{
//	short age = 20;			//���ڴ�����2���ֽ� =16bitλ���������20
//	float weight = 95.6f;	//���ڴ�����4���ֽڣ����С��
//	return 0;
//}



//���������������������
//�ֲ��������������Ǳ������ڵľֲ���Χ
//ȫ�ֱ���������������������

//�ֲ����������������ǣ������������������ڿ�ʼ�����������������ڽ�����
//ȫ�ֱ��������������ǣ�����������������ڡ�
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