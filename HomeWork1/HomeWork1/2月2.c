#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/*
//1��
�����ĸ��Ǻ���ָ�룿(C)

A.int* fun(int a, int b);
B.int(*)fun(int a, int b);
C.int (*fun)(int a, int b);
D.(int *)fun(int a, int n);

fun�ȸ�*��ϣ�˵��fun��ָ�룬Ȼ���������Ž�ϣ�˵��ָ��ĺ�����Ȼ������ָ������βΣ�ǰ���Ƿ�������

//2��
����һ������ָ�룬ָ��ĺ���������int�ββ��ҷ���һ������ָ�룬���ص�ָ��ָ��һ����һ��int�β��ҷ���int�ĺ����������ĸ�����ȷ�ģ���A��

A.int (*(*F)(int, int))(int)
B.int (*F)(int, int)
C.int (*(*F)(int, int))
D.*(*F)(int, int)(int)



//3��
����Ϸ����У���������ݲ�ͬ����Ϸ״̬���ò�ͬ�ĺ��������ǿ���ͨ������ָ����ʵ����һ���ܣ������ĸ��ǣ�һ������Ϊint *������ֵΪint�ĺ���ָ�루B��

A.int (*fun)(int)
B.int (*fun)(int *)
C.int* fun(int *)
D.int* (*fun)(int *)



//4��
����һ��ָ����10��Ԫ�ص������ָ�룬����ÿ��Ԫ����һ������ָ�룬�ú����ķ���ֵ��int��������int*����ȷ���ǣ�C��

A.(int *p[10])(int*)
B.int [10]*p(int *)
C.int (*(*p)[10])(int *)
D.int ((int *)[10])*p



//5��
���ڻص���������������ǣ�D��

A.�ص���������һ��ͨ������ָ����õĺ���
B.�ص�����һ��ͨ������ָ��ʵ��
C.�ص�����һ�㲻�Ǻ�����ʵ�ַ����ã��������ض��ĳ����£�������һ�����á�
D.�ص������ǵ��ú���ָ��ָ�����ĺ�����



//6��
�������º���void fun(int n,char *s){����},������Ժ���ָ��Ķ���͸�ֵ������ȷ���ǣ���B��

A.void (*pf)(int��char); pf=&fun;
B.void (*pf)(int n��char *s); pf=fun;
C.void *pf(); *pf=fun;
D.void *pf(); pf=fun;


*/



/*
qsortģ��ʵ�֣�

ģ��qsort�Ĺ���ʵ��һ��ͨ�õ�ð������
*/

/*
void _swap(char* buf1,char* buf2,int width)
{
	int i = 0;
	for (size_t i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void *base, size_t sz, size_t width, int(*cmp)(const void *e1, const void *e2))
{
	size_t i = 0;
	//�������������
	for (i = 0; i < sz - 1; i++)
	{
		//һ��ð�����������
		size_t j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//��������Ԫ�صıȽ�
			//base[j] base[j+1]
			if (cmp((char*)base + j*width,(char*)base + (j+1)*width) > 0)
			{
				//���������˳��ͽ��������cmp>0.��˵��ǰ��Ԫ�ش��ں���Ԫ�أ���������
				_swap((char*)base + j*width, (char*)base + (j + 1)*width,width);
			}

		}
	}
}

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int cmp_int(const void *e1, const void *e2)
{
	return *(int *)e1 - *(int *)e2;
}

void test3()
{
	//qsort ������������
	int arr[] = { 1, 5, 2, 4, 3, 5, 8, 6, 7, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}

int main()
{
	test3();

	return 0;
}
*/





/*
qsortʹ����ϰ

��ϰʹ�ÿ⺯����qsort����������͵�����
*/

/*
struct Stu
{
	char name[20];
	int age;
};

int cmp_stu_by_age(const void *e1, const void *e2)
{
	return ((struct Stu *)e1)->age - ((struct Stu *)e2)->age;
}

int cmp_stu_by_name(const void *e1, const void *e2)
{
	return strcmp(((struct Stu *)e1)->name, ((struct Stu *)e2)->name);
}

void test2()
{
	//qsort ����ṹ��
	struct Stu arr2[] = { { "xzh", 22 }, { "zzd", 23 }, { "xd", 24 } };
	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
	//�������������򣿻��ǰ�����������

	//���谴������
	qsort(arr2, sz2, sizeof(arr2[0]), cmp_stu_by_age);

	//���谴������
	qsort(arr2, sz2, sizeof(arr2[0]), cmp_stu_by_name);

}

int main()
{
	test2();

	return 0;
}
*/
