#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//���ַ�����/�۰����
/*
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};//��������
	//����arr������������в���һ������k

	int k = 0;
	//sizeof(arr)--�������������ܴ�С����λ���ֽ�--40
	//sizeof(arr[0])--������������һ��Ԫ�صĴ�С--4
	int sz = sizeof(arr) / sizeof(arr[0]); // 10
	scanf("%d",&k);

	//�۰����
	//1���ҳ�������м�Ԫ��	����������Ԫ���±�����м�Ԫ�ص�ȷ����
	//2���м�Ԫ�غ�k�Ƚϣ�ȷ���µĲ��ҷ�Χ
	//left = 0  5 8 9	10
	//right = 9 9 9  9	9
	//mid = 4(5) 7(8) 8(9) 9(10)
	//k = 22      22    22  22

	int left = 0;
	int right = sz - 1;

	while (left <= right){
		//int mid = (left + right) / 2;//����ط���̫�ã����һ����Ŀ��left��right��û�г���int��Χ���������������ˣ��ͻᶪ��һЩֵ�����º��������������

		int mid = left + (right - left) / 2;//���ַ����϶��������
		if (k > arr[mid])
		{
			left = mid + 1;
		}
		else if (k < arr[mid])
		{
			right = mid - 1;
		} 
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n",mid);
			break;
		}

	}

	//�������´����ʱ�������������
	//1��while������жϱ��ʽ������
	//2������else��Ȼ��break����������˵���ҵ���
	//�����������棬Ӧ�ô����������Ĵ��룬��left>right

	if (left > right)
	{
		printf("�Ҳ�����\n");
	}



	return 0;
}
*/


/*
#include <limits.h>

int main()
{
	//int a = INT_MAX;//INT_MAX��int���͵����ֵ��2147483647
	int a = 2147483646;
	int b = 2147483646;
	int c = (a + b) / 2;
	printf("%d\n",c);//-2


	return 0;
}
*/


/*
//��д���룬��ʾ����ַ��������ƶ������м��ۡ�
//welcome to bit!!!!!
//###################
//w#################!
//we###############!!
//������
//welcome to bit!!!!!

#include <string.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
	char arr1[] = "welcome to bit!!!!!";
	char arr2[] = "###################";
	char buf[] = "bit";
	//[b i t \0]
	// 0 1 2  3
	//sizeof(buf)/sizeof(buf[0]) - 2//������\0
	//strlen(buf) - 1

	int left = 0;
	int right = strlen(arr1) - 1;
	printf("%s\n", arr2);
	Sleep(1000);//����
	system("cls");

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n",arr2);
		Sleep(1000);//����
		system("cls");//system���������ִ��ϵͳ����ĺ�����cls�����Ļ
		left++;
		right--;
	}
	printf("%s\n", arr2);


	return 0;
}
*/


/*
//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ����ʾ��½�ɹ���������ξ�����������˳�����
//����������пո�������gets����ȡ��getchar�Ƕ�ȡ�ַ��ģ���scanf��%d��%s��û��Ҫ���ǿո�
int main()
{
	int i = 0;
	//�����������
	char password[20] = { 0 };

	//������ȷ���������ַ�����123456

	for (i = 0; i < 3; i++)//��ȷ��ʾѭ�����Σ���for���
	{
		printf("���������룺->\n");
		scanf("%s",password);//�������������е�ַ�����ﲻ��Ҫȡ��ַ����

		//�����ַ����ıȽϣ�����ʹ��==��Ӧ��ʹ��strcmph����
		//strcmph����--�о�����ֵ--����int��
		//<0��string 1 С�� string 2
		//0��string 1 ���� string 2
		//>0��string 1 ���� string 2
		//abcdef < abcf //�Ƚϵ���ASCii

		if (strcmp("123456",password) == 0)//�����ַ����Ƚϣ����Բ����õȺţ�������������
		{
			printf("������ȷ����¼�ɹ���\n");
			break;
		}
		else
		{
			printf("�������\n");
		}

	}
	
	if (i == 3)
	{
		printf("������������˳�����\n");
	}



	return 0;
}
*/
