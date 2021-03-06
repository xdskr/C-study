#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//笔试题1
/*
创建了一个int类型的数组，数组大小为5，初始化元素为：1 2 3 4 5 
对a进行取地址操作，a是数组名，&a得到的是整个数组的地址
然后+1，此时指针跳过了该数组，指向下一个数组的首元素地址
&a得到的数据类型为：int(*)[5]，因为取出的是数组地址，数组地址应该放到数组指针中去
然后将指针强行转为int*类型
ptr作为一个int*类型的指针，指向的位置就是&a+1指向的位置
打印两个%d %d 
第一个%d表示：*(a+1)：其中a+1指向的是2元素，然后对其进行解引用操作，得到元素2
第二个%d表示：*(ptr - 1)：其中指针ptr目前指向的是该数组下一个数组的首元素地址，然后-1，又回到该数组末尾元素的地址，对其进行解引用操作，得到元素5
*/

//程序的结果是什么？ -- 2 5
/*
int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int *ptr = (int *)(&a + 1);
	printf("%d,%d", *(a + 1), *(ptr - 1));

	return 0;
}
*/







//笔试题2
//由于还没学习结构体，这里告知结构体的大小是20个字节
//结构体* 代表结构体指针，后面一个p 代表创建了一个指针变量p
/*
struct Test
{
	int Num;
	char *pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
//假设p 的值为0x100000。 如下表表达式的值分别为多少？
int main()
{
	//在这里，p是一个结构体指针，结构体指针+1，跳过一个结构体，这个结构体是20个字节，也就是+1的时候，+20个字节（20的二进制：10100）
	p = (struct Test*)0x100000;
	//这里的0x1，是16进制的1，转换为10进制仍是1

	//%p 打印一个地址，16位
	printf("%p\n", p + 0x1);//0x100000 + 20 = 0x100000 + 0x000014 = 0x00100014
	printf("%p\n", (unsigned long)p + 0x1);//unsigned long是一个无符号整型，将一个指针转换为无符号整型，整数+1，即在远整数的基础上+1，所以：0x100000 + 1 = 0x100001
	printf("%p\n", (unsigned int*)p + 0x1);//unsigned int*是一个整型指针，整型指针+1，跳过4个字节，所以：0x100000 + 1 = 0x100004






	return 0;
}
*/







//笔试题3
//解析看笔记
/*
创建了一个int类型的数组，大小为4，并初始化数组为：1 2 3 4
&a得到的是整个数组的地址，&a+1 跳过整个数组，指向下一个数组的地址，此时数组的地址应该用一个数组指针来接受：int(*)[4]
然后强制类型转换为int*类型，并赋值给ptr1指针

a此时表示数组首元素的地址，然后+1表示数组第二个元素的地址，然后强转为int，所以此时(int)a = 0x。。。。。。。。 一个地址，然后+1，整数+1是真的+1，跳过一个字节，一个int型代表4个字节，
所以跳过一个字节，在01 00 00 00 02 00 00 00 中的01后面的00，然后转换为int*吗，对其进行解引用，解引用的时候访问4个字节，00 00 00 02 ，小端存储模式。
打印出来是：02 00 00 00

ptr1[-1] < == > *(ptr-1) 得到4
*ptr2 对ptr2指针指向的地址进行解引用操作
*/
/*
int main()
{
	int a[4] = { 1, 2, 3, 4 };
	int *ptr1 = (int *)(&a + 1);
	int *ptr2 = (int *)((int)a + 1);

	//%x的意思是：以16进制的形式输出
	printf("%x,%x", ptr1[-1], *ptr2);
	//4 20000
	return 0;
}
*/







//笔试题4！！！！！！！！！！！！！！！！！
/*
创建了一个3行2列的二维数组，并初始化内容为：
(0,1)
(2,3)
(4,5)
这其实是3个逗号表达式，因为里面不是{}中括号，所以相当于
int a[3][2] = {1,3,5};初始化为：
1 3
5 0
0 0
定义了一个int*类型的指针变量p
令p=a[0]，a[0]代表第一行的数组名，即p此时代表第一行的数组名，即p表示第一行这个数组
p[0] < == > *(p+0)
*/
/*
int main()
{
	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
	int *p;
	p = a[0];
	printf("%d", p[0]);

	return 0;
}
*/








//笔试题5！！！！！！
//看解析
/*
int main()
{
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	return 0;
}
*/








//笔试题6
/*
定义了一个2维数组aa，大小为2行5列，并初始化为：
1 2 3 4 5 
6 7 8 9 10
&aa得到的是整个数组的地址，整个数组的地址+1，跳过本数组，指向下一个数组的首地址，然后强转为int*类型，并赋值给ptr1指针，其类型为int*
*(ptr1-1) < == > ptr1[-1] 打印10

aa表示数组首元素地址，即第一行的地址，然后+1，表示第二行元素的地址，然后强转为int*类型，并赋值给ptr2指针，其类型为int*
*(ptr2-1) < == > ptr2[-1] 打印5
*/
/*
int main()
{
	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *ptr1 = (int *)(&aa + 1);
	int *ptr2 = (int *)(*(aa + 1));
	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
	return 0;
}
*/









//笔试题7
/*
a是一个数组指针，其类型为char*[] 
a指向的数组里面放了三个字符串：work at alibaba
a也是一个数组，是一个char*类型的数组，里面3个元素都是char*类型的
且每一个char*都指向了三个字符串的首地址

然后定义了一个二级指针变量pa，其类型为char**，指向了a的首地址，
pa++，此时pa指向了a数组中的第二个元素的首地址，然后对其进行解引用操作得到at
*/
/*
int main()
{
	char *a[] = { "work", "at", "alibaba" };
	char**pa = a;
	pa++;
	printf("%s\n", *pa);
	return 0;
}
*/








//笔试题8
/*
定义一个char * 类型的数组，此数组有4个元素，每个元素都是char*类型的，且每个元素都指向下面4个字符串的首地址
定义了一个二级指针数组，里面共4个元素，每个元素都是char**类型的，且都指向char*类型的c数组
然后定义一个三级指针，指向cp
*/
/*
int main()
{
	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	char**cp[] = { c + 3, c + 2, c + 1, c };
	char***cpp = cp;
	printf("%s\n", **++cpp);//POINT
	printf("%s\n", *--*++cpp + 3);//ER
	printf("%s\n", *cpp[-2] + 3);//ST
	printf("%s\n", cpp[-1][-1] + 1);//EW	
	return 0;
}
*/