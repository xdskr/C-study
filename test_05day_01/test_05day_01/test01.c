#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//��10�������е����ֵ
/*
int main(){
	int arr[10] = {123, 15, 7, 2, 4, 0, 89, 11, 66, 100 };
	int sz = sizeof(arr) / sizeof(arr[0]);//10


	int i = 0;
	int max = arr[0];

	for (i = 0; i < sz; i++){

		if (max < arr[i])
			max = arr[i];

	}
	printf("%d\n", max);


	return 0;
}
*/


/*
//��ӡ1000-2000�ڵ�����
int main(){
	int i = 0;

	for (i = 1000; i <= 2000; i++)
	{
		if (i % 400 == 0){
			printf("%d ����������\n", i);
		}

		if ((i % 4 == 0) && (i % 100) != 0){
			printf("%d ����ͨ����\n",i);
		}
		
	}

	return 0;
}
*/



/*
//��1-100������9���ֵĸ���
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i < 90){
			if (i % 10 == 9){
				count ++;
				printf("%d\n",i);
			}
		}
		if (i >= 90){
			if(i / 10 == 9){
				count++;
				printf("%d\n", i);
			}
		}

	}
	count++;//99������һ��
	printf("1-100�ڣ�9���ֵĴ���Ϊ��%d\n",count);
	return 0;
}
*/


/*
//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
int main()
{
	int i = 0;
	double sum = 0.0;
	for (i = 1; i <= 100; i++){
		if (i % 2 == 0)
			sum -= (1.0 / i);//1/i����������ͣ�ʼ��Ϊ0������ط�Ҫע��
		else
			sum += (1.0 / i);
	}
	printf("���Ϸ�ʽ�ĺ�Ϊ��%lf\n",sum);

	return 0;
}
*/


/*
//дһ�����룺��ӡ100-200֮�������
int main()
{
	int i = 0;
	int j = 0;
	for (i = 100; i <= 200; i++)
	{
		int k = 1;//��ʼ����־λ��ֵ��Ϊ��ʼ״̬1,������
		for (j = 2; j < i; j++)
		{
			if (i % j == 0){
				k = 0;
				break;//������˵���ҵ���һ��j������i�����������˳��Ϳ��ԣ�����Ҫ��ӡ����
			}
			
		} 

		if (k == 1){
			printf("%d ������!\n", i);
		}

	}


	return 0;
}
*/
