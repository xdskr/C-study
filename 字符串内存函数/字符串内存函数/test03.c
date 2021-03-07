#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
#include <ctype.h>


//�ڴ��������



//1��memcpy
//memcpy ������ʵ�ֵ�ʱ�򣬲�֪��δ���ᱻ��������ʲô���͵����ݣ�������void*���͵�ָ������ǱȽϺ��ʵ�
//��test1()��test2()�����ǿ��Կ�����memcpy�������ÿ������ֲ���ص��ڴ��ģ���memmoce��������
//void * memcpy ( void * destination, const void * source, size_t num );
/*
����memcpy��source��λ�ÿ�ʼ�����num���ֽڵ����ݵ�destination���ڴ�λ�á�
������������� '\0' ��ʱ�򲢲���ͣ������
���source��destination���κε��ص������ƵĽ������δ����ġ�
*/
/*
void * my_memcpy(void* dest, const void* src, size_t count)
{
	void* ret = dest;
	assert(dest && src);
	while (count--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
		//((char*)dest)++;//��Ϊ++�����ȼ���
		//((char*)src)++;
	}

	return ret;
}

//�������������������������Ŀռ�
void test1()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6 };
	int arr2[20] = { 0 };
	memcpy(arr2, arr1, 16);//4*sizeof(arr[0])


	//ģ��ʵ��
	int arr3[] = { 1, 2, 3, 4, 5, 6 };
	int arr4[20] = { 0 };
	my_memcpy(arr4, arr3, 16);//4*sizeof(arr[0])
}

//������Ҫ��1234������3456��λ����
void test2()
{
	
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//memcpy�������������ġ�
	my_memcpy(arr+2, arr, 16);//���Ϊ��1 2 1 2 1 2 7 8 9 10

}

//memmove�ǿ��Դ����ص��ڴ�Ŀ�����
void test3()
{

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	memove(arr + 2, arr, 16);

}
int main()
{
	test1();
	test2();
	test3();

	return 0;
}
*/





//2��memmove
//memmove�ڿ�����ʱ����ʱ���ǰ��󿽱�����ʱ��Ӻ���ǰ����
//void * memmove ( void * destination, const void * source, size_t num );
/*
��memcpy�Ĳ�����memmove���������Դ�ڴ���Ŀ���ڴ���ǿ����ص��ġ�
���Դ�ռ��Ŀ��ռ�����ص����͵�ʹ��memmove��������
*/
/*
void * my_memove(void* dest, const void* src, size_t count)
{
	void* ret = dest;
	assert(dest && src);
	if (dest < src)
	{
		//ǰ ����> ��
		while (count--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		//�� ����> ǰ
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}

	return ret;
}

//memmove�ǿ��Դ����ص��ڴ�Ŀ�����
void test1()
{

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	my_memmove(arr + 2, arr, 16);

}

//����һ������memcpy
//������һ�¿⺯����memcpy�����Ƿ��������ڴ��ص������ݿ��� - �����
void test2()
{

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	memcpy(arr + 2, arr, 16);
	//��׼�涨��memcpy�����ܹ��ܹ�ʵ�ֲ��ص���������
	//����VS��memcpy��������ʵ���ص�����

}
int main()
{
	test1();
	test2();

	return 0;
}
*/







//3��memcmp
//�Ƚϴ�ptr1��ptr2ָ�뿪ʼ��num���ֽ�
/*
int memcmp ( const void * ptr1,
			const void * ptr2,
			size_t num );

Return Value			Relationship of First count Bytes of buf1 and buf2
< 0							buf1 less than buf2
0							buf1 identical to buf2
> 0							buf1 greater than buf2

*/
/*
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5 };//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00
	int arr2[] = { 1, 2, 5, 6, 7 };//01 00 00 00 02 00 00 00 05 00 00 00 06 00 00 00 07 00 00 00

	//ǰ�˸��ֽڱȽϵ���12
	int ret = memcmp(arr1, arr2, 8);//���һ���������ֽ�Ϊ��λ
	printf("%d\n", ret);//0

	int ret2 = memcmp(arr1, arr2, 9);
	printf("%d\n", ret2);//-1


	//memset

	return 0;
}
*/



//4��memset
//void *memset( void *dest, int c, size_t count );

int main()
{
	char arr[10] = { 0 };
	memset(arr, '*', 10);//һ��һ�����ã����ֽ�Ϊ��λ����

	//����һ��һ���ֽ����ã����ú�Ĳ���1
	char arr2[10] = { 0 };// 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
	memset(arr2, 1, 20);// 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01

	return 0;
}