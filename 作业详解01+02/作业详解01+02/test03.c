#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//1��strlenʵ�֣�ģ��ʵ�ֿ⺯��
/*
int my_strlen(char * str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char str[] = "bi te ren,bi te hun!";
	int ret = my_strlen(str);
	printf("%d\n", ret);

	return 0;
}
*/


//2��strcpyʵ�֣�ģ��ʵ�ֿ⺯��
//int my_strlen(char * str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void my_strcpy(const char * str1,char *str2,int length)
//{
//	int i = 0;
//	for (i = 0; i < length; i++)
//	{
//		*(str2 + i) = *(str1 + i);
//	}
//
//}
//int main()
//{
//	char str1[] = "bi te ren,bi te hun!";
//	char str2[] = " ";
//	int ret = my_strlen(str1);
//	my_strcpy(str1, str2, ret);
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//
//	return 0;
//}


//3��
/*
��������ż��˳�򣺵�������ʹ����ȫ����λ��ż��ǰ�档
��Ŀ��
����һ���������飬ʵ��һ��������
�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
����ż��λ������ĺ�벿�֡�
*/
/*
void revise_odd_even(int *arr,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i+=2)
	{
		*arr = i;
		arr+=2;
	}
	for (i = 1; i < sz; i += 2)
	{
		*(arr+1) = i;
		arr+=2;
	}
}
void print(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr,sz);
	revise_odd_even(arr,sz);
	print(arr,sz);

	return 0;
}
*/