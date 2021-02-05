#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//作业讲解


//1、字母大小写转换：
/*
int main()
{

	int ch = 0;
	//while (~(ch = getchar()))
	//上面这种也可以：
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

//scanf返回的是读取参数的个数，比如读了3个就返回3

//2、求三科中的最高分
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


//3、输入7个值，去掉一个最高一个最低，求平均
/*
int main()
{
	int i = 0;
	int score = 0;
	int sum = 0;
	int max = 0;
	int min = 100;
	//可以创建个数组存储
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


//4、输入年份和月份，获取天数
/*
int main()
{
	//2月有28 29天
	//1 3 5 7 8 10 12 31天
	//4 6 9 11 30天
	int year = 0;
	int month = 0;
	int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	while ((scanf("%d %d", &year, &month)) != EOF)
	{
		int day = days[month - 1];
		//如果是闰年，2月份要+1天
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