#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30
#define MAX 1000

//一个人信息的结构体
struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
};

//通讯录的结构体
struct Contact
{
	struct PeoInfo data[MAX];//存放1000人的信息的空间
	int sz;//表示通讯录中当前存放人的信息个数
};


//初始化通讯录函数的声明
void InitContact(struct Contact* pc);

//初始化增加 - 通讯录函数的声明
void ADDContact(struct Contact* pc);

//初始化打印 - 通讯录函数的声明
//因为只是打印，并不修改内容，所以加一个const修饰
void SHOWContact(const struct Contact* pc);

//初始化修改 - 通讯录函数的声明
void MODIFYContact(struct Contact* pc);

//初始化查找 - 通讯录函数的声明
void SEARCHContact(const struct Contact* pc);

//初始化删除 - 通讯录函数的声明
void DELContact(struct Contact* pc);

//初始化排序 - 通讯录函数的声明
//void SORTContact(struct Contact* pc);