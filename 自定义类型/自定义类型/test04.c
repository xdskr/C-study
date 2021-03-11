#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stddef.h>


//联合体 - 又称为共用体
//改c，i的值可能也会改变，改i，c的值可能也会改变。
//同一时间只能用一个

//联合的成员是共用同一块内存空间的，这样一个联合变量的大小，至少是最大成员的大小（因为联合至少得有能力保存最大的那个成员）。
/*
union Un
{
	char c;
	int i;
};

int main()
{
	union Un u;

	//这三个地址打印出来是一样的
	printf("%p\n", &u);//0137F8CC
	printf("%p\n", &(u.c));//0137F8CC
	printf("%p\n", &(u.i));//0137F8CC

	printf("%d\n", sizeof(u));//4

	u.i = 0x11223344;
	u.c = 0x55;
	printf("%x\n", u.i);//0x11223355
	//小端存储，先把i放进去
	// 44 33 22 11
	// 55 
	// 55 33 22 11
	//然后16进制打印：11 22 33 55

	return 0;
}
*/



//判断当前机器是大端还是小端存储
/*
int main()
{
	int a = 1;//0x 00 00 00 01
	//低地址  ---------  高地址
	//		01 00 00 00   -小端
	//		00 00 00 01	  -大端

	if (1 == *(char*)&a)
		printf("小端\n");
	else
		printf("小端\n");

	return 0;
}
*/

/*
//原来：
int check_sys()
{
	int a = 1;

	if (1 == *(char*)&a)
		return 1;
	else
		return 0;

}

//改进：
int check_sys()
{
	int a = 1;

	return *(char*)&a;

}

int main()
{
	int ret = check_sys();
	if (1 == ret)
		printf("小端\n");
	else
		printf("小端\n");

	return 0;
}
*/

/*
int check_sys()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;

	return u.c;

}

int main()
{
	int ret = check_sys();
	if (1 == ret)
		printf("小端\n");
	else
		printf("小端\n");

	return 0;
}
*/





//联合体大小的计算
/*
联合大小的计算
联合的大小至少是最大成员的大小。 -- 至少！！！！

当最大成员大小不是最大对齐数的整数倍的时候，就要对齐到最大对齐数的整数倍。
*/

/*
union Un1
{
	//仍是与8进行比较，然后取小的当作对齐数
	//数组是按照每个成员进行对齐，char c[6] - 其对齐数就是1
	char c[6];
	int i;//对齐数 - 4

	//在1 4 中选取最大的作为最大对齐数，用来计算联合体大小
	//所以联合体的大小为4的整数倍
};
union Un2
{
	short c[7];//2 8 选取2，每一个占2个字节，共7个，所以共14个字节
	int i;//4 8 选取4，int类型占用4个字节
	//2 4选取4作为最大对齐数用来计算联合体大小
	//联合体大小至少为14，然后网上累加，找4的倍数，为16
};


int main()
{
	union Un1 u1;
	union Un2 u2;
	//下面输出的结果是什么？
	printf("%d\n", sizeof(u1));//8
	printf("%d\n", sizeof(u2));//16

	return 0;
}
*/