#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <windows.h>


//����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
/*
дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��

���磬����DigitSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19

���룺1729�������19
*/
//1729
//9 + D(172)
//9 + 2 + D(17)
//9 + 2 + 7 + 1
/*
int DigitSum(int k)
{
	if (k > 9)
		return(k % 10) + DigitSum(k / 10);
	else
		return k;
}

int main()
{
	int i = 0;
	scanf("%d", &i);

	int ret = DigitSum(i);
	printf("%d\n", ret);

	return 0;
}
*/

/*
��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
ʵ�֣��������ַ����е��ַ��������У����������ӡ��
Ҫ�󣺲���ʹ��C�������е��ַ�������������
���磺���룺"abcdef"---�����"fedcba"
*/
//��һ���ǵݹ�
/*
void reverse_string(char arr[],int sz)
{
	int left = 0;
	int right = sz;
	while (left <= right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;

		left++;
		right--;
	}
}

int main()
{
	char arr[] = "abcdef";
	int sz = sizeof(arr) / sizeof(arr[0]) - 2;
	
	printf("%s\n",arr);
	reverse_string(arr,sz);
	printf("%s\n", arr);

	return 0;
}
*/
//�������ݹ�
/*
void reverse_string(char* arr)
{
	int len = strlen(arr);
	char tmp = *arr;
	*arr = *(arr + len - 1);

	*(arr + len - 1) = '\0';
	if (strlen(arr + 1) >= 2)
		reverse_string(arr + 1);

	*(arr + len - 1) = tmp;
}

int main()
{
	char arr[] = "abcdef";
	printf("%s\n", arr);
	reverse_string(arr);
	printf("%s\n", arr);

	return 0;
}
*/


//strlen��ģ�⣨�ݹ�ʵ�֣�
//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//��һ���ǵݹ�
/*
int My_Strlen(char arr[])
{
	int i = 0;
	int count = 0;
	while (1)
	{
		if (arr[i] != '\0'){
			count++;
			i++;
		}
		else
			break;
	}
	return count;

}

int main()
{
	char arr[] = "abcdef";

	int ret = My_Strlen(arr);
	printf("%d\n", ret);

	return 0;
}
*/
//�������ݹ�
/*
int My_Strlen(char arr[])
{
	if (*arr == '\0')
		return 0;
	else
		return 1 + My_Strlen(arr + 1);
}

int main()
{
	char arr[] = "abcdef";

	int ret = My_Strlen(arr);
	printf("%d\n", ret);

	return 0;
}
*/