/*
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void printf_screen()
{
	printf("********************\n");
	printf("*��ӭ������������Ϸ*\n");
	printf("********************\n");
	printf("*����1��������Ϸ!!!*\n");
	printf("*����0���˳���Ϸ!!!*\n");
}


int main()
{
	printf_screen();

	srand((unsigned int)time(NULL));
	int ret = rand() % 100 + 1;

	int i = 0;
	int guess = 0;

	while (scanf("%d\n", &i) != EOF)
	{
		if (i == 1){
			printf("��ӭ������������ϷŶ�ס�\n");
			while (1)
			{
				if (ret > scanf("%d", &guess))
					printf("���������ƫС�����������룺\n");
				if (ret < scanf("%d", &guess))
					printf("���������ƫС�����������룺\n");
				if (ret == scanf("%d",&guess))
				{
					printf("��ϲ��������ˣ�\n");
					break;
				}
			}

		}

		else if (i == 0){
			printf("����Ҫ�˳���Ϸ����ӭ�´ι��٣�\n");
			break;
		}

		else{
			printf("����������ֲ����Ϲ淶��������������Ϸ���밴1��������˳����밴2��\n");
			printf_screen();
		}

	}
	
	

	return 0;
}
*/
# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>


/*
int print_year(int * pyear){

	if (((*pyear % 4 == 0) && (*pyear % 100 != 0)) || (*pyear % 400 == 0))
		return 1;
	else
		return 0;

}


int main()
{
	int year = 0;
	int month = 0;
	int day = 0;


	while ((scanf("%d %d", &year, &month)) != EOF){
		switch (month)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:{
					printf("%d\n", 31);
					break;
			}
			case 4:
			case 6:
			case 9:
			case 11:{
					printf("%d\n", 30);
					break;
			}
			default:{
					int ret = print_year(&year);
					if (ret == 1)
						printf("%d\n", 29);
					else
						printf("%d\n", 28);
					break;
			}
		}

	}



	return 0;
}
*/



//#include <stdio.h>
//
//int max(int arr[], int sz)
//{
//	int i = 0;
//	int max = arr[0];
//	for (i = 1; i<sz; i++){
//		if (max < arr[i]){
//			max = arr[i];
//		}
//	}
//	return max;
//}
//
//int min(int arr[], int sz)
//{
//	int i = 0;
//	int min = arr[0];
//	for (i = 1; i<sz; i++){
//		if (min > arr[i]){
//			min = arr[i];
//		}
//	}
//	return min;
//}
//
//
//int main()
//{
//	int arr[20] = { 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	float main_value = 0.0;
//	int sum = 0;
//	int main_max = 0;
//	int main_min = 0;
//
//	while (scanf("%d ", arr) != EOF){
//		int main_max = max(arr, sz);
//		int main_min = min(arr, sz);
//
//		int i = 0;
//		for (i = 1; i < sz; i++){
//			sum += arr[i];
//		}
//	}
//
//	sum -= (main_max + main_min);
//
//	main_value = (float)sum / (sz - 2);
//	printf("%.1f\n", main_value);
//
//
//
//	return 0;
//}