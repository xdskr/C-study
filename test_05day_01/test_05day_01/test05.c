#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>



//��ҵ������
//1���Ӵ�С�����������
/*
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	scanf("%d %d %d",&a,&b,&c);
	//����
	if (a < b){
		int tmp = a;
		a = b;
		b = tmp;
	}

	if (a < c){
		int tmp = a;
		a = c;
		c = tmp;
	}

	if (b < c){
		int tmp = a;
		a = c;
		c = tmp;
	}

	//�Ӵ�С���
	printf("%d %d %d\n",a,b,c);


	return 0;
}
*/


//2����ӡ1-100��3�ı���
/*
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("%d\n"i);
	}


	return 0;
}
*/


//3�������������Լ��
/*
int main()
{
	int a = 16;
	int b = 24;

	int i = (a > b) ? b : a;

	for (; i >= 1; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			printf("%d\n",i);
			break;
		}
	}

	//������շת�����
	//��С��������a*b/���Լ��



	return 0;
}
*/


//4����ӡ1000-2000��֮�������
/*
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		//�ж�year�ǲ�������
		//�ж�����Ĺ���
		//1���� 4 ���������ܱ�100����������
		//2���� 400 ����Ҳ������
		if ((year % a == 0) && (year % 100 != 0))
		{
			printf("%d ",year);
		}

		if (year % 400 == 0)
		{
			printf("%d ", year);
		}

		//�����������Թ鲢
		if (((year % a == 0) && (year % 100 != 0)) || (year % 400 == 0))

	}



	return 0;
}
*/


//5����ӡ100-200֮�������
/*
int main()
{
	int i = 0;
	int j = 0;
	for (i = 100; i <=100; i++)
	{
		int flag = 1;//����������

		//�ж�i�Ƿ�Ϊ������ֻ�ܱ�1������������
		//�ж�i�Ƿ�Ϊ����������2-��i-1��֮��������Գ�һ�£�

		for (j = 2; j  < i; j ++)
		{
			if (i % j == 0)
			{
				flag = 0;//��ʶi��������
				break;
			}
		}

		if (flag == 1)
		{
			printf("%d ",i);
		}

	}


	return 0;
	}
*/

//�Ż����ϴ��룺�������Ϸ�����j��ȡֵ��Χ�ǣ�2��i-1
/*
���ж�i�Ƿ�Ϊ������ʱ��
	���i����������һ������д�ɣ�i=a*b �ķ�ʽ
	��a��b��һ����һ��������  <=sqrt(i) �ġ�
	���������ж�2�� sqrt(i) ֮���Ƿ������������������Сj�ķ�Χ
*/

//�����Լ����Ż�����Ϊż����Զ������������������(i=101;i<=sqrt(i);i+=2)

/*
int main()
{
	int i = 0;
	int j = 0;
	for (i = 100; i <= 100; i++)
	{
		int flag = 1;//����������

		//�ж�i�Ƿ�Ϊ������ֻ�ܱ�1������������
		//�ж�i�Ƿ�Ϊ����������2-��i-1��֮��������Գ�һ�£�

		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 0;//��ʶi��������
				break;
			}
		}

		if (flag == 1)
		{
			printf("%d ", i);
		}

	}


	return 0;
}
*/


//6����һ��1-100��9���ֵĸ���
/*
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		//�޷Ƿ�Ϊ��λ����9��ʮλ����9
		//��λ����9��19%10==9
		//ʮλ����9��91/10==9

		if (i % 10 == 9)
		{
			count++;
		}
		//else if (i / 10 == 9)//�����ᵼ��99ֻ�ж�һ�Σ�
		if (i / 10 == 9)
		{
			count++;
		}
	}
	printf("%d\n",count);


	return 0;
}
*/


//7���������
/*
int main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;

	for (i = 1; i <= 100; i++)
	{
		sum += flag*(1.0 / i);
		flag = -flag;
	}

	//%f -- float
	//%lf -- double
	//%s -- �ַ���
	//%c -- �ַ�
	//%d -- �з��ŵ�����
	//%u -- �޷�����
	printf("%lf\n",sum);



	return 0;
}
*/


//8����10�������е����ֵ
/*
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d",&arr[i]);
	}

	//�ҳ����ֵ
	//���´����Ǵ���ģ��������10���������������0����Ϊmax��0��û�б�0����ģ���������ط��Ǵ���ġ�
	//int max = 0;
	//for (i = 0; i < 10; i++)

	int max = arr[0];
	for (i = 1; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d\n",max);



	return 0;
}
*/


//9�����99�˷���
/*
int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		//��ӡһ��
		int j = 0;
		for (j= 1; j <= i; j++)
		{
			printf("%d * %d = %2d ",i,j,i*j);
			//%2d �Ҷ��룬�������ÿո����
			//%-2d ����룬�������ÿո����
		}
		printf("\n");
	}



	return 0;
}
*/