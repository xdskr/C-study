#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
1��
���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
��������:1999 2299
�������:7
*/

//��һ��
/*
int count_differ_bit(int num1, int num2)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (((num1 >> i) & 1) != ((num2 >> i) & 1))
			count++;
	}
	return count;
}
*/
//���������һ�£�Ȼ����1�ĸ���
/*
int count_differ_bit(int num1, int num2)
{
	int tmp = num1^num2;
	int count = 0;//����
	while (tmp)
	{
		count++;
		tmp = tmp&(tmp - 1);
	}
	return count;
}


int main()
{
	int i = 0;
	int j = 0;
	scanf("%d %d",&i,&j);

	int ret = count_differ_bit(i,j);
	printf("%d\n",ret);

	return 0;
}
*/

/*
2��
��ӡ���������Ƶ�����λ��ż��λ
��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
0100101 00110101 00001011 00100110
int�͵ı���ռ32���ֽڣ���16��ż��λ��16������λ
*/

/*
void print(int k)
{
	int i = 0;
	//��ӡ����λ
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (k >> i) & 1);
	}
	printf("\n");
	//��ӡż��λ
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (k >> i) & 1);
	}
	printf("\n");
}
int main()
{
	int m = 0;
	scanf("%d", &m);
	print(m);

	return 0;
}
*/




/*
3��
ͳ�ƶ�������1�ĸ�����
дһ���������ز����������� 1 �ĸ�����
���磺 15    0000 1111    4 �� 1
*/

//��һ���������ԣ��������У�����num=-1��-1���ڴ��еĲ�����ʽ��32��1�����ǽ�����Ϊ0
/*
int print_one_count(int num)
{
	int count = 0;
	while (num)
	{
		if (num % 2 == 1)
			count++;
		num /= 2;
	}
	return count;
}
*/

//���������ǰ�num���������͸����޷������ͣ�����-1�ͻᱻ�������������Դ���
/*
int print_one_count(size_t num)
{
	int count = 0;
	while (num)
	{
		if (num % 2 == 1)
			count++;
		num /= 2;
	}
	return count;
}
*/

//�����������ӣ�num�����Ϊ��1���������㣬������Ϊ0����˵��num�����λΪ0��������Ϊ1����˵��num�����λλ1��
//int��ռ4���ֽڣ��ܹ�32������λ�����ǽ�num���������ƶ�����ÿһλת��Ϊ���Ϊ������1���������㡣
//�÷�����ȱ���ǣ�һ����ѭ��32�Σ��˷ѿռ䡣
/*
int print_one_count(int num)
{
	int i = 0;
	int count = 0;//����
	for(i=0; i<32; i++)
	{
		if( ((num>>i)&1) == 1 )
			count++;
	}
	return count;
}
*/

/*
���ģ�
n = 15,n�Ķ�����λ��1111
���Ƕ�n�������㣺n = n & (n-1)
������ʽ��ʹ��n�Ķ����������ұߵ�1��ʧ

n:	1111
n-1:1110

n:	1110
n-1:1101

n:	1100
n-1:1011

n:	1000
n-1:0111

n:	0000

������ʽ�����˶��ٴΣ���˵���м���1
*/
/*
int print_one_count(int num)
{
	int count = 0;//����
	while (num)
	{
		count++;
		num = num&(num - 1);
	}
	return count;
}

int main()
{
	int num = 0;
	scanf("%d",&num);
	//��д��������ôʵ�ֵ�--���ַ�ʽ������TDD--������������
	int count = print_one_count(num);
	printf("%d\n",count);

	return 0;
}
*/



//���꣺дһ�����룬�ж�n�Ƿ�Ϊ2^m�η�
//4 100
//8 1000
//16 10000

//���n = n & (n-1)���ʽ����һ�Σ��ͻ���Ψһ��1��Ϊ0
//��Ϊ2��m�η������У��������һ����ֻ��1��1
/*
int main()
{
	int n = 0;
	scanf("%d",&n);
	if ((n & (n-1)) == 0)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}
*/
