#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>



//ģ��ʵ��strlrn����
//1����������д��
//2���ݹ��д��
//3��ָ���д��

//����ֻ�Ƕ�arr��������󳤶ȣ��������������޸ģ�����Ҫ������������
//�ڿ����棬strlen�ķ���ֵ����Ϊ��size_t����Ϊ�󳤶ȣ���������Ϊ1��������С��0
//size_t= unsigned int
/*
int my_strlen(const char * str)
{
	//��ָֹ�����Ϊ��ָ��
	assert(str != NULL);

	//��Ϊ���β��б��У�str�Ǳ�const���εģ����Ը�ֵ��start��ʱ�򣬾���Ҳ��һ��const������ǰ��һ��
	const char* start = str;

	while (*str != '\0')
	{
		str++;
	}
	return str - start;
}

int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("len = %d\n",len);

	return 0;
}
*/


//����˵��unsigned int�ķ���ֵû�и���
//���������ڣ�3-6=-3������strlen�ķ���ֵ��unsigned int���޷�������
//unsigned intû�и����������޷�������䣬һ�����޷�����
//unsigned int -3��-3���ڴ������Բ������ʽ���ڵģ�ת��Ϊ�޷������ͣ���ֱ�ӽ���������ó�����ԭ���ã����Ƕ�Ӧ���޷������ͣ������������ܴ�һ������0
/*
int main()
{
	if ((strlen("abc") - strlen("abcdef")) > 0)
		printf("����\n");
	else
		printf("С��\n");

	return 0;
}
*/