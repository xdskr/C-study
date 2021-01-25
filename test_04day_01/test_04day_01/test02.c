# include <stdio.h>

//练习
//练习1：判断一个数是否为奇数
/*
int main(){
	int num = 0;
	scanf("%d\n",&num);
	if (num % 2 == 1){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}

	return 0;
}
*/

//练习2：输出1-100的奇数
/*
int main(){
	int i = 0;
	for (i == 1; i <= 100; i++){
		if (i % 2 == 1){
			printf("%d\n",i);
		}
	}

	return 0;
}
*/

/*
int main(){
	int i = 0;
	for (i == 1; i <= 100; i += 2){
		printf("%d\n",i);
	}

	return 0;
}
*/

//练习3：以下代码的输出结果：
/*
int main(){
	int n = 1;
	int m = 2;

	switch (n){
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n)
		{//switch允许嵌套使用
		case 1:
			n++;
		case 2:
			m++;
			n++;
			break;
		}
	case 4:
		m++;
		break;
	default :
		break;
	}
	printf("m = %d,n = %d\n",m,n);
	//m=5
	//n=3

	return 0;
}
*/


//判断以下代码的输出：打印0-9
/*
int main(){
	while ((ch = getchar()) != EOF){
		if (ch < '0' || ch > '9')
			continue;
		putchar(ch);
	}

	return 0;
}

*/

//练习4：判断以下循环循环多少次
	/*
	int main(){
		int i = 0;
		int k = 0;
		for (i = 0, k = 0; k = 0; i++, k++)
			k++;
		return 0;
	}
	//一次也没有循环
	//第二个表达式不是判断，是赋值，k=0，0为假，所以一次不执行
	*/