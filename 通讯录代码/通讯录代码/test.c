#include "contact.h"


//дһ��ͨѶ¼
/*
���Ա���1000���˵���Ϣ
	ÿ���˵���Ϣ�����֡����䡢�Ա𡢵绰��סַ
ͨѶ¼��һЩ���ܣ�
	a������һ���˵���Ϣ
	b��ɾ��һ��ָ������ϵ��
	c������һ��ָ������ϵ��
	d���޸�һ��ָ������ϵ��
	e����ʾͨѶ¼�������˵���Ϣ
	f������
	g���˳�����

�����������Ϊ3���ļ���
test.c - ��������ͨѶ¼���߼�
contact.h - ͨѶ¼��ع��ܵĺ�������
contact.c - ͨѶ¼��ع��ܵ�ʵ��
*/

void menu()
{
	printf("*****************************\n");
	printf("******1��add	 2��del******\n");
	printf("******3��search	 4��modify***\n");
	printf("******5��show	 6��sort*****\n");
	printf("******	   0��exit	   ******\n");
	printf("*****************************\n");
}
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

void test()
{
	int input = 0;

	struct Contact con;//������һ��ͨѶ¼
	//��ʼ��ͨѶ¼
	InitContact(&con);//��con�ĵ�ַ���Ǵ�con�� -- con�ĵ�ַ

	do
	{
		menu();
		printf("��ѡ��-->");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			ADDContact(&con);
			break;
		case DEL:
			DELContact(&con);
			break;
		case SEARCH:
			SEARCHContact(&con);
			break;
		case MODIFY:
			MODIFYContact(&con);
			break;
		case SHOW:
			//ֻ����ʾ�����������ݣ���con�Ϳ��ԣ��������ǻ��Ǵ���ַ��Ч�ʸ�
			SHOWContact(&con);
			break;
		//case SORT:
			//SORTContact(&con);
			//break;
		case EXIT:
			printf("�˳�ͨѶ¼��\n");
			break;
		default:
			printf("���������Ϣ�������޷�Χ�ڣ����������룡\n");
			break;
		}


	} while (input);
}


int main()
{
	test();

	return 0;
}