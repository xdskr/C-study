#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", i);
	}

	return 0;
}
*/

//测试调用堆栈（堆栈和栈是一个概念）
/*
void test3()
{
	printf("hehe\n");
}
void test2()
{
	test3();
}
void test()
{
	test1();
}
int main()
{
	test();
	return 0;
}
*/