#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/*
//����Ƕ��
//�������������Ƕ���ƽ�ȵģ����ڵ��ǵ��ù�ϵ��
//�����������ǲ���Ƕ�׶���ģ�����

//main����Ҳ�Ǳ������������õģ�

void new_line()
{
printf("hehe\n");
}

void three_line()
{
int i = 0;
for (i = 0; i < 3; i++)
{
new_line();
}
}

int main(){
three_line();

return 0;
}
*/


/*
//��ʽ����
int main()
{
//��һ��
int ret = strlen("abcdef");
printf("%d\n",ret);

//������
printf("%d\n", strlen("abcdef"));
//��strlen�����ķ���ֵ����Ϊprintf�����Ĳ���-----��ʽ����

printf("%d",printf("%d",printf("%d",43))); //4321
//�о�һ������printf�ķ���ֵ��printf���ص��Ǵ�ӡ���ַ��ĸ���������������ӡһ��������
//���ԣ��������printf��ӡ43�����ص����ַ��ĸ���2���м��printf��ӡ2�����ص����ַ��ĸ���1������ߵ�printf��ӡ1��

return 0;
}
*/


//����ĺ����ᱨ��δ����Add��
//��Ϊ�����������϶��½���ɨ��ģ�ɨ�赽int sum = Add(a,b);ʱ��ǰ��δ�����ֹ�Add������ɨ��ɨ��AddҲû���ˣ���Ϊ�Ѿ������ˡ�
//�����������ڵ����Ǻ����Ķ�����ں�����ʹ��֮���ʱ�����������ʹ�õ�ʱ�������������������

/*
//��������
int Add(int x, int y);
int main()
{
int a = 10;
int b = 20;
int sum = Add(a, b);
printf("%d\n",sum);


return 0;
}


//�������ֻ��������������ȥ���庯������������Ĵ���ע�͵����������ǿ���ͨ���ģ�����ֻ����﷨���⣬
//�����������ctrl+F5����ʱ��ͻᱨ����Ϊctrl+f5�Ǳ���+���ӵģ������ڼ�ͻ�ȥ����������ڲ��ڣ�
int Add(int x,int y)
{
return x + y;
}
*/


/*
//δ�������ڹ�˾д�����ʱ�������ĺ�����������ʹ�á������������ġ�
//�ȴ���һ��Add.c��Add.h�������ļ���ʵ�ִ����ģ�黯��
# include "Add.h"
int main()
{
int a = 10;
int b = 20;
int sum = Add(a, b);
printf("%d\n", sum);


return 0;
}
*/


/*
//ʷ����򵥵ĵݹ�
int main()
{
printf("hehe\n");
main();
return 0;
}
//���ϴ���ᱨ�쳣��Stack overflowջ���
//ÿһ�κ������ö�Ҫ��ջ���Ͽ���һ��ռ�ģ�����ʱ��ջ��
*/


/*
//�ݹ��Ӧ�ã�
void print(int num)
{
if (num > 9)
print(num / 10);
print("%d ",num % 10);
}

int main()
{
int num = 0;
scanf("%d",&num);
//��ӡnum��ÿһλ
//1 2 3 4
print(num);//print�����Ϳ��԰�num��ÿһλ��ӡ����Ļ��


return 0;
}
*/


/*
//����ݹ��������Ҫ�������ݹ�һ����ȷ��?
void test(int num)
{
if (num < 10000)
test(num + 1);
}

int main()
{
test(1);
return 0;
}
//���ϴ�����Ȼ��������ջ�����
//�ݹ���̫���ˡ�
*/


//��ϰ����д��������������ʱ���������ַ����ĳ���
//�����������ṩ�˿⺯���Ĳο����룬����һ����ִ�д��롣

//ѭ��
/*
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++; //����ָ��++
	}
	return count;
}
*/

/*
//�ݹ�
//����a����ʱ����������1
//1+my_strlen("bcdef")
//1+1+my_strlen("cdef")
//1+1+1+my_strlen("def")
//1+1+1+1+my_strlen("ef")
//1+1+1+1+1+my_strlen("f")
//1+1+1+1+1+1my_strlen("")
//1+1+1+1+1+1+0
//6

//arr����my_strlen������ʵ�����Ǵ���������Ԫ�ص�ַ��������ʽ�����б�Ӧ����char * ��
//��str��ָ�ĵ�ַ��*str������-ָ���ǵ�ַ��ŵ�ֵ��
int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}

int main()
{
	char arr[] = "abcdef";
	//����������Ԫ�صĵ�ַ��- char*�������ַ�a�ĵ�ַ
	int len = my_strlen(arr);
	printf("%d\n",len);

	return 0;
}
*/


/*
//дһ��������n�Ľ׳�
int Fac(int n){
	if (n <= 1)
		return 1;
	else
		return 5 * Fac(n - 1);

}

int main()
{
	int n = 0;
	scanf("%d",&n);
	int ret = Fac(n);

	printf("%d\n",ret);
	
	return 0;
}
*/


/*
int count = 0;
int Fic(int n)
{
	if (n == 3)
		count++;
	if (n <= 2)
		return 1;
	else
		return Fic(n-1) + Fic(n - 2);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fic(n);

	printf("%d\n", ret);
	printf("%d\n", count);//���´����ظ��ļ��㣬n=40�������������˺ü�ʮ��Ρ�
	//��������õݹ�Ч�ʱȽϵ͡�

	return 0;
}
*/

//�Ż���
/*
int Fic(int n)
{
	int a = 1;
	int b = 1;

	int c = 1;
	while (n > 2)
	{
		c = a + b;

		a = b;
		b = c;
		
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fic(n);

	printf("%d\n", ret);

	return 0;
}
*/


