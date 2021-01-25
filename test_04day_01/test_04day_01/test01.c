#include <stdio.h>

/*
int test(){
	int x = 10;
	int y = 20;

	if (1){
		return x;
	}
	return y;
}
*/

//int main(){
	/*
	int z = 10;
	printf("hello bit");
	2 + 3;
	;//空语句
	//以上都是一些简单语句

	//if也是语句
	int age = 20;
	if (age >= 18)
	{
		printf("成年\n");
		//如果只有一条语句，大括号可以省略
	}
	else
	{
		printf("未成年\n");
	}
	*/

	/*
	int age = 46;
	if (age <= 18)
	{
		printf("未成年\n");
	}
	else
	{
		if (age > 18 && age <= 30)
		{
			printf("青年\n");
		}
		else if (age >= 30 && age <= 60)
			printf("壮年\n");
		else
		{
			printf("老年\n");
		}
	}
	*/
	

	/*
	//测试代码风格
	test();
	int num = 1;
	//if (num = 5){//少打了一个=，也会执行下面的语句，因为num=5，非0，为真。
	//if (5 = num){//这种情况会报错，因为num=5，5是一个常量，是不可能改变的。
	if (5 == num){//所以养成把常量放在左边的习惯
		printf("hehe\n");
	}
	*/


	/*
	//switch语句
	int day = 0;
	scanf("%d\n",&day);

	switch (day)
	{
	case 1:{
		printf("星期一\n");
	}
		break;
	case 2:{
		printf("星期二\n");
	}
		break;
	case 3:{
		printf("星期三\n");
	}
		break;
	case 4:{
		printf("星期四\n");
	}
		break;
	case 5:{
		printf("星期五\n");
	}
		break;
	case 6:{
		printf("星期六\n");
	}
		break;
	case 7:{
		printf("星期日\n");
	}
		break;

	}
	*/

	/*
	int day = 0;
	scanf("%d\n", &day);

	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:{
		printf("工作日\n");
	}
		break;
	case 6:
	case 7:{
		printf("休息日\n");
	}
		break;
	default:{  
		printf("输入错误！\n");
		break;
	}
	}
	*/


	//return 0;}