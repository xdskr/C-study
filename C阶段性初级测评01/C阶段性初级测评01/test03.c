#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/*
�������ַ�����
��һ�仰�ĵ��ʽ��е��ã���㲻���á����� I like beijing.�����������Ϊ��beijing.like I 
����������ÿ�������������1������������ I like beijing.�����������Ȳ�����100
��������������������֮����ַ���, �Կո�ָ�
ʾ��1�� 
���룺I like beijing.
�����beijing.like I
*/

//���䣺scanf�����ո�ͻ�ֹͣ�������ȡ�ո�
/*
int main()
{
	char arr[100] = { 0 };
	scanf("%s", arr);
	printf("%s\n", arr);
	//���룺ac def
	//��ӡ��ac
	//���������ո��ֹͣ

	return 0;
}
*/


//�Լ�д��strtok
//9��strtok
//char * strtok(char * str, const char * sep);
/*
sep�����Ǹ��ַ����������������ָ������ַ�����
��һ������ָ��һ���ַ�������������0�����߶����sep�ַ�����һ�����߶���ָ����ָ�ı�ǡ�
strtok�����ҵ�str�е���һ����ǣ��������� \0 ��β������һ��ָ�������ǵ�ָ�롣��ע��strtok������ı䱻�������ַ�����������ʹ��strtok�����зֵ��ַ���һ�㶼����ʱ���������ݲ��ҿ��޸ġ���
strtok�����ĵ�һ��������Ϊ NULL ���������ҵ�str�е�һ����ǣ�strtok���������������ַ����е�λ�á�
strtok�����ĵ�һ������Ϊ NULL ����������ͬһ���ַ����б������λ�ÿ�ʼ��������һ����ǡ�
����ַ����в����ڸ���ı�ǣ��򷵻� NULL ָ�롣
*/
/*
int main()
{
	char arr[] = "zpw@bitedu.tech";//@ . ��Ϊ�ָ���
	char arr2[30] = { 0 };
	strcpy(arr2, arr);//һ�㽨��һ����ʱ������п�������Ϊstrtok�������޸�Դ�ַ���

	char* p = "@.";//�ָ����ļ��ϵ��ַ��� - û���Ⱥ�˳��

	//�������������֪���ַ����������м����ָ�����ֻ��һ��һ����ӡ���Ƚ��鷳����������Ӧ��ʹ��ѭ����
	//printf("%s\n", strtok(arr2, p));
	//printf("%s\n", strtok(NULL, p));
	//printf("%s\n", strtok(NULL, p));

	char* ret = NULL;
	for (ret = strtok(arr2,p); ret != NULL; ret = strtok(NULL,p))
	{
	printf("%s\n", ret);
	}



	return 0;
}
*/

/*
void reverse(char* pparr, int k)
{
	char* start = pparr;
	char* end = pparr + k - 1;
	while (start < end)
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}

int main()
{
	char arr[100] = { 0 };
	gets(arr);
	char arr2[100] = { 0 };
	strcpy(arr2, arr);//һ�㽨��һ����ʱ������п�������Ϊstrtok�������޸�Դ�ַ���

	char* ps[100] = { 0 };

	char* p = " ";//�ָ����ļ��ϵ��ַ��� - û���Ⱥ�˳��


	char* ret = NULL;
	int i = 0;
	for (ret = strtok(arr2, p); ret != NULL; ret = strtok(NULL, p),i++)
	{
		ps[i] = ret;
		//printf("%s\n", ret);
	}
	

	reverse(ps,i);

	//������δ������������ӡ�������е�Ԫ��
	int j = 0;
	for (j = 0; j < i; j++)
	{
		printf("%s ", ps[j]);
	}


	return 0;
}
*/








//��ʦд��˼·��
//�Ȱ������ַ�������һ�£�I like beijing. --> .gnijieb ekil I
//Ȼ���ٰ�ÿ����������beijing. like I


/*
//�����ַ����ĺ���
void reverse(char* left, char * right)
{
	while (left < right)
	{
		char tmp = *right;
		*right = *left;
		*left = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[100] = { 0 };
	
	//���룺
	gets(arr);

	//����abc def ghi
	//1�����������ַ���
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	//2������ÿһ������
	char* start = arr;

	while (*start)
	{
		char* end = start;
		while ((*end != ' ') && (*end != '\0'))
		{
			end++;
		}
		//��ʱ��������end�ǿո�ĵ�ַ
		reverse(start, end - 1);
		if (*end == ' ')
			start = end + 1;
		else
			start = end;
		
	}


	//�����
	printf("%s\n", arr);
	
	return 0;
}
*/








