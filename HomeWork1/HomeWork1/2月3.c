#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

/*
//1��
����test���������ȷ���ǣ���B��D��

char* arr[5] = {"hello", "bit"};
test(arr);

A.void test(char* arr);
B.void test(char** arr);
C.void test(char arr[5]);
D.void test(char* arr[5]);

arr��һ�����飬ÿһ�����������ŵ���char*���͵�Ԫ�أ�ǰ�������ַ�����Ԫ�صĵ�ַ������Ĭ��ֵΪ0


//2��
�������Ľ���ǣ���A��

int main()
{
int aa[2][5] = {10,9,8,7,6,5,4,3,2,1};
int *ptr1 = (int *)(&aa + 1);
int *ptr2 = (int *)(*(aa + 1));
printf( "%d,%d", *(ptr1 - 1), *(ptr2 - 1));
return 0;
}

A.1, 6
B.10, 5
C.10, 1
D.1, 5



//3��
���������print_arr������������ĸ�����ȷ�ģ���C��

int arr[3][5] = {1,2,3,4,5,6,7,8,9,10};
print_arr(arr, 3, 5);

A.void print_arr(int arr[][],int row, int col);
B.void print_arr(int* arr, int row, int col);
C.void print_arr(int (*arr)[5], int row, int col);
D.void print_arr(int (*arr)[3], int row, int col);



//4�� 
�������Ľ���ǣ���B��

int main()
{
	int a[5] = {5, 4, 3, 2, 1};
	int *ptr = (int *)(&a + 1);
	printf( "%d,%d", *(a + 1), *(ptr - 1));
	return 0;
}

A.5, 1
B.4, 1
C.4, 2
D.5, 2
*/




/*
�ַ�����ת�����дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����

���磺����s1 =AABCD��s2 = BCDAA������1
����s1=abcd��s2=ACBD������0.


AABCD����һ���ַ��õ�ABCDA
AABCD���������ַ��õ�BCDAA
AABCD����һ���ַ��õ�DAABC
*/

//��һ��
/*
�����ķ���������Ų�������ǿ�����abcdefg������׷��һ��abcdefg
����abcdefgabcdefg ����ַ������е�����������ڷ���������ÿ���ƶ��������
��ʱ��ֻ��Ҫ�ж��Ǹ��ַ����Ƿ������abcdefgabcdefg��Ϳ��ԡ�
*/
/*
void reverse(char* left, char* right)
{
	assert(*left && *right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
char * left_move(char* str, int k)
{
	assert(str != NULL);
	int len = strlen(str);

	reverse(str, str + k - 1);
	reverse(str + k, str + len - 1);
	reverse(str, str + len - 1);

	return str;
}
int is_left_move(char* s1, char*s2)
{
	int len2 = strlen(s2);
	int len1 = strlen(s1);
	if (len1 != len2)
		return 0;

	strncat(s2, s2, len2);
	if (strstr(s2, s1))
		return 1;
	else
		return 0;
}
int main()
{
	char arr1[20] = "abcdefg";
	char arr2[] = "cdefgab";
	if (is_left_move(arr2, arr1))
		printf("Yes!\n");
	else
		printf("No!\n");

	return 0;
}
*/



//������
/*
void reverse(char* left, char* right)
{
	assert(*left && *right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
char * left_move(char* str, int k)
{
	assert(*str != NULL);
	int len = strlen(str);

	reverse(str, str + k - 1);
	reverse(str + k, str + len - 1);
	reverse(str, str + len - 1);

	return str;
}
int is_left_move(char* s1, char*s2)
{
	int len = strlen(s2);
	while (len--)
	{
		left_move(s2, 1);
		if (strcmp(s1, s2) == 0)
			return 1;
	}
	return 0;
}
int main()
{
	char arr1[] = "abcdefg";
	char arr2[] = "cdefgab";
	if (is_left_move(arr2, arr1))
		printf("Yes!\n");
	else
		printf("No!\n");

	return 0;
}
*/








/*
�ַ���������ʵ��һ�����������������ַ����е�k���ַ���

���磺
ABCD����һ���ַ��õ�BCDA
ABCD���������ַ��õ�CDAB
*/

//������Ч
/*
char * left_move(char* str, int k)
{
	assert(*str != NULL);

	int len = strlen(str);

	int j = 0;
	for (j= 0; j < k; j++)
	{
		char tmp = *str;

		//ʣ�µ�len-1���ַ���ǰŲ��
		int i = 0;
		for (i = 0; i < len - 1; i++)
		{
			*(str + i) = *(str + i + 1);
		}
		*(str + len - 1) = tmp;
	}
	return str;
}
*/

//�Ľ���
//abcedf ��������
//ab cdef �ֳ�������ÿһ������
//ba fedc Ȼ��ƴ�ӳ�һ����������
//cdefab
/*
void reverse(char* left, char* right)
{
	assert(*left && *right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
char * left_move(char* str, int k)
{
	assert(*str != NULL);
	int len = strlen(str);

	reverse(str, str + k - 1);
	reverse(str + k, str + len - 1);
	reverse(str, str + len - 1);

	return str;
}

int main()
{
	char arr[] = "abcdefg";
	int k = 0;
	scanf("%d", &k);

	left_move(arr, k);//�����������������Ϊ��cdefgab

	printf("%s\n", arr);

	return 0;
}
*/




/*
���Ͼ�����һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�

Ҫ��ʱ�临�Ӷ�С��O(N);
*/

//�������һ�����Ͼ��������Ͻǵ�Ԫ�أ�������Ҫ�ҵĽ��бȽϣ����С�ڿ���ȥ��һ�У�������ڣ�����ȥ��һ��
//�������˼·�����Ͻǿ��ԣ���ô���½�Ҳ����
//1 2 3
//4 5 6
//7 8 9
/*
int find(int arr[3][3], int k, int r, int c)
{
	int x = 0;
	int y = c - 1;

	while (x < r && y >= 0)
	{
		if (arr[x][y] < k)
			x++;
		else if (arr[x][y] > k)
			y--;
		else
			return 1;
	}

	//����ѭ����Ȼû�ҵ�
	return 0;


}

int main()
{
	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int k = 0;
	scanf("%d", &k);
	int ret = find(arr, k, 3, 3);

	if (1 == ret)
		printf("�ҵ��ˣ�\n");
	else
		printf("û�ҵ���\n");

	return 0;
}
*/
