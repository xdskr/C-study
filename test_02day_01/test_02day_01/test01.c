#include <stdio.h>
#include <string.h>

/*
int main()
{
	//由双引号引起来的就叫字符串
	"abc";
	"d";
	"";//空字符串

	char arr1[] = "abc";
	char arr2[] = { 'a', 'b', 'c' };
	char arr3[] = { 'a', 'b', 'c','\0'};
	
	//strlen = string length - 字符串长度
	printf("%d\n",strlen(arr1));//3，遇到\0就不再计数，\0前面有几个数就是几个长度
	printf("%d\n",strlen(arr2));//15，这个15是随机值，想要一直往后数，数到\0结束，但是一直没有数到，就出现一个随机值
	printf("%d\n", strlen(arr3));//3

	// '\0'是占用内存的

	//%d - 整形
	//%s - 字符串
	printf("%s\n",arr1);//字符串的末尾有一个\0，'\0'是字符串的结束标志
	printf("%s\n",arr2);//后面出现乱码，随机值的现象
	printf("%s\n",arr3);//这样打印arr3，遇到\0就会停止了
	//
	abc
	abc烫烫烫烫bc
	//

	return 0;
}
*/

/*
int main()
{
	printf("c:\test\test.c\n");
	//预期输出结果：c:\test\test.c
	//实际输出结果：c:	est	est.c
	printf("c:\\test\\test.c\n");
	//printf("\a\a\a\a\a");//蜂鸣

	printf("%c\n",'\123');//S，\123 由单引号引起来，属于一个字符
	//先把132这个八进制转换为10进制83，然后找83对应的ASCii值
	//“\ddd” \后面跟的1-3个8进制数字
	//十进制的123表示：1*10^2 + 2*10^1 + 3*10^0
	//八进制的123表示：1*8^2 + 2*8^1 + 3*8^0
	//ASCll 编码值

	printf("%c\n", '\x41');//A
	//先把41这个十六进制转换为10进制65，然后找65对应的ASCii值
	//16进制的41表示：4*16^1 + 1*16^0
	
	//%c - 打印字符
	printf("%c\n",'a');
	printf("%c\n", '\'');
	printf("%s\n", "\"");

	//笔试题：
	printf("%d\n",strlen("abcdef"));//6
	printf("%d\n",strlen("c:\test\328\test.c"));//14
	//\328，八进制里面不会出现8，所以\32是一个 8是一个

	int a = 0;
	printf("%d\n",&a);
	printf("%d\n",a);

	return 0;
}
*/