#include "game.h"

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		Menu();
		printf("��ѡ��-->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Game();//ɨ����Ϸ��ʵ��
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}

	} while (input);


	return 0;
}