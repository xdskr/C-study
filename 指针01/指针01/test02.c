#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/*
ָ�����㣺
1��ָ�� + - ����
2��ָ�� - ָ��
3��ָ��Ĺ�ϵ����
*/

//ָ�� + - ����
/*
#define N_VALUES 5
int main()
{
	int arr[10] = { 0 };//�൱�����ڴ��п�����һ�������Ŀռ�
	int * p = arr;

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		//��һ���������p�ǲ����
		*(p + i) = i;

		//�������������p�ǲ��ϱ仯��
		//p++����ʹ����++���տ�ʼ��pָ���׵�ַ0��Ȼ������ã���ֵ0��Ȼ��p++��p���Ųһλ
		//*p++ = i;
		//ʹ�����ַ����������������ӡ֮ǰ������forѭ��֮ǰ��Ҫ����pָ����Ԫ�ص�ַ

	}

	//p = arr;//����ʹ�÷������ڽ��б�����ӡǰ���еĲ���

	for (i = 0; i < 10; i++)
	{
		//���Ƿ�����Ӧ�ķ���
		//printf("%d ", *p++);

		printf("%d ", *(p + i));
	}

	//����������õ���ָ�� + - ���������õ���ָ��Ĺ�ϵ����
	float values[N_VALUES];
	float *vp;
	for (vp = &values[0]; vp < &values[N_VALUES];)
	{
		*vp++ = 0;
	}



	return 0;
}
*/


//ָ�� - ָ��
/*
int main()
{
	int arr[10] = { 0 };
	printf("%d\n",&arr[9] - &arr[0]);//9
	printf("%d\n", &arr[0] - &arr[9]);//-9
	//ָ�� - ָ�� ֮���ֵ�ľ���ֵ�õ�����ָ���ָ��֮���Ԫ�ظ���

	char ch[5] = { 0 };
	printf("%d\n", &arr[9] - &arr[3]);//�ò���һ��׼ȷ�����err�������Ǵ���ġ�
	//��Ϊ����ֻ֪����������5��Ԫ�صĵ�ַ�������ģ������������������ǲ�֪����

	//ָ�� - ָ�� �����ǰ�᣺����ָ��ָ�����ͬһ�������Ŀռ�ġ�



	return 0;
}
*/

//ָ�� - ָ��ʵ��

//1���������ķ���
/*
int my_strlen(char * str)
{
	int count = 0;
	while (*str != '\0'){
		count++;
		str++;
	}
	return count;
}
*/
//2���ݹ�ķ���
/*
int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
*/
//3��ָ�� - ָ��ķ���
/*
int my_strlen(char * str)
{
	char * start = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - start;
}


int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n",len);//6

	return 0;
}
*/



//ָ��Ĺ�ϵ����
/*
#define N_VALUES 5
int main()
{
	float values[N_VALUES];
	float *vp;

	//��һ���Ƽ�
	for (vp = &values[N_VALUES]; vp > &values[0];)
	{
		*--vp = 0;
	}

	//������C���Ա�׼������֤����
	//��׼�涨������ָ������Ԫ�ص�ָ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��Ƚϣ����ǲ�������ָ��
	//��һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽϡ�
	for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
	{
		*vp = 0;
	}


	return 0;
}
*/






//ָ�������
/*
int main()
{
int arr[5] = {1,2,3,4,5};
int * p = arr;

int i = 0;
for (i = 0; i < 5; i++)
printf("%d ", *(p + i));

for (i = 0; i < 5; i++)
printf("&arr[%d] = %p <=====> %p\n", i, &arr[i], p+i);

return 0;
}
*/

/*
int main()
{
int arr[3][5] = { 0 };
arr;//��ά�����������Ҳ��������Ԫ�صĵ�ַ
//��ʾ���ǵ�һ�еĵ�ַ��������������������
//��һ���Ǹ�һά���飬��ʾ�����������ĵ�ַ
//������ĵ�ַ����ֵ�ϵ���������Ԫ�صĵ�ַ���������岻һ��
//�����ַ+1��������һ������
//������Ԫ�ص�ַ+1��������һ��Ԫ��

return 0;
}
*/