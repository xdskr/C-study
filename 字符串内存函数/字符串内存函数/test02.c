#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
#include <ctype.h>


//���Ͻ������ַ�������
//������Щ���ַ����� - ��Щ�����ж�һ���ַ��ģ�ת����Ҳ��
/*
�ַ����ຯ����
		����							������Ĳ����������������ͷ�����
	  iscntrl								�κο����ַ�
	  isspace								�հ��ַ����ո� ������ҳ��\f��������'\n'���س���\r�����Ʊ��'\t'���ߴ�ֱ�Ʊ��'\v'
	  isdigit								ʮ�������� 0~9
	  isxdigit								ʮ���������֣���������ʮ�������֣�Сд��ĸa~f����д��ĸA~F
	  islower								Сд��ĸa~z
	  isupper								��д��ĸA~Z
	  isalpha								��ĸa~z��A~Z
	  isalnum								��ĸ�������֣�a~z,A~Z,0~9
	  ispunct								�����ţ��κβ��������ֻ�����ĸ��ͼ���ַ����ɴ�ӡ��
	  isgraph								�κ�ͼ���ַ�
	  isprint								�κοɴ�ӡ�ַ�������ͼ���ַ��Ϳհ��ַ�
*/
/*
�ַ�ת����
int tolower ( int c );
int toupper ( int c );
*/



//1��isspace
//����0���ǣ�����һ����������˵����
/*
int main()
{
	printf("%d\n", isspace('a'));//0
	printf("%d\n", isspace(' '));//8

	return 0;
}
*/

//2��isdigit
//����0���ǣ�����һ����������˵����
/*
int main()
{
	printf("%d\n", isdigit('a'));//0
	printf("%d\n", isdigit('1'));//8

	return 0;
}
*/

//3��tolower/toupper - ת�ɴ�дСд
/*
int main()
{
	char arr[20] = { 0 };
	gets(arr);//Hello Bit!
	int i = 0;
	while (arr[i])
	{
		if (isupper(arr[i]))
		{
			arr[i] = tolower(arr[i]);
		}
		printf("%c", arr[i]);
		i++;
	}

	return 0;
}
*/