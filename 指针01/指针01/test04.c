#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
�ṹ�壺
1���ṹ�����͵�����
2���ṹ���ʼ��
3���ṹ���Ա����
4���ṹ�崫��
*/

//�ṹ�������
//�ṹ�Ļ���֪ʶ���ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա������b��ͬ���͵ı���

/*
//����һ��ѧ�������֡����䡢�绰���Ա�
//�ṹ�ĳ�Ա�����Ǳ��������顢ָ�룬�����������ṹ��
struct Stu
{
	//��Ա����
	char name[20];
	int age;
	char tele[12];
	char sex[5];
}s1,s2;
struct Stu s3;
//�����s1,s2,s3Ҳ�Ǵ�����������˼�����п���
//�������ڣ����ﴴ����s1��s2��s3��ȫ�ֱ����������洴����s�Ǿֲ�����

int main()
{
	//����һ��ѧ��
	struct Stu s;//s�Ǵ��������ı�����struct Stu��s���������ͣ�ͨ�����ʹ��������Ĺ��̳�Ϊʵ��������

	return 0;
}
*/



//�ṹ������Ķ���ͳ�ʼ��
/*
struct Point
{
	int x;
	int y;
};

struct S
{
	char arr[10];
	struct Point p;
	double d;
	int *ptr;
};

int main()
{
	//struct Point p = { 1, 2 };
	//printf("%d %d\n",p.x,p.y);
	int a = 2021;
	struct S s = { "ABCDEF", { 1, 2 }, 3.14, &a};
	printf("%s %d %d %lf %d\n", s.arr, s.p.x, s.p.y, s.d, *(s.ptr));

	return 0;
}
*/



//�ṹ���Ա����
/*
int main()
{


	return 0;
}
*/




//�ṹ�崫��
//�ṹ�崫�Σ��������ݵ�ַ��Ч�ʸ�
//�������ε�ʱ�򣬲�������Ҫѹե�ġ��������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ��ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½���
/*
struct S
{
	char arr[1000];
	int num;
	double d;
	
};

//��ֵ��ʱ���β���ʵ�ε�һ����ʱ������struct S�У�char arr����ϴ󣬿���һ������̫���ڴ棬����Ҫ�������ù�ȥ����ʱ��Ϳռ䶼����˷�
void print1(struct S s)
{
	printf("%s %d %lf\n",s.arr,s.num,s.d);
}

//��ԽϺã�ԭ��
//
void print2(struct S * ps)
{
	printf("%s %d %lf\n", ps->arr, ps->num, ps->d);
}

int main()
{
	struct S s = { "ABCDEF", 100, 3.14};
	//��ֵ
	print1(s);//print��������ӡ�ṹ�������
	//��ַ����һЩ
	print2(&s);//print��������ӡ�ṹ�������

	return 0;
}
*/


//ÿһ�κ������ã���Ҫ��ջ����Ϊ��������ռ䡣
//�����Ǵ��ұ߿�ʼ�� -- ��������Լ��
//�Ͽΰ���