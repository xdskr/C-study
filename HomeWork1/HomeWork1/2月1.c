#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/*
//1��
�������"ָ��"����������ȷ���ǣ��� ��

A.��ʹ��free�ͷŵ�һ��ָ�����ݺ�,ָ�������ֵ����ΪNULL
B.32λϵͳ���κ�����ָ��ĳ��ȶ���4���ֽ�
C.ָ�������������������ָ��ʵ��ָ�����ݵ���������
D.Ұָ����ָ��δ��������Ѿ��ͷŵ��ڴ��ַ

A��free��Ϊ��̬���ٿռ䣬malloc/free
�ڴ��Ϊ��ջ������������̬��
�����漰��malloc/free��calloc/realloc

�ͷſռ�free�������ָ����Ϊ��NULL������Ҫ�ֶ��ÿ�

//2��
�����������������ȷ���ǣ���C��
char* p = "hello bit";

A.���ַ���hello bit�����p������
B.���ַ���hello bit�ĵ�һ���ַ������p������
C.���ַ���hello bit�ĵ�һ���ַ��ĵ�ַ�����p������
D.*p�ȼ���hello bit



//3��
��������ָ���������ȷ���ǣ���C��

A.����ָ����һ������
B.����ָ����һ�ִ�������ָ��
C.����ָ����һ��ָ��
D.ָ��������һ��ָ�������ָ��

A������ָ����һ��ָ�룬ָ�������ָ�룻ָ��������һ�����飬�������ָ�������

//4��
�����ĸ�������ָ�루C��

A.int** arr[10]		- ��������ָ������
B.int (*arr[10])	- arr�Ǹ�����
C.char *(*arr)[10]	- arr�ȸ�*��ϣ�˵��arr�Ǹ�ָ�룬Ȼ���arr�����ϣ�˵��arr�Ǹ�����ָ�룬������ÿ��Ԫ����char*����
D.char(*)arr[10]	- �ȼ��ڣ�char* arr[10] - arr�Ǹ����飬ָ������


//5��
�����ĸ������Ǵ���ģ�D

#include <stdio.h>
int main()
{
	int *p = NULL;
	int arr[10] = {0};
	return 0;
}

A.p = arr;
B.int (*ptr)[10] = &arr;
C.p = &arr[0];
D.p = &arr;

p��һ������ָ�룬&arrȡ�����������ַ�������������ϵĲ���


//6��
������������������������ȷ���ǣ�A��

int main()
{
	int arr[10] = {0};
	return 0;
}

A.������arr��&arr��һ����
B.sizeof(arr)��arr��ʾ��������
C.&arr��arr��ʾ��������
D.����sizeof(arr)��&arr�е��������������ط����ֵ�������arr������������Ԫ�صĵ�ַ��

A��arr��&arr�ǲ�һ���ģ�����ֵ��һ���ģ�������ȫ��һ��


//7��
��ζ���һ��int���͵�ָ�����飬����Ԫ�ظ���Ϊ10����(B)

A.int a[10]
B.int (*a)[10]
C.int *a[10];
D.int (*a[10])(int);


//8��
��������ִ�н����

#include <stdio.h>
int main()
{
	char str1[] = "hello bit.";
	char str2[] = "hello bit.";
	char *str3 = "hello bit.";
	char *str4 = "hello bit.";
	if(str1 == str2)
		printf("str1 and str2 are same\n");
	else
		printf("str1 and str2 are not same\n");

	if(str3 == str4)
		printf("str3 and str4 are same\n");
	else
		printf("str3 and str4 are not same\n");

return 0;
}
A.str1 and str2 are same str3 and str4 are same
B.str1 and str2 are same str3 and str4 are not same
C.str1 and str2 are not same str3 and str4 are same
D.str1 and str2 are not same str3 and str4 are not same


str3��str4�ǳ����ַ���
*/