#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//��������ָ������
/*
int main()
{
	int arr[5];//��������
	int* parr1[10];//����ָ�����飬10��Ԫ��
	int(*parr2)[10];//����ָ�룬ָ���������10��Ԫ��

	//һ��һ��������
	//parr3�Ⱥ�[10]�����ϣ�˵��parr3��һ�����飬��parr3���ߣ�ʣ�µ�int* [5]
	//ʣ�µ���һ������ָ��--ָ�������ָ��
	//����parr3��һ�����������ָ�������
	int(*parr3[10])[5];

	return 0;
}
*/


//���������ָ�����
//��д�����ʱ������Ҫ�ѡ����顿���ߡ�ָ�롿�����������Ǻ������������أ�
/*
//һά���鴫��
void test(int arr[])
{}
void test(int arr[10])
{}
void test(int *arr)
{}
void test2(int *arr2[20])
{}
void test2(int **arr2)
{}
int main()
{
	int arr[10] = { 0 };
	int *arr2[20] = { 0 };//ָ������
	test(arr);
	test2(arr2);

	return 0;
}
*/

/*
//��ά���鴫��
//�ܽ᣺��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]�����֡�
//��Ϊ��һ����ά���飬���Բ�֪���ж����У�������֪��һ���ж���Ԫ�أ������ŷ������㡣
void test(int arr[3][5])
{}
//void test(int arr[][]){}//���󣡣�����
void test(int arr[][5])
{}
//void test(int *arr){}//���󣡣���
//void test(int *arr[5]){}//���󣡣���
void test(int (*arr)[5])
{}
//void test(int **arr){}//���󣡣���
int main()
{
	int arr[3][5] = { 0 };
	test(arr);

	return 0;
}
*/





//һ��ָ�봫��
/*
void print(int *p, int sz)
{
	int i = 0;
	for (i = 0; i<sz; i++)
	{
		printf("%d\n", *(p + i));
	}
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int *p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//һ��ָ��p����������
	print(p, sz);
	return 0;
}
*/

//˼������һ�������Ĳ�������Ϊһ��ָ���ʱ�򣬺����ܽ���ʲô������
//���磺
/*
void test1(int *p)
{}
//test1�����ܽ���ʲô������
//ֻҪtest(���ʽ)��������ʽ�����������ֵ��һ��*p���͵ľͿ���
int main()
{
	int a = 10;
	int* pa = &a;
	int arr[10] = { 0 };
	test1(&a);
	test1(pa);
	test1(arr);

	return 0;
}
*/






//����ָ�봫��
/*
void test(int** ptr)
{
	printf("num = %d\n", **ptr);
}
int main()
{
	int n = 10;
	int*p = &n;
	int **pp = &p;
	test(pp);
	test(&p);
	return 0;
}
*/


//˼�����������Ĳ���Ϊ����ָ���ʱ�򣬿��Խ���ʲô������
/*
void test(char **p)
{}
int main()
{
	char c = 'b';
	char*pc = &c;
	char**ppc = &pc;
	char* arr[10];
	test(&pc);
	test(ppc);
	test(arr);

	return 0;
}
*/
