#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>




//程序的执行结果：
/*
会进行相应的整型提升：
200 -- 0000 0000 0000 0000 0000 0000 1100 1000
100 -- 0000 0000 0000 0000 0000 0000 0110 0100

unsigned char 占1个字节
a + b = 0000 0000 0000 0000 0000 0001 0010 1100
c = a + b发生整型提升：0010 1100，然后以%d打印：0000 0000 0000 0000 0000 0000 0010 1100 -- 44
*/
/*
int main()
{
	unsigned char a = 200;
	unsigned char b = 100;
	unsigned char c = 0;
	c = a + b;

	printf("%d %d", a + b, c);

	return 0;
}
*/




//选择：A.0x00	B.0x12	C.0x34	D.0x1234
/*
在32位大端模式处理器上变量b等于（ ）
unsigned int a= 0x1234; 
unsigned char b=*(unsigned char *)&a;

定义一个无符号整型变量a，其地址为0x1234 -- > 0x00 00 12 34
0x1234 = 0000 0000 0000 0000 0001 0010 0011 0100
以上二进制遵从大端模式存储：
			00 00 12 34
低地址 -------------------> 高地址
然后取地址a，并将&a强转为unsigned char * 转为一个指针，然后解引用操作，此时指针使char*指针，解引用的时候，往后访问一个自己
所以b里面的值应该是00
*/



//以下代码的结果是：
/*
定义了一个char类型的数组a，并初始化数值为0，然后又定义了一个int类型的变量a
然后进入for循环。
a[0] = -1 - 0 = -1;
a[1] = -1 - 1 = -4;
a[2] = -1 - 2 = -5;
a[3] = -1 - 3 = -6;
...
a[127] = -1 - 127 = -128;
a[128] = -1 -128 = 127;
...
a[254] = -1 - 254 = 1;
a[255] = -1 - 255 = 0;

0和"\0"的ASCii值都是0，strlen(a)，传进去数组的首元素地址，然后往后找"\0"
1-128 127-1
总共255个数字
*/
/*
int main()
{
	char a[1000] = { 0 };
	int i = 0;
	for (i = 0; i<1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d", strlen(a));
	return 0;
}
*/


/*
关于大小端字节序的描述正确的是（B）


A.大小端字节序指的是数据在电脑上存储的二进制位顺序
B.大小端字节序指的是数据在电脑上存储的字节顺序
C.大端字节序是把数据的高字节内容存放到高地址，低字节内容存放在低地址处
D.小端字节序是把数据的高字节内容存放到低地址，低字节内容存放在高地址处

CD说反了，大小端是看低位的存储，低位存在低地址则为小端，低位存在高地址则为大端
*/





//打印杨辉三角
/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1							
……
*/
/*
int main()
{
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == 0)
				arr[i][j] = 1;
			if (i == j)
				arr[i][j] = 1;
			if (i > 1 && j > 0)
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}

	//打印内容
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	


	return 0;
}
*/





//猜凶手
/*
日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
以下为4个嫌疑犯的供词:
A说：不是我。
B说：是C。
C说：是D。
D说：C在胡说

已知3个人说了真话，1个人说的是假话。现在请根据这些信息，写一个程序来确定到底谁是凶手。
*/

//老师代码：
/*
int main()
{
	int killer = 0;
	for (killer = 'A'; killer <= 'D'; killer++)
	{
		if (3 == (killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D'))
			printf("%c 是凶手！\n", killer);
	}

}
*/

/*
void menu()
{
	printf("日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。\n");
	printf("以下为4个嫌疑犯的供词:\n");
	printf("A说：不是我。\n");
	printf("B说：是C。\n");
	printf("C说：是D。\n");
	printf("D说：C在胡说\n");
	printf("已知3个人说了真话，1个人说的是假话。现在请根据这些信息，写一个程序来确定到底谁是凶手。\n");
}

int game(char killer)
{
	int count = 0;
	
	if (killer != 'A')
		count++;
	if (killer == 'C')
		count++;
	if (killer == 'D')
		count++;
	if (killer != 'D')
		count++;
	return count;
}

int main()
{
	int chose = 0;
	char killer;
	do
	{
		menu();
		printf("请选择是否进入游戏：--> (1/0 -- 进入游戏/退出游戏)\n");
		scanf("%d", &chose);
		switch (chose)
		{
		case 1:
			printf("您认为凶手是：\n");
			scanf("%c", &killer);

			int ret = game(killer);
			
			if (3 == ret)
				printf("%c 是凶手！\n", killer);

			break;
		case 0:
			printf("退出游戏成功，欢迎下次再来！\n");
			break;
		default:
			printf("您输入的数字有误，选择1->进入游戏，选择0->退出游戏\n");
			printf("\n");
			break;
		}

		
	} while (chose);


	return 0;
}
*/





/*
猜名次：
5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：

A选手说：B第二，我第三；
B选手说：我第二，E第四；
C选手说：我第一，D第二；
D选手说：C最后，我第三；
E选手说：我第四，A第一；

比赛结束后，每位选手都说对了一半，请编程确定比赛的名次
*/


//老师写：
/*
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 0; a <= 5; a++)
	{
		for (b = 0; b <= 5; b++)
		{
			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d <= 5; d++)
				{
					for (e = 0; e <= 5; e++)
					{
						if (((b == 2) + (a == 3) == 1) &&
							((b == 2) + (e == 4) == 1) &&
							((c == 1) + (d == 2) == 1) &&
							((c == 5) + (d == 3) == 1) &&
							((e == 4) + (a == 1) == 1))
						{
							if ((a*b*c*d*e == 120) && (a+b+c+d+e == 15))
								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
						}
					}
				}
			}
		}
	}

	return 0;
}
*/




/*
int main()
{
	char A, B, C, D, E;
	int grade = 0;
	if (() || ())
		grade++;
	switch (gra)
	{
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	}

	return 0;
}
*/