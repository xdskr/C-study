#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>



/*
������С�������� 
������A��������B ����С��������ָ �ܱ�A��B��������С��������ֵ�����һ���㷨��������A��B����С�������� 
������������������������A��B��
������������A��B����С��������
ʾ����											
���룺5 7
�����35
*/


//�Լ�д��ע����������Ӧ��Ϊsize_t
/*
int find_max(int x, int y)
{
	return (x >= y ? x : y);
}

int find_mul(int x, int y)
{
	int max = find_max(x, y);
	//������������������ǿ��Եõ�x��y�����ֵ

	if ((max % x == 0) && (max % y == 0))
		return max;
	else
	{	
		while (1)
		{
			max++;
			if ((max % x == 0) && (max % y == 0))
				break;
		}
		return max;
	}
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	int ret = find_mul(a, b);
	printf("%d\n", ret);

	return 0;
}
*/



//��ʦд��
/*
int main()
{
	int a = 0;
	int b = 0;
	scanf("%%d %d", &a, &b);

	//����min���������趨����С������
	int min = a > b ? a : b;

	while (min % a != 0 || min % b != 0)
	{
		min++;
	}

	printf("%d\n", min);

	return 0;
}
*/


//����������
//1�����Լ����
/*
���a��b�����Լ��Ϊc��
��ôa��b����С������Ϊ��a*b/c
*/



//��������
/*
int main()
{
	int a = 0;
	int b = 0;
	scanf("%%d %d", &a, &b);

	//����min���������趨����С������
	int i = 1;

	//���Ǽ���i�Ѿ���������a�ˣ�i��С����1��Ȼ��i�Ƿ��������b
	while (a*i % b != 0)
	{
		i++;
	}

	printf("%d\n", a*i);

	return 0;
}
*/