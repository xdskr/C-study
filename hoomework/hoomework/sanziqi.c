#include "test.h"


int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;

	do
	{
		Menu();
		printf("��ѡ��1/0���������Ƿ������Ϸ��");
		scanf("%d",&input);

		switch (input)
		{
		case 1:
			Game();
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