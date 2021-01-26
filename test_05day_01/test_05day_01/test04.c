#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



/*
//go to 语句
int main()
{
flag:
	printf("hehe\n");
	printf("hehe\n");
	printf("hehe\n");
	printf("hehe\n");
	goto flag;//只能在一个函数里面跳转，不能去其他函数
	//不建议使用go to

	//go to的真正适合的场景：多层for循环嵌套

	return 0;
}
*/



//写一个关机程序
//1分钟内关机
//一分钟内输入：我是猪，取消关机
/*
int main()
{
	//shutdown -s -t 设置时间关机
	
	char input[20] = "";
	system("shutdown -s -t 60");//一旦执行，倒计时关机
again:
	printf("请注意，你的电脑将在1分钟内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s",input);

	if (strcmp(input, "我是猪") == 0){
		system("shutdown -a");//取消关机
	}
	else{
		goto again;
	}


	return 0;
}
*/


//以上代码不适用goto语句
/*
int main()
{
	//shutdown -s -t 设置时间关机

	char input[20] = "";
	system("shutdown -s -t 60");//一旦执行，倒计时关机
	while (1){
		printf("请注意，你的电脑将在1分钟内关机，如果输入：我是猪，就取消关机\n");
		scanf("%s", input);

		if (strcmp(input, "我是猪") == 0){
			system("shutdown -a");//取消关机
		}
		 
	}


	return 0;
}
*/