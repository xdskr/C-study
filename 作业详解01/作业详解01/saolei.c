#include "game.h"

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		//��ӡ�˵�
		menu();
		printf("��ѡ��-->");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ!\n");
			break;
		default:
			printf("����������ֲ��ڹ涨��Χ�ڣ����������룺\n");
			break;
		}
	} while (input);

	return 0;
}