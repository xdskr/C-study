#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��ҵ����


//1����ĸ��Сдת����
/*
int main()
{

	int ch = 0;
	//while (~(ch = getchar()))
	//��������Ҳ���ԣ�
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'a' && ch <= 'z')
		{
			//printf(ch -32);
			//putchar('\n');
			printf("%c\n",ch-32);
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			printf(ch + 32);
			putchar('\n');
		}
	}


	return 0;
}
*/

//scanf���ص��Ƕ�ȡ�����ĸ������������3���ͷ���3

//2���������е���߷�
/*
int main()
{

	int sc1 = 0;
	int sc2 = 0;
	int sc3 = 0;

	while ((scanf("%d %d %d",&sc1,&sc2,&sc3)) != EOF)
	{
		int max = (sc1 > sc2) ? sc1 : sc2;
		max = (max > sc3) ? max : sc3;
		putchar("%d\n",max);
	}

	return 0;
}
*/


//3������7��ֵ��ȥ��һ�����һ����ͣ���ƽ��
/*
int main()
{
	int i = 0;
	int score = 0;
	int sum = 0;
	int max = 0;
	int min = 100;
	//���Դ���������洢
	for (i = 0; i < 7; i++)
	{
		scanf("%d",&score);
		sum += score;
		if (score > max)
		{
			max = score;
		}
		if (score < min)
		{
			min = score;
		}
	}

	printf("%.2f\n",(sum-max-min)/5.0);


	return 0;
}
*/


//4��������ݺ��·ݣ���ȡ����
/*
int main()
{
	//2����28 29��
	//1 3 5 7 8 10 12 31��
	//4 6 9 11 30��
	int year = 0;
	int month = 0;
	int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	while ((scanf("%d %d", &year, &month)) != EOF)
	{
		int day = days[month - 1];
		//��������꣬2�·�Ҫ+1��
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		{
			if (month == 2)
			{
				day++;
			}
		}

		printf("%d\n",day);

	}


	return 0;
}
*/