#include "contact.h"

//初始化通讯录函数
void InitContact(struct Contact* pc)
{
	pc->sz = 0;
	//memset - 设置内存的
	memset(pc->data, 0, sizeof(pc->data));

}

//添加通讯录函数
void ADDContace(struct Contact* pc)
{
	if (pc->sz == MAX)
		printf("通讯录已满，无法录入！\n");
	else
	{
		printf("请输入名字：>");
		scanf("%s", pc->data[pc->sz].name);//name本身就是一个数组，代表地址
		printf("请输入年龄：>");
		scanf("%d", &(pc->data[pc->sz].age));
		printf("请输入性别：>");
		scanf("%s", pc->data[pc->sz].sex);
		printf("请输入电话：>");
		scanf("%s", pc->data[pc->sz].tele);
		printf("请输入地址：>");
		scanf("%s", pc->data[pc->sz].addr);

		pc->sz++;
		printf("添加成功！\n");
	}
}

//打印通讯录函数
void SHOWContact(const struct Contact* pc)
{
	int i = 0;

	if (pc->sz == 0)
		printf("通讯录为空！\n");
	else
	{
		printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s", "名字", "年龄", "性别", "电话", "地址");
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

//这个函数是为了满足DELContact才写的，不需要写到头文件里
//我们把这个函数用static修饰，被static修饰的函数只能在自己所在的.c文件内部使用
static int FindByName(const struct Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
			return i;
	}
	//没找到
	return -1;
}

//删除通讯录函数
void DELContact(struct Contact* pc)
{
	char name[NAME_MAX] = { 0 };

	if (pc->sz == 0)
		printf("通讯录为空，无法删除！\n");
	else
	{
		//1、先找到要删除的人
		printf("请输入要删除人的名字：->");
		scanf("%s", name);
		int pos = FindByName(pc, name);
		if (pos == -1)
			printf("要删除的人不存在！\n");
		else
		{
			//2、删除
			int j = 0;
			for (j = 0; j < pc->sz-1; j++)
			{
				pc->data[j] = pc->data[j + 1];
			}
			pc->sz--;
			printf("删除成功！\n");

		}
	
	}
}


//查找通讯录函数
void DELContact(const struct Contact* pc)
{
	char name[NAME_MAX] = { 0 };
	printf("请输入要查找人的名字：->");
	scanf("%s", name);
	int pos = FindByName(pc, name);

	if (pos == -1)
		printf("要查找的人不存在！\n");
	else
	{
		//2、找到了
		printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s", "名字", "年龄", "性别", "电话", "地址");
		printf("%-15s\t%-5d\t%-5s\t%-12s\t%-20s",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr);

	}
}


//修改通讯录函数
void MODIFYContact(struct Contact* pc)
{
	char name[NAME_MAX] = { 0 };
	printf("请输入要修改人的名字：->");
	scanf("%s", name);
	int pos = FindByName(pc, name);

	if (pos == -1)
		printf("要修改的人不存在！\n");
	else
	{
		printf("请输入名字：>");
		scanf("%s", pc->data[pos].name);//name本身就是一个数组，代表地址
		printf("请输入年龄：>");
		scanf("%d", &(pc->data[pos].age));
		printf("请输入性别：>");
		scanf("%s", pc->data[pos].sex);
		printf("请输入电话：>");
		scanf("%s", pc->data[pos].tele);
		printf("请输入地址：>");
		scanf("%s", pc->data[pos].addr);

		printf("修改成功！\n");
	}
}


//排序通讯录函数 -- 自己写
//void SORTContact(struct Contact* pc){	}