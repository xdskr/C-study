#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

//�����ݹ�

/*
1��
��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
ʵ�֣��������ַ����е��ַ��������У����������ӡ��
Ҫ�󣺲���ʹ��C�������е��ַ�������������
char arr[] = "abcdef";
����֮����������ݱ�ɣ�fedcba
*/

//��һ���ǵݹ�
/*
int my_strlen(char * string)
{
	assert(string != NULL);
	int count = 0;
	while (*string != '\0')
	{
		count++;
		string++;
	}
	return count;
}
void reverse_string(char * string)
{
	int len = my_strlen(string);
	char * left = string;
	char * right = string + len - 1;

	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
*/

//�������ݹ�
/*
int my_strlen(char * string)
{
	assert(string != NULL);
	int count = 0;
	while (*string != '\0')
	{
		count++;
		string++;
	}
	return count;
}
char reverse_string(char * string)
{
	int len = my_strlen(string);
	char tmp = *string;
	*string = *(string + len - 1);
	*(string + len - 1) = '\0';
	if (my_strlen(string + 1) >= 2)
		reverse_string(string + 1);

	*(string + len - 1) = tmp;
}


int main()
{
	char arr[] = "abcdefgh";
	printf("%s\n", arr);
	reverse_string(arr);
	printf("%s\n", arr);

	return 0;
}
*/



/*
2��
дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
���磬����DigitSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19
���룺1729�������19
*/

/*
int DigitSum(unsigned int n)
{
	if (n > 9)
		return DigitSum(n / 10) + n % 10;
	else
		return n;
}

int main()
{
	//size_t num = 0;
	//������д��һ��
	unsigned int num = 0;
	scanf("%u",&num);
	unsigned int sum = DigitSum(num);
	printf("%u\n",sum);

	return 0;
}
*/


/*
3��
��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
*/

/*
double Pow(int n,int k)
{
	if (k == 0)
		return 1;
	else if (k > 0)
		return n*Pow(n, k - 1);
	else
		return 1.0 / (Pow(n, -k));
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d",&n,&k);
	double ret = Pow(n,k);
	printf("%lf\n",ret);

	return 0;
}
*/

/*
3��
�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
���磺
���룺5  �����5
���룺10�� �����55
���룺2�� �����1
1 1 2 3 5 8 13 21 34 55 89
*/

//��һ���ǵݹ�
/*
int my_function(int m)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (m > 2)
	{
		c = a + b;
		a = b;
		b = c;
		m--;
	}
	return c;
}
*/
//�������ݹ�
/*
int my_function(int m)
{
	if (m > 0 && m <= 2)
		return 1;
	else if (m < 0){
		printf("������������������������룺");
		return -1;
	}
	else
		return my_function(m - 1) + my_function(m - 2);
		
}

int main()
{
	int i = 0;
	scanf("%d",&i);
	int ret = my_function(i);
	printf("%d\n",ret);

	return 0;
}
*/