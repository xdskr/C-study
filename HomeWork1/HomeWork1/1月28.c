#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/*
1��ջ�����������ʱ����

C���򳣼��Ĵ�����಻��������C��
A.�������
B.���Ӵ���
C.ջ���
D.����ʱ����


2��ctrl+F5 �ǿ�ʼִ�в����ԣ�F5����������

����VS���Կ�ݼ�˵��������ǣ���A��
A.F5-�ǿ�ʼִ�У�������
B.F10-������̵��ԣ��������������뺯��
C.F11-���������ԣ����Թ۲���Ե�ÿ��ϸ��
D.F9�����öϵ��ȡ���ϵ�


3��release�汾���������κε���

����Debug��Release������˵��������ǣ���D��
A.Debug����Ϊ���԰汾�����������bug�İ汾
B.Release����Ϊ�����汾��������Ա���Եľ���Release�汾
C.Debug�汾����������Ϣ�������Ż���
D.Release�汾Ҳ���Ե��ԣ�ֻ���������Ż��������С�������ٶ���Ч������


4��p��ֵ�����޸ģ���const���ε���p

��������һ����ʽ������һ��ָ��char���ͱ�����ָ��p��p��ֵ�����޸ģ���pָ��ı���ֵ���޸ģ�(C)
A.const char *p
B.char const *p
C.char*const p
D.const char *const p


5��

���¹���ָ���˵��,��ȷ����(C)
A.int *const p��int const *p�ȼ�
B.const int *p��int *const p�ȼ�
C.const int *p��int const *p�ȼ�
D.int *p[10]��int (*p)[10]�ȼ�



6�����ͳ���Ϊʲô��ѭ����
����i������arr���Ǿֲ��������ֲ�����������ջ�У���ջ���ڴ����������ʹ�øߵ�ַ����ʹ�õ͵�ַ
�������ȴ���i���ٴ���arr������i�ĵ�ַ����arr�ĵ�ַ�����������±���������ڴ����ɵ͵��ߵģ����������±��ʵ���Խ�磬���п��ܵ�i���ڴ��ַ��ȥ��
���޸�i��Ȼ������ѭ��

#include <stdio.h>
int main()
{
	int i = 0;
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	for(i=0; i<=12; i++)
	{
	arr[i] = 0;
	printf("hello bit\n");
	}
	return 0;
}

*/

//8��strcpy������ʵ��
/*
void my_strcopy(char* dest, const char* src)
{
	while (*dest++ = *src++)
		;
}
int main()
{
	char arr[] = "I like beijing.";
	char arr2[100] = { 0 };

	my_strcopy(arr2, arr);

	printf("%s\n", arr2);
	printf("%s\n", arr);

	return 0;
}
*/



//9��
/*
��������ż��˳�򣺵�������ʹ����ȫ����λ��ż��ǰ�档

��Ŀ��
����һ���������飬ʵ��һ��������
�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�5
����ż��λ������ĺ�벿�֡�
*/

//��һ���˷ѿռ䣬���´���һ�����飻���Ҳ�֪���´���������Ĵ�СӦ����ô����
/*
int main()
{
	int arr[10] = { 1, 8, 9, 7, 5, 6, 2, 4, 3, 10 };
	int arr2[10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2)
		{
			arr2[j] = arr[i];
			j++;
		}
	}

	for (i = 0; i < 10; i++)
	{
		if (!(arr[i] % 2))
		{
			arr2[j] = arr[i];
			j++;
		}
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr2[i]);
	}

	return 0;
}
*/

//������һֱ�ң�ÿ�ҵ�һ�������ͻ���λ�á�


//��������������ֻ����һ��
/*
void move_num(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;

	while (left < right)
	{
		//��ǰ�����һ��ż��
		//��ֹȫ��ż����������leftһ��ҪС��right
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}

		//�Ӻ���ǰ��һ������
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}

		//����
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}

}
int main()
{
	int arr[10] = { 1, 8, 9, 7, 5, 6, 2, 4, 3, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move_num(arr, sz);

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr2[i]);
	}

	return 0;
}
*/