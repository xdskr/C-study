#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//����ת��
//���ĳ���������������������ڲ�ͬ���ͣ���ô��������һ����������ת��Ϊ��һ�������������ͣ�����������޷����У�����Ĳ����ϵ��ΪѰ������ת����
//�����Ѿ�������õģ���������ת����
//long double
//double
//float
//unsigned long int
//long int
//unsigned int 
//int
/*
int main()
{


	return 0;
}
*/



//������������
/*

���ӱ��ʽ����ֵ������Ӱ������أ�
1�������������ȼ�
2���������Ľ����
3���Ƿ������ֵ˳��
*/


//һЩ������ʽ���ʼ�


/*
int fun()
{
	static int count = 1;
	return ++count;
}
int main()
{
	int answer;
	answer = fun() - fun() * fun();
	printf("%d\n",answer);
	//������٣�
	//-2 �� -10
	//�����һ������Ϊ�����Ǹ�fun��Ӱ����

	return 0;
}
*/


//����ʼ�
/*
int main()
{
	int i = 1;
	//4+4+4
	int a = (++i) + (++i) + (++i);
	printf("%d\n",a);

	return 0;
}
*/