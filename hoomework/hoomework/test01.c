#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


//��������Ϸ
/*
void menu()
{
	printf("***************************************\n");
	printf("***********     1��play     ***********\n");
	printf("***********     0��exit     ***********\n");
	printf("***************************************\n");
}

void game()
{
	printf("��ӭ������������ϷŶ\n");

	int guess = 0;
	int ret = rand() % 100 + 1;

	while (1)
	{
		printf("���������֣�> ");
		scanf("%d", &guess);

		if (guess > ret)
			printf("���µ�����ƫ��������˼����\n");
		else if (guess < ret)
			printf("���µ����ֽ�С��������˼����\n");
		else{
			printf("��ϲ�������¶�������\n");
			break;
		}
	}

}


int main()
{
	srand((unsigned int)time(NULL));

	int input = 0;

	do
	{
		menu();
		printf("��ѡ��1/0���������Ƿ������Ϸ��\n");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�����˳���Ϸ��\n");
			break;
		default:
			printf("����������ֲ��ڹ涨��Χ�ڣ����������룺> \n");
			break;
		}

	} while (input);

	return 0;
}
*/