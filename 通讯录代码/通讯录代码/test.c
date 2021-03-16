#include "contact.h"


//写一个通讯录
/*
可以保存1000个人的信息
	每个人的信息：名字、年龄、性别、电话、住址
通讯录有一些功能：
	a：增加一个人的信息
	b：删除一个指定的联系人
	c：查找一个指定的联系人
	d：修改一个指定的联系人
	e：显示通讯录中所有人的信息
	f：排序
	g：退出功能

将整个代码分为3个文件：
test.c - 测试整个通讯录的逻辑
contact.h - 通讯录相关功能的函数声明
contact.c - 通讯录相关功能的实现
*/

void menu()
{
	printf("*****************************\n");
	printf("******1、add	 2、del******\n");
	printf("******3、search	 4、modify***\n");
	printf("******5、show	 6、sort*****\n");
	printf("******	   0、exit	   ******\n");
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

	struct Contact con;//创建了一个通讯录
	//初始化通讯录
	InitContact(&con);//传con的地址还是传con？ -- con的地址

	do
	{
		menu();
		printf("请选择：-->");
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
			//只是显示，不更改内容，传con就可以，但是我们还是传地址，效率高
			SHOWContact(&con);
			break;
		//case SORT:
			//SORTContact(&con);
			//break;
		case EXIT:
			printf("退出通讯录！\n");
			break;
		default:
			printf("您输入的信息不在有限范围内，请重新输入！\n");
			break;
		}


	} while (input);
}


int main()
{
	test();

	return 0;
}