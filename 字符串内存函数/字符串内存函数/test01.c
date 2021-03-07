#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>

//�ַ��������ַ�������


//1��strlen�����ַ����ĳ���
//size_t strlen ( const char * str );
/*
�ַ����� '\0' ��Ϊ������־��strlen�������ص������ַ����� '\0' ǰ����ֵ��ַ������������� '\0' )��
����ָ����ַ�������Ҫ�� '\0' ������
ע�⺯���ķ���ֵΪsize_t�����޷��ŵģ� �״� ��
ѧ��strlen������ģ��ʵ��
*/
/*
int main()
{
	//!!!
	//strlen���صĽ�����޷������ͣ������޷�����������õ��Ľ�������޷����͡�
	//-3 �����޷�����������һ���ܴ����
	if (strlen("abc") - strlen("abcdef") > 0)
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}

	return 0;
}
*/



//2��strcpy���ַ�������
//char* strcpy(char * destination, const char * source );
/*
Copies the C string pointed by source into the array pointed by destination, including the terminating null
character (and stopping at that point).
Դ�ַ��������� '\0' ������
�ὫԴ�ַ����е� '\0' ������Ŀ��ռ䡣
Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ�����
Ŀ��ռ����ɱ䡣
ѧ��ģ��ʵ�֡�
*/
/*
char* my_strcpy(char* dest, const char* src)
{
	//����
	//��Ϊ����Ҫ��dest��src���н����ò�������������������Ϊ��ָ��
	//ȷ��ָ�����Ч��
	//���Կ������߼����߼�����䣺assert(dest && src != NULL);
	assert(dest != NULL);
	assert(src != NULL);

	char* ret = dest;

	while (*dest++ = *src++)//�����ַ���������"\0"
	{
		//*dest++ = *src++;
		;

		//�Ż�����
		//dest++;
		//src++;
	}
	//*dest = *src;
	return ret;//���ص���Ŀ��ռ����ʼ��ַ
}

int main()
{
	//�����arr2�е�ÿһ��Ԫ�����ο�����arr1�У���"\0"Ҳ�´����ȥ������arr1���滹���в���*�ͱ����"\0"�����Ǵ�ӡ��ʱ��������һ��"\0"�ͻ�ֹͣ��ӡ��
	char arr1[20] = "***************";
	char arr2[] = "hello bit";

	strcpy(arr1, arr2);
	printf("%s\n", arr1);


	//ģ��ʵ��strcpy
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);

	return 0;
}
*/




//3��strcat���ַ���׷��
//char * strcat ( char * destination, const char * source );
/*
Appends a copy of the source string to the destination string. The terminating null character in
destination is overwritten by the first character of source, and a null-character is included at the end of
the new string formed by the concatenation of both in destination.
Դ�ַ��������� '\0' ������
Ŀ���ַ���Ҳ������"\0"������
Ŀ��ռ�������㹻�Ĵ���������Դ�ַ��������ݡ�
Ŀ��ռ������޸ġ�
�ַ����Լ����Լ�׷�ӣ���Σ�
*/
/*
char* my_strcat(char* dest, const char* src)
{
	assert(dest && src);

	char* ret = dest;

	//1.�ҵ�Ŀ��ռ��"\0"
	while (*dest)
	{
		dest++;
	}

	//2.׷��
	while (*dest++ = *src++)
	{
		;
	}

	return ret;

}

int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "world";
	
	//strcat(arr1, arr2);
	//printf("%s\n", arr1);

	//ģ��ʵ��
	//printf("%s\n", my_strcat(arr1, arr2));
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);


	//strcat�ɲ������Լ����Լ�׷�ӣ���������������������
	//�����ԣ�\0�����ǣ�û����ֹ������
	//char arr3[20] = "abc";
	//my_strcat(arr3, arr3);
	//printf("%s\n", arr3);

	return 0;
}
*/




//4��strcmp���ַ����Ƚ�
//int strcmp ( const char * str1, const char * str2 );
/*
This function starts comparing the first character of each string. If they are equal to each other, it
continues with the following pairs until the characters differ or until a terminating null-character is
reached.
��׼�涨��
��һ���ַ������ڵڶ����ַ������򷵻ش���0������
��һ���ַ������ڵڶ����ַ������򷵻�0
��һ���ַ���С�ڵڶ����ַ������򷵻�С��0������
��ô����ж������ַ�����
*/
/*
int my_strcmp(const char* s1, const char* s2)
{
	//��ΪҪ����ָ��Ľ����ò�����Ҫ��ָ֤�����Ч��
	assert(s1 && s2);

	while (*s1 == *s2)
	{
		if (*s1 == "\0")
		{
			return 0;
		}
		s1++;
		s2++;
	}
	//if (*s1 > *s2)
	//{
	//	return 1;
	//}
	//else
	//{
	//	return -1;
	//}

	//�����Ż�
	return *s1 - *s2;

}

int main()
{
	//�ַ����Ƚ�-���ǱȽϳ���
	//�Ƚϵ����ַ����ж�Ӧλ�õ��ַ���ASCiiֵ

	int ret1 = strcmp("abq", "abcdef");
	int ret2 = strcmp("abc", "abcd");
	printf("%d\n", ret1);
	printf("%d\n", ret2);

	
	//ģ��ʵ��strcmp
	int ret3 = my_strcmp("abq", "abcdef");
	int ret4 = my_strcmp("abc", "abcd");
	printf("%d\n", ret3);
	printf("%d\n", ret4);

	return 0;
}
*/



/*
//����ĺ�����strcpy��strcat��strcmp �����ĳ��ȣ�ֻ����"\0"
//���Գ�Ϊ�����Ȳ������Ƶ��ַ�����������
//����������ִ��룬Ŀ�꺯�����Ȳ����������������Ѿ��棬����������һ������ȫ�ĺ���
int main()
{
	char arr[4] = { 4 };
	strcpy(arr,"hello");

	return 0;
}
//C���Ի��ṩ�ˣ����������Ƶ��ַ�������������strncpy��strncat��strncmp
*/






//5��strncpy���г��ȵĽ����ַ�������
//char * strncpy ( char * destination, const char * source, size_t num );
/*
Copies the first num characters of source to destination. If the end of the source C string (which is
signaled by a null-character) is found before num characters have been copied, destination is padded
with zeros until a total of num characters have been written to it.
����num���ַ���Դ�ַ�����Ŀ��ռ䡣
���Դ�ַ����ĳ���С��num���򿽱���Դ�ַ���֮����Ŀ��ĺ��׷��0��ֱ��num����
*/
/*
int main()
{
	char arr1[20] = "********";
	char arr2[] = "abcdef";
	strncpy(arr1, arr2, 3);//�����ǿ����������Ϳ�������
	printf("%s\n", arr1);//abc*****

	char arr3[20] = "***********";
	char arr4[] = "abc";
	strncpy(arr3, arr4, 5);//���������Դ�ַ���С�������趨�ĳ���
	printf("%s\n", arr3);//abc  ��4����5����"\0"��䣬�������ʣ�µ�*��"\0"������ӡ��ʱ��������һ��"\0"�ͻ�ֹͣ��ӡ

	return 0;
}
*/






//6��strncat���г��ȵĽ����ַ���׷��
//char * strncat ( char * destination, const char * source, size_t num );
/*
Appends the first num characters of source to destination, plus a terminating null-character.
If the length of the C string in source is less than num, only the content up to the terminating null-
character is copied.
*/
/*
int main()
{
	char arr1[20] = "hello \0*****";
	printf("%s\n", arr1);
	strncat(arr1, "abcdef", 3);
	printf("%s\n", arr1);//hello abc - �ڰ�abc׷�ӹ�ȥ�󣬻���׷�ӹ�ȥһ��"\0"


	char arr2[20] = "hello \0*****";
	printf("%s\n", arr2);
	strncat(arr2, "abc", 5);
	printf("%s\n", arr2);//hello abc - ���ܳ��ȸ�����������ֻ��Դ�ַ������ȣ�Դ�ַ���ֻ��3�������ܸ�10����20��ֻ׷�ӹ�ȥ3����Ȼ����׷��һ��"\0"

	return 0;
}
*/









//7��strncmp���г��ȵĽ����ַ����Ƚ�
//int strncmp ( const char * str1, const char * str2, size_t num );
/*
int main()
{
	int ret = strncmp("abc", "abcdef", 3);
	printf("%d\n", ret);

	int ret2 = strncmp("abc", "abcdef", 4);
	printf("%d\n", ret2);

	return 0;
}
*/





//8��strstr - ��һ���ַ����������ַ���
//�����ַ����ķ�������һ��KMP�㷨�������˽�һ��
//char * strstr ( const char *, const char * );
//Returns a pointer to the first occurrence of str2 in str1, or a null pointer if str2 is not part of str1.
//_cdecl ��һ�ֺ�������Լ�� - �������ε�˳�� - ����ջ֡�Ĵ�����ʽ
/*
char * my_strstr(const char* s1, const char* s2)
{
	assert(s1 && s2);

	const char *cp = s1;

	if (*s2 == '\0')
		return (char*)s1;

	while (*cp)
	{
		const char *p1 = cp;
		const char *p2 = s2;
		while ((*p1 != '\0') && (*p2 != '\0') && (*p1 == *p2))
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
			return (char *)cp;
		cp++;
	}
	return NULL;

}
int main()
{
	char arr1[] = "abcdefgbcdhi";
	char arr2[] = "bcdq";
	
	char * ret = strstr(arr1, arr2);//��arr1�в���arr2��һ�γ��ֵ�λ��
	if (ret != NULL)
		printf("%s\n", ret);//bcdefgbcdhi
	else
		printf("�Ҳ���!\n");


	//ģ��ʵ��
	char arr3[] = "abcdef";
	char arr4[] = "bcd";

	char * ret2 = my_strstr(arr3, arr4);//��arr1�в���arr2��һ�γ��ֵ�λ��
	if (ret != NULL)
		printf("%s\n", ret2);//bcdefgbcdhi
	else
		printf("�Ҳ���!\n");

	return 0;
}
*/






//9��strtok
//char * strtok(char * str, const char * sep);
/*
sep�����Ǹ��ַ����������������ָ������ַ�����
��һ������ָ��һ���ַ�������������0�����߶����sep�ַ�����һ�����߶���ָ����ָ�ı�ǡ�
strtok�����ҵ�str�е���һ����ǣ��������� \0 ��β������һ��ָ�������ǵ�ָ�롣��ע��strtok�������
�䱻�������ַ�����������ʹ��strtok�����зֵ��ַ���һ�㶼����ʱ���������ݲ��ҿ��޸ġ���
strtok�����ĵ�һ��������Ϊ NULL ���������ҵ�str�е�һ����ǣ�strtok���������������ַ����е�λ�á�
strtok�����ĵ�һ������Ϊ NULL ����������ͬһ���ַ����б������λ�ÿ�ʼ��������һ����ǡ�
����ַ����в����ڸ���ı�ǣ��򷵻� NULL ָ�롣
*/
/*
int main()
{
	char arr[] = "zpw@bitedu.tech";//@ . ��Ϊ�ָ���
	char arr2[30] = { 0 };
	strcpy(arr2, arr);//һ�㽨��һ����ʱ������п�������Ϊstrtok�������޸�Դ�ַ���

	char* p = "@.";//�ָ����ļ��ϵ��ַ��� - û���Ⱥ�˳��

	//�������������֪���ַ����������м����ָ�����ֻ��һ��һ����ӡ���Ƚ��鷳����������Ӧ��ʹ��ѭ����
	//printf("%s\n", strtok(arr2, p));
	//printf("%s\n", strtok(NULL, p));
	//printf("%s\n", strtok(NULL, p));

	char* ret = NULL;
	for (ret = strtok(arr2,p); ret != NULL; ret = strtok(NULL,p))
	{
		printf("%s\n", ret);
	}



	return 0;
}
*/







//10��strerror - ���󱨸溯��
//char * strerror ( int errnum );
/*
���ش����룬����Ӧ�Ĵ�����Ϣ��
�⺯����ʹ�õ�ʱ������������󣬶����ж�Ӧ�Ĵ����롣
��Щ������ᱻ�����һ��ȫ�ֱ����У�errno
ʹ�����ȫ�ֱ�����Ҫ����һ��ͷ�ļ���#include <errno.h>
*/
/*
int main()
{
	//������һ��������
	//�����ӡ�������Ǵ�����Ϣ
	printf("%s\n", strerror(0));//No error
	printf("%s\n", strerror(1));//Operation not permitted
	printf("%s\n", strerror(2));//No such file or directory
	printf("%s\n", strerror(3));//No such process
	printf("%s\n", strerror(4));//Interrupted function call

	return 0;
}
*/
/*
int main()
{
	printf("hehe\n");
	printf("%s\n", strerror(errno));//������Ĭ��Ϊ0���޴���

	FILE* pf = fopen("test.txt", "r");//file open - ��һ���ļ�
	if (pf == NULL)
	{
		//strerror(errno) �����õ��������Ӧ������Ϣ�ַ������׵�ַ
		printf("%s\n", strerror(errno));//No such file or directory
		//perror������ӡ������Ϣ�������Խ��Զ������Ϣ��ӡ������һ��:
		perror("hehe");//hehe: No such file or directory
	}

	return 0;
}
*/






