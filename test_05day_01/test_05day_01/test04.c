#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



/*
//go to ���
int main()
{
flag:
	printf("hehe\n");
	printf("hehe\n");
	printf("hehe\n");
	printf("hehe\n");
	goto flag;//ֻ����һ������������ת������ȥ��������
	//������ʹ��go to

	//go to�������ʺϵĳ��������forѭ��Ƕ��

	return 0;
}
*/



//дһ���ػ�����
//1�����ڹػ�
//һ���������룺������ȡ���ػ�
/*
int main()
{
	//shutdown -s -t ����ʱ��ػ�
	
	char input[20] = "";
	system("shutdown -s -t 60");//һ��ִ�У�����ʱ�ػ�
again:
	printf("��ע�⣬��ĵ��Խ���1�����ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s",input);

	if (strcmp(input, "������") == 0){
		system("shutdown -a");//ȡ���ػ�
	}
	else{
		goto again;
	}


	return 0;
}
*/


//���ϴ��벻����goto���
/*
int main()
{
	//shutdown -s -t ����ʱ��ػ�

	char input[20] = "";
	system("shutdown -s -t 60");//һ��ִ�У�����ʱ�ػ�
	while (1){
		printf("��ע�⣬��ĵ��Խ���1�����ڹػ���������룺��������ȡ���ػ�\n");
		scanf("%s", input);

		if (strcmp(input, "������") == 0){
			system("shutdown -a");//ȡ���ػ�
		}
		 
	}


	return 0;
}
*/