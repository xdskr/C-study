#include "contact.h"

//��ʼ��ͨѶ¼����
void InitContact(struct Contact* pc)
{
	pc->sz = 0;
	//memset - �����ڴ��
	memset(pc->data, 0, sizeof(pc->data));

}

//���ͨѶ¼����
void ADDContace(struct Contact* pc)
{
	if (pc->sz == MAX)
		printf("ͨѶ¼�������޷�¼�룡\n");
	else
	{
		printf("���������֣�>");
		scanf("%s", pc->data[pc->sz].name);//name�������һ�����飬�����ַ
		printf("���������䣺>");
		scanf("%d", &(pc->data[pc->sz].age));
		printf("�������Ա�>");
		scanf("%s", pc->data[pc->sz].sex);
		printf("������绰��>");
		scanf("%s", pc->data[pc->sz].tele);
		printf("�������ַ��>");
		scanf("%s", pc->data[pc->sz].addr);

		pc->sz++;
		printf("��ӳɹ���\n");
	}
}

//��ӡͨѶ¼����
void SHOWContact(const struct Contact* pc)
{
	int i = 0;

	if (pc->sz == 0)
		printf("ͨѶ¼Ϊ�գ�\n");
	else
	{
		printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s", "����", "����", "�Ա�", "�绰", "��ַ");
		for (i = 0; i < pc->sz; i++)
		{
			printf("%-15s\t%-5d\t%-5s\t%-12s\t%-20s",
				pc->data[i].name,
				pc->data[i].age,
				pc->data[i].sex,
				pc->data[i].tele,
				pc->data[i].addr);
		}
	}
	
}

//���������Ϊ������DELContact��д�ģ�����Ҫд��ͷ�ļ���
//���ǰ����������static���Σ���static���εĺ���ֻ�����Լ����ڵ�.c�ļ��ڲ�ʹ��
static int FindByName(const struct Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
			return i;
	}
	//û�ҵ�
	return -1;
}

//ɾ��ͨѶ¼����
void DELContact(struct Contact* pc)
{
	char name[NAME_MAX] = { 0 };

	if (pc->sz == 0)
		printf("ͨѶ¼Ϊ�գ��޷�ɾ����\n");
	else
	{
		//1�����ҵ�Ҫɾ������
		printf("������Ҫɾ���˵����֣�->");
		scanf("%s", name);
		int pos = FindByName(pc, name);
		if (pos == -1)
			printf("Ҫɾ�����˲����ڣ�\n");
		else
		{
			//2��ɾ��
			int j = 0;
			for (j = 0; j < pc->sz-1; j++)
			{
				pc->data[j] = pc->data[j + 1];
			}
			pc->sz--;
			printf("ɾ���ɹ���\n");

		}
	
	}
}


//����ͨѶ¼����
void DELContact(const struct Contact* pc)
{
	char name[NAME_MAX] = { 0 };
	printf("������Ҫ�����˵����֣�->");
	scanf("%s", name);
	int pos = FindByName(pc, name);

	if (pos == -1)
		printf("Ҫ���ҵ��˲����ڣ�\n");
	else
	{
		//2���ҵ���
		printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-15s\t%-5d\t%-5s\t%-12s\t%-20s",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr);

	}
}


//�޸�ͨѶ¼����
void MODIFYContact(struct Contact* pc)
{
	char name[NAME_MAX] = { 0 };
	printf("������Ҫ�޸��˵����֣�->");
	scanf("%s", name);
	int pos = FindByName(pc, name);

	if (pos == -1)
		printf("Ҫ�޸ĵ��˲����ڣ�\n");
	else
	{
		printf("���������֣�>");
		scanf("%s", pc->data[pos].name);//name�������һ�����飬�����ַ
		printf("���������䣺>");
		scanf("%d", &(pc->data[pos].age));
		printf("�������Ա�>");
		scanf("%s", pc->data[pos].sex);
		printf("������绰��>");
		scanf("%s", pc->data[pos].tele);
		printf("�������ַ��>");
		scanf("%s", pc->data[pos].addr);

		printf("�޸ĳɹ���\n");
	}
}


//����ͨѶ¼���� -- �Լ�д
//void SORTContact(struct Contact* pc){	}