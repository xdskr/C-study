#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>


//1、模拟实现strstr
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
	//模拟实现
	char arr3[] = "abcdef";
	char arr4[] = "bcd";

	char * ret2 = my_strstr(arr3, arr4);//在arr1中查找arr2第一次出现的位置
	if (ret2 != NULL)
		printf("%s\n", ret2);//bcdefgbcdhi
	else
		printf("找不到!\n");

	return 0;
}
*/


//2、模拟实现strcat
/*
char* my_strcat(char* dest, const char* src)
{
	assert(dest && src);

	char* ret = dest;

	//1.找到目标空间的"\0"
	while (*dest)
	{
	dest++;
	}

	//2.追加
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

	my_strcat(arr1, arr2);
	printf("%s\n", arr1);


return 0;
}
*/




//3、模拟实现strcmp
/*
int my_strcmp(const char* s1, const char* s2)
{
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
	return *s1 - *s2;

}

int main()
{
	//模拟实现strcmp
	int ret3 = my_strcmp("abq", "abcdef");
	int ret4 = my_strcmp("abc", "abcd");
	printf("%d\n", ret3);
	printf("%d\n", ret4);

	return 0;
}
*/



//4、模拟实现strcmp
/*
char* my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);

	char* ret = dest;

	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[20] = "***************";
	char arr2[] = "hello bit";

	//模拟实现strcpy
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);

	return 0;
}
*/



//6、模拟实现strlen
