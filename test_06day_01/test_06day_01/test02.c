#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>



/*
//is_prime(i)
//����1--������
//����0--��������
//ʵ�������β����ǿ���һ���ġ�
int is_prime(int i)
{
	//�ж�i�Ƿ�Ϊ����
	int j = 0;
	for (j = 2; j < i; j++)
	{
		if (i % j == 0){
			return 0;
			break;
		}

	}
	return 1;
}

int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
		{
			printf("%d ", i);
		}
	}
	

	return 0;
}
*/


//�ж������Ǹ��ط�������ôд��
//return (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0));
//��Ϊ����������ʽ��Ϊ���򷵻�1����Ϊ�٣��򷵻�0





/*


//���ַ�����
//int binary_research(int arr[10000],int k ,int sz)
//������д���ֶ���У�����ȥ�������顣

//�βν������� int arr[] ��int *arr�������ǰ�
int binary_research(int arr[],int k ,int sz)

{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > k)
			right = mid - 1;
		else if (arr[mid] < k)
			left = mid + 1;
		else{
			return mid;
			//break;//return �Ѿ������ˣ���ʱ��breakûʲô���塣
			//return��breakǿ������returnֱ�ӷ��أ���breakֻ�����������forѭ��
		}
	}

	//if (left > right)
	//���Բ����жϣ�ֻҪѭ����������֤��û�������ҵ���ֱ�ӷ���-1�Ϳ��ԡ�
		return -1;

}
int main()
{
	//�����
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	//���ֲ��ң��ҵ��˷����±ꣻ�Ҳ�������-1
	int sz = sizeof(arr) / sizeof(arr[0]);

	//arr�����飬arr��Ϊ���������ε�ʱ�򣬲�����������鴫��ȥ��
	//ʵ�ʴ��ݵ���������Ԫ�صĵ�ַ������������ĵ�ַ��
	//int binary_research(int *arr[],int k)ʵ���ڷ��������������ݵģ�����ȥ������Ԫ�صĵ�ַ��
	//int ret = binary_research(arr, k);
	//����

	int ret = binary_research(arr, k,sz);
	if (ret == -1)
	{
		printf("�Ҳ���!\n");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n",ret);
	}

	return 0;
}

*/


//дһ��������ÿһ�ε��ö�����num+1
//��ΪҪ����Add������ʹ�ⲿ�����ı��������仯������Ҫ��ַ

void Add(int *ps)
{
	(*ps)++;
	//���������������ţ����++���Ƕ�ps���еģ���������ţ�����������*ps��
}

int main()
{
	int num = 0;
	Add(&num);
	printf("%d\n", num);//1

	Add(&num);
	printf("%d\n", num);//2

	Add(&num);
	printf("%d\n", num);//3

	Add(&num);
	printf("%d\n", num);//4

	Add(&num);
	printf("%d\n", num);//5


	return 0;
}