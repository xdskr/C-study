#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


/*
int main()
{
	int a, b, c;
	a = 5;
	c = ++a;
	b = ++c, c++, ++a, a++;
	b += a++ + c;
	//a��5 6 7 8 9
	//b��7 23
	//c��6 7 8

	printf("%d\n", a);//9
	printf("%d\n", b);//23
	printf("%d\n", c);//8

	return 0;
}
*/

//������������
//��һ��
/*
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d",&a,&b);

	printf("��ӡǰ��a = %d��b = %d\n",a,b);

	a = a + b;//a��ʱ�洢����a��b�ĺ�
	b = a - b;//a�д洢����a��b�ĺͣ���ȥb����ԭ��a��ֵ������������b��
	a = a - b;//a������a��b�ĺͣ�b�д�ʱ�洢����ԭ��a��ֵ����ȥ������ԭ��b��ֵ����������ֵ��a


	printf("��ӡǰ��a = %d��b = %d\n", a, b);

	return 0;
}
*/

//������
/*
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	printf("��ӡǰ��a = %d��b = %d\n", a, b);

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;


	printf("��ӡǰ��a = %d��b = %d\n", a, b);


	return 0;
}
*/