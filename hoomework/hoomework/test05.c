#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <windows.h>

//ʵ��һ�������������ð������
/*
void Bubble_Sore(int arr[], int sz)
{
	int i = 0;//ȷ�����������
	int flag = 1;//�ٶ��Ѿ�����������
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - i- 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
			break;
	}
}

int main()
{
	int arr[] = { 7, 5, 8, 10, 1, 6, 2, 9, 3, 4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;

	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	Bubble_Sore(arr, sz);
	printf("\n");
	
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
*/

/*
����һ���������飬��ɶ�����Ĳ���
ʵ�ֺ���init() ��ʼ������Ϊȫ0
ʵ��print()  ��ӡ�����ÿ��Ԫ��
ʵ��reverse()  �����������Ԫ�ص����á�
Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
*/
/*
void init(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

void print(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void init2(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = i;
	}
}

void reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz -1;
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
	int arr[10];
	int sz = sizeof(arr) / sizeof(arr[0]);

	//�����ʼ��
	init(arr, sz);

	//��ӡ����
	print(arr, sz);

	init2(arr, sz);
	print(arr, sz);

	//��������
	reverse(arr, sz);
	print(arr, sz);

	return 0;
}
*/

//������A�е����ݺ�����B�е����ݽ��н�����������һ����
/*
void init1(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 1;
	}
}

void init2(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 2;
	}
}


void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void Reverse_Arrr1_2(int arr1[], int arr2[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
}

int main()
{
	int arr1[10];
	int arr2[10];
	int sz = sizeof(arr1) / sizeof(arr1[0]);

	init1(arr1, sz);
	init2(arr2, sz);

	print(arr1, sz);
	print(arr2, sz);

	Reverse_Arrr1_2(arr1, arr2, sz);

	print(arr1, sz);
	print(arr2, sz);

}
*/

