#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>


//�ص�������
/*
�ص���������һ��ͨ������ָ����õĺ����������Ѻ�����ָ�루��ַ����Ϊ�������ݸ���һ
�������������ָ�뱻������������ָ��ĺ���ʱ�����Ǿ�˵���ǻص��������ص����������ɸ�
������ʵ�ַ�ֱ�ӵ��ã��������ض����¼�����������ʱ�������һ�����õģ����ڶԸ��¼���
����������Ӧ��
*/
/*
void test1()
{
	printf("hehe\n");
}

void test2(void(*p)())
{
	//����ͨ��pȥ����test1��������ʱtest1��������Ϊ�ص�����
	p();
}

int main()
{
	test2(test1);

	return 0;
}
*/



//���ûص��������ƸĽ�����������
/*
void menu()
{
	printf("******************************\n");
	printf("*******1��add    2��sub*******\n");
	printf("*******3��mul    4��div*******\n");
	printf("*******     0��exit    *******\n");
	printf("******************************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}


void calc(int(*p)(int,int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("������������������->");
	scanf("%d %d", &x, &y);
	ret = p(x, y);
	printf("���Ϊ��%d\n", ret);
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			calc(Add);//������
			break;
		case 2:
			calc(Sub);//������
			break;
		case 3:
			calc(Mul);//������
			break;
		case 4:
			calc(Div);//������
			break;
		case 0:
			printf("�˳���������\n");
			break;
		default:
			printf("�Բ����������������Ч�����������룡\n");
			break;
		}


	} while (input);

	return 0;
}
*/


//��һ�����ص�����
/*
void bubble_sort(int arr[],int sz)
{
	int i = 0;
	//�������������
	for (i = 0; i < sz - 1; i++)
	{
		//һ��ð�����������
		int j = 0;
		for (j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
void print_arr(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = { 1, 5, 2, 4, 3, 5, 8, 6, 7, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	bubble_sort(arr, sz);//�ų�����

	print_arr(arr,sz);

	return 0;
}
*/



//�̵�һ��֪ʶ��
/*
//void*�ǲ���ֱ�ӽ����õ�
//��Ϊvoid* ��ָ�룬û�о������ͣ����Բ��ܽ����ò���������++/--
int main()
{
	int a = 10;
	int* p = &a;
	//��������ǿ��Եģ���Ϊ����֪��ָ��p��������int*���ڽ����ò�����ʱ�������Զ�����4���ֽڵĿռ�
	*p = 20;

	void *pv = &a;//������ղ�����û�����

	//pv��������void*����ʾpv��û�о������͵ģ���һ��������ָ�룬������ָ��
	//�������н����ò���ʱ����֪�����ʼ����ֽ�
	//*pv = 0;//����Ǵ���ģ�����������
	//pv++;//����Ǵ���ģ�����������

	int b = 10;
	//char * pc = &b;//�������Ͳ�����
	//void* ���Խ����������͵�ָ�룬���ᱨ��
	//�����͵�ָ����Խ����������͵ĵ�ַ
	void * pc = &b;


	return 0;
}
*/



//�⺯��������һ��-qsort -quick sort
//���������������͵�����
/*
void qsort(void *base, //��Ҫ������������ʼλ��
	size_t num, //����������Ԫ�صĸ���
	size_t width, //������Ԫ�صĴ�С����ռ�����ֽ�
	int(*cmp)(const void *e1, const void *e2));//�Լ�����һ���ȽϺ�����e1 e2����Ҫ�Ƚϵ����������ĵ�ַ
*/

/*
//������뷨��
//int cmp_int(const void *e1, const void *e2)
//{
//	//��Ϊ����һ���Ƚ�int�����ݵĺ�������������֪���������ͣ�����ǿתΪint*��ָ��
//	if (*(int *)e1 > *(int *)e2)
//		return 1;
//	else if (*(int *)e1 < *(int *)e2)
//		return -1;
//	else
//		return 0;
//}
//�Ľ���
int cmp_int(const void *e1, const void *e2)
{
	return *(int *)e1 - *(int *)e2;
}

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void test1()
{
	//qsort ������������
	int arr[] = { 1, 5, 2, 4, 3, 5, 8, 6, 7, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}




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
	return strcmp(((struct Stu *)e1)->name,((struct Stu *)e2)->name);
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
	test1();
	test2();

	return 0;
}
*/



//ģ��ʵ��sqort
/*
void qsort(void *base, //��Ҫ������������ʼλ��
size_t num, //����������Ԫ�صĸ���
size_t width, //������Ԫ�صĴ�С����ռ�����ֽ�
int(*cmp)(const void *e1, const void *e2));//�Լ�����һ���ȽϺ�����e1 e2����Ҫ�Ƚϵ����������ĵ�ַ
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
	{
		printf("%d ", arr[i]);
	}
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