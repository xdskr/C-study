#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//һЩ����ʵ��

//ʵ��1����1! + 2! + ... +n!���������
/*
int main()
{
	int n = 0;
	//scanf("%d",&n);
	//��n�Ľ׳�
	int i = 0;
	int ret = 1;
	int sum = 0;

	for (n = 1; n <= 3; n++)
	{
		//ÿ�ν����ʱ��retӦ����1
		//���Ͻ��е��ԣ��ҳ�ԭ��
		ret = 1;
		for (i = 1; i <= n; i++)
		{
			ret *= i;
		}
		sum += ret;
	}

	printf("%d\n",sum);

	return 0;
}
*/

//ʵ��2����Release���Ա��⣬����Release�汾�����Ż����룬��i�ĵ�ַС��arr[9]
//�������Է��֣�arr[12]����i

//���ԣ��������ʵ���Խ������£��ͻᵼ��Խ����ʵ�ѭ������i���ı�i���Ϳ��ܵ�����ѭ��
//Linux�¿�1����vs��2����vc6.0����
//��ʵ��main�������ٵ�ջ��û��ô�����������i�ĵ�ַ���벻Զ��һ��Խ�磬�ͻ�����������⡣
/*
int main()
{
	//����ȶ���arr���ٶ���i���ͻ������������
	int i = 0;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("%p\n", &i);
	printf("%p\n", arr[9]);
	//arr[9]�ĵ�ַһ����iС

	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("hehe\n");
	}

	return 0;
}
*/