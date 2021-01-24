/*
输入一个整数表示一个人的智商，如果大于等于140，则表明他是一个天才，输出“Genius”

输入描述：多组输入，每行输入包括一个整数表示智商
输出描述：针对每行输入，输出“Genius”
*/

# include <stdio.h>

int main()
{
	int n = 0;
	//scanf读取失败的时候返回EOF
	while (scanf("%d", &n) != EOF);
	{
		if (n >= 140)
			printf("Genius\n");
	}


	return 0;
}