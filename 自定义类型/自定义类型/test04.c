#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stddef.h>


//������ - �ֳ�Ϊ������
//��c��i��ֵ����Ҳ��ı䣬��i��c��ֵ����Ҳ��ı䡣
//ͬһʱ��ֻ����һ��

//���ϵĳ�Ա�ǹ���ͬһ���ڴ�ռ�ģ�����һ�����ϱ����Ĵ�С������������Ա�Ĵ�С����Ϊ�������ٵ����������������Ǹ���Ա����
/*
union Un
{
	char c;
	int i;
};

int main()
{
	union Un u;

	//��������ַ��ӡ������һ����
	printf("%p\n", &u);//0137F8CC
	printf("%p\n", &(u.c));//0137F8CC
	printf("%p\n", &(u.i));//0137F8CC

	printf("%d\n", sizeof(u));//4

	u.i = 0x11223344;
	u.c = 0x55;
	printf("%x\n", u.i);//0x11223355
	//С�˴洢���Ȱ�i�Ž�ȥ
	// 44 33 22 11
	// 55 
	// 55 33 22 11
	//Ȼ��16���ƴ�ӡ��11 22 33 55

	return 0;
}
*/



//�жϵ�ǰ�����Ǵ�˻���С�˴洢
/*
int main()
{
	int a = 1;//0x 00 00 00 01
	//�͵�ַ  ---------  �ߵ�ַ
	//		01 00 00 00   -С��
	//		00 00 00 01	  -���

	if (1 == *(char*)&a)
		printf("С��\n");
	else
		printf("С��\n");

	return 0;
}
*/

/*
//ԭ����
int check_sys()
{
	int a = 1;

	if (1 == *(char*)&a)
		return 1;
	else
		return 0;

}

//�Ľ���
int check_sys()
{
	int a = 1;

	return *(char*)&a;

}

int main()
{
	int ret = check_sys();
	if (1 == ret)
		printf("С��\n");
	else
		printf("С��\n");

	return 0;
}
*/

/*
int check_sys()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;

	return u.c;

}

int main()
{
	int ret = check_sys();
	if (1 == ret)
		printf("С��\n");
	else
		printf("С��\n");

	return 0;
}
*/





//�������С�ļ���
/*
���ϴ�С�ļ���
���ϵĴ�С����������Ա�Ĵ�С�� -- ���٣�������

������Ա��С����������������������ʱ�򣬾�Ҫ���뵽������������������
*/

/*
union Un1
{
	//������8���бȽϣ�Ȼ��ȡС�ĵ���������
	//�����ǰ���ÿ����Ա���ж��룬char c[6] - �����������1
	char c[6];
	int i;//������ - 4

	//��1 4 ��ѡȡ������Ϊ�������������������������С
	//����������Ĵ�СΪ4��������
};
union Un2
{
	short c[7];//2 8 ѡȡ2��ÿһ��ռ2���ֽڣ���7�������Թ�14���ֽ�
	int i;//4 8 ѡȡ4��int����ռ��4���ֽ�
	//2 4ѡȡ4��Ϊ�����������������������С
	//�������С����Ϊ14��Ȼ�������ۼӣ���4�ı�����Ϊ16
};


int main()
{
	union Un1 u1;
	union Un2 u2;
	//��������Ľ����ʲô��
	printf("%d\n", sizeof(u1));//8
	printf("%d\n", sizeof(u2));//16

	return 0;
}
*/