# include <stdio.h>

//int main(){
	/*
	//打印1-10
	int i = 1;
	while (i <= 10)
	{
		if (i == 5){
			break;//输出：1234
			//break用来终止循环，跳出最近的一个循环
		}
		printf("%d\n",i);
		i++;
	}
	*/

	/*
	int i = 1;
	while (i <= 10)
	{
		if (i == 5){
			continue;//输出：1234，然后陷入死循环，因为i++;这行代码被跳过，i始终为5，始终进入if，然后死循环
			//continue是跳过本次循环，continue后边的代码，直接到循环的判断部分，进入下一次循环的入口
		}
		printf("%d\n", i);
		i++;
	}
	*/

	/*
	int ch = 0;
	//只负责接收一个字符
	//getchar - 从标准输入(键盘)读取一个字符
	ch = getchar();
	//putchar - 打印一个字符到标准输出(屏幕)
	putchar(ch);
	*/

	/*
	int ch = 0;

	while ((ch = getchar()) != EOF){
	//读取失败的时候，getchar返回EOF
	//EOF - end of file = -1（它的值是-1）
		putchar(ch);
		//打EOF，也不会停止，停止的办法是ctrl+z：会出现^Z，然后停止。
	}
	*/

	/*
	char password[10] = { 0 };
	printf("请输入密码：>");
	scanf("%s",password);

	//清理一下缓冲区：\n
	getchar();

	printf("请确认(Y/N):>");

	int ch = getchar();
	if(ch == 'Y'){
		printf("确认成功！\n"):
	}
	else{
		printf("确认失败！\n");
	}
	//以上打印结果：确认失败，分析原因。

	//scanf、getchar输入函数，从键盘来获得输入
	//这两个输入函数和键盘之间还存在一个输入缓冲区，
	//scanf不是直接从键盘读入的，而是去输入缓冲区，他刚进去的时候，输入缓冲区里面没有东西，所以会等待，这时我们输入123456，我们还会敲一个回车，所以读取到的内容是：123456\n
	//scanf只会拿走自己想要的，\n不是密码，所以不会拿走，只会拿走123456，拿走后后面紧跟着确认。然后到了getchar，他也会去缓冲区拿，所以getchar拿走了\n，这时if语句会进行判断，
	//getchar是否等于Y，不等于，则走else分支。
	//解决方案：在getchar读取前，把缓冲区清空。所以才有了上面的清空代码
	*/


	/*
	char password[10] = { 0 };
	printf("请输入密码：>");
	scanf("%s", password);//这个password前面不用加取地址符号&，password是数组名，数组名本来就是地址，变量才要取地址
	//数组名就是数组首元素的地址
	//gets是可以读取一行的

	//清理一下缓冲区：\n
	//getchar();

	//升级后的清理缓冲区
	int ch = 0;
	//char ch = 0;
	//这也是可以的，但字符的ASCii值int也可以寸的下
	//这里为什么用int，因为有可能读到EOF，而EOF的值是-1，char类型放不下。
	while ((ch = getchar()) != '\n')
	{
		;
	}

	printf("请确认(Y/N):>");

	ch = getchar();
	if (ch == 'Y'){
		printf("确认成功！\n") :
	}
	else{
		printf("确认失败！\n");
	}
	//如果我们输入的密码是：123456 abcdef，则以上打印结果：确认失败，分析原因。
	//此时缓冲区里有：123456 abcdef\n。
	//scanf读取123465，并拿走
	//第一个getchar取走：空格
	//第二个getchar取走：a
	//所以清理缓冲区不是一个getchar可以搞定的。
	*/


	/*
	//不管是初始化变量的值还是判断部分还是循环变量的调整部分，都会影响到整个循环。
	int i = 0;//初始化-1
	while (i < 100){ //判断部分-2
		//。。。。
		i += 2;//循环变量的调整部分-3
	}
	//我们想更改循环时，就要去找这这三个地方，容易引起不必要的麻烦。
	*/

	//用for循环实现打印1-10
	/*
	int i = 0;
	for (i = 1; i <= 10; i++){
		printf("%d\n",i);
	}
	*/

	/*
	int i = 0;
	for (i = 1; i <= 10;i++){
		if (i == 5){
			break;//终止循环
		}
	}
	//1234
	*/
	/*
	int i = 0;
	for (i = 1; i <= 10; i++){
		if (i == 5){
			continue;//终止循环
		}
	}
	//1234678910
	//i++会被执行到
	*/

	//for循环的变种
	//变种1：
	/*
	for (;;){
		printf("hehe\n");
	}
	//以上程序为死循环。
	//for循环的三个部分都可以省略，尽量不要随便省略
	//判断部分如果省略，表示恒为真。
	*/

	//变种2：
	/*
	int i = 0;
	int j = 0;
	for (; i < 10; i++){
		for (; j < 10; j++){
	//
	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
	//这种情况会打印100个，所以不要随便省略
	//
			printf("hehe\n");
		}
	}
	//打印几个呵呵:10个
	//开始i=0，进入第一个for，然后进入第二个for，循环10次，打印10个呵呵，然后退出第二个for，返回第一个for，i++，i=1，但是进入第二个for的时候，j=10，上次的10。
	//所以不会再次进入第二个for，一直在第一个for循环9次，而不打印。
	*/

	//do while循环
	/*
	int i = 1;
	do{
		printf("%d ", i);
		i++;
	} while (i <= 10);
	//打印1-10
	*/

	/*
	int i = 1;
	do{
		if (i == 5){
			break;
		}
		printf("%d ", i);
		i++;
	} while (i <= 10);
	//打印1-4
	*/
	
	/*
	int i = 1;
	do{
		if (i == 5){
			continue;
		}
		printf("%d ", i);
		i++;
	} while (i <= 10);
	//打印1234 死循环
	//只要i++放在continue后面，就可能导致死循环
	*/

	//return 0;}