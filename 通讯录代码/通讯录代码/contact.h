#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30
#define MAX 1000

//һ������Ϣ�Ľṹ��
struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
};

//ͨѶ¼�Ľṹ��
struct Contact
{
	struct PeoInfo data[MAX];//���1000�˵���Ϣ�Ŀռ�
	int sz;//��ʾͨѶ¼�е�ǰ����˵���Ϣ����
};


//��ʼ��ͨѶ¼����������
void InitContact(struct Contact* pc);

//��ʼ������ - ͨѶ¼����������
void ADDContact(struct Contact* pc);

//��ʼ����ӡ - ͨѶ¼����������
//��Ϊֻ�Ǵ�ӡ�������޸����ݣ����Լ�һ��const����
void SHOWContact(const struct Contact* pc);

//��ʼ���޸� - ͨѶ¼����������
void MODIFYContact(struct Contact* pc);

//��ʼ������ - ͨѶ¼����������
void SEARCHContact(const struct Contact* pc);

//��ʼ��ɾ�� - ͨѶ¼����������
void DELContact(struct Contact* pc);

//��ʼ������ - ͨѶ¼����������
//void SORTContact(struct Contact* pc);