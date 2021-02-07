#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>


//���д����(���ڵ���)�Ĵ���
/*
����Ĵ��룺
1��������������
2��bug����
3��Ч�ʸ�
4���ɶ��Ը�
5����ά���Ը�
6��ע������
7���ĵ���ȫ
*/

/*
������coding���ɣ�����̼��ɣ�
1��ʹ��assert
2������ʹ��const
3���������õı�����
4����ӱ�Ҫ��ע��
*/


//ģ��ʵ��strcpy
//1���˽�strcpy����
//char *strcpy( char *strDestination, const char *strSource );
//2��ģ��ʵ��

//�汾1��
/*
void my_strcpy(char * dest,char * src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	if (*src == '\0')
	{
		*dest = *src;
	}

}
*/
//�汾2��
/*
void my_strcpy(char * dest, char * src)
{
	//0Ϊ�پͻ�ͣ������'\0'��ASCii��ֵΪ0
	//�ȸ�ֵ��++
	while (*dest++ = *src++)
	{
		;
	}
}
*/
//�汾3��
/*
//assert - ���� - �����еı��ʽΪ�棬ʲô���������������еı��ʽΪ�٣��ͻᱨ����ȷ���������ʾ
#include <assert.h>
char * my_strcpy(char * dest, char * src)
{
//0Ϊ�پͻ�ͣ������'\0'��ASCii��ֵΪ0
//�ȸ�ֵ��++

	char * ret = dest;

	//����
	assert(src != NULL);
	assert(dest != NULL);

	while (*dest++ = *src++)
	{
	;
	}
	return ret;//��������ʹ�������ʵ����ʽ����
}
*/
//�汾4������const�󣬰ѽ������п��ܻ���ֵ�һ�����󣬶�ɱ�ڱ���׶�
//const����src�����ҷ���*����ߣ�����*src���ܸı�
/*
#include <assert.h>
char * my_strcpy(char * dest, const char * src)
{
	char * ret = dest;

	assert(src != NULL);
	assert(dest != NULL);

	//while (*src++ = *dest++)//�����д����Ŀ���ļ���������Դ�ļ��У���ʱ�򣬱��벻���������б���
	//���ǣ����Ǽ���const������Ͳ���ͨ����

	//�������ע�ͣ�����srcָ������ݵ�destָ��Ŀռ䣬����\0
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}


int main()
{
	//strcpy - string copy
	char arr1[20] = { 0 };
	char arr2[] = "abcdef";
	//char *p = NULL;
	//��������p����ȥ����ָ�벻�ܽ����ã������������������������汾�������Ż�
	char *p = arr2;
	printf("%s\n", my_strcpy(arr1, p));


	return 0;
}
*/


//const
//const����ָ�룬����*����ߣ����ε���ָ��ָ������ݣ�ʹ��ָ��ָ������ݣ�����ͨ��ָ�����ı䣬����ָ����������ǿ����޸ĵ�
//const����ָ�룬����*���ұߣ����ε���ָ���������ʹ��ָ�����������ֱ���޸ģ�����ָ��ָ������ݿ���ͨ��ָ�����ı�
/*
int main()
{
	int num = 10;
	num = 20;//��Ϊnum�Ǳ��������Կ��Ը���
	printf("%d\n",num);
	int * p = &num;
	*p = 30;//ͨ��ָ��Ҳ���Ը���
	printf("%d\n", num);

	const int num2 = 1;
	//num2 = 2;//���ɸ��ģ����뱨��
	//const���ε�num2�Ǿ��г����Եı��������г����Ե���˼�ǲ���ֱ���޸�

	int * p2 = &num2;
	*p = 3;
	printf("%d\n", num2);//�����͸ĵ��ˣ���Ȼ�о��棬�����ոĵ���
	//����������constԭ�е��﷨�����ǰ���const������num2��������p2ָ�룬���ǰ�һ����ȫ�ı���������һ������ȫ��ָ��
	//���Բű����˾���


	const int num3 = 100;
	const int * p3 = &num3;
	int n = 500;
	//*p3 = 300;//���������ֱ���������
	p = &n;//����

	//const����ָ�룬����*����ߣ����ε���ָ��ָ������ݣ�ʹ��ָ��ָ������ݣ�����ͨ��ָ�����ı�
	//����ָ����������ǿ����޸ĵ�
	//*p3 = 300;//���������ֱ���������
	printf("%d\n", num3);


	int * const p4 = &num;
	*p4 = 20;//����
	//p4 = &n;//����
	printf("%d\n", num);

	const int * const p4 = &num;
	//*p4 = 20;//����
	//p4 = &n;//����
	//�������Ըı�

	return 0;
}
*/



//���潲�ˣ�const������ͨ������const����ָ��

//����Ŀ�Ķ���Ϊ����ߴ���Ľ�׳��
//��׳���ֽ�³���ԣ��ô��벻��������һ������ͱ���