#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>


//��ϰ1������1-n�Ľ׳ˣ�n��
/*
int main(){

	int n = 0;
	scanf("%d",&n);
	//
	int i = 0;
	int result = 1;
	for (i = 1; i <= n; i++){
		result *= i;
	}

	printf("%d\n",result);
	//n��Ҫ����Ҫ��Ȼ����int��Χ���������׳���

	return 0;
}
*/

//��ϰ2������1��+2��+...+10��
//���´��������⣬ÿ�ν���ڶ���forѭ����ʱ��result��ֵ���Ǵ�1��ʼ������Ӧ��������
//��һ�����ᵼ�´����ظ��ļ��㣬����Ѿ��õ�3!����*4����4��
/*
int main(){

	int result = 1;
	int sum = 0;
	int i = 0;
	int j = 0;

	for ( i = 1; i <= 10; i++)
	{
		result = 1;//��result��ʼ��
		for ( j = 1; j <= i; j++)
		{
			result *= j;
		}
		sum += result;
	}

	printf("%d\n",sum);

	return 0;
}
*/

//������
/*
int main(){

	int result = 1;
	int sum = 0;
	int i = 0;

	for (i = 1; i <= 10; i++)
	{
		result *= i;
		sum += result;
	}

	printf("%d\n", sum);

	return 0;
}
*/

//��ϰ3��
//��һ��
/*
int main(){
	
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//10 * 4 = 40���ֽ�
	int k = 7;
	//������������в��Ҿ����ĳ����
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//40 / 4 = 10

	for (i = 0; i < sz; i++){
		if (arr[i] == k){
			printf("�ҵ��ˣ��±���:%d\n",i);
			break;
		}
	}
	if (i == sz){
		printf("û�ҵ�\n");
	}

	return 0;
}
*/

//������
/*
int main(){

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//10 * 4 = 40���ֽ�
	int k = 7;
	//������������в��Ҿ����ĳ����
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//40 / 4 = 10

	int left = 0;
	int right = sz - 1;

	while (left <= right){

		int mid = (left + right) / 2; //���һ������ѭ������ģ���Ϊÿ���µ�ѭ�����м�ֵ�϶���ͨ���µ����������õġ�

		if (arr[mid] > k){
			right = mid - 1;
		}
		else if (arr[mid] < k){
			left = mid + 1;
		}
		else{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}

	}
	if (left > right){
		printf("�Ҳ�����\n");
	}


	return 0;
}
*/




/*
#include <stdio.h>
int main()
{
	int a = 0, b = 0;
	for (a = 1, b = 1; a <= 100; a++)
	{
		if (b >= 20) break;
		if (b % 3 == 1)
		{
			b = b + 3;
			continue;
		}
		b = b - 5;
	}
	printf("%d\n", a);
	return 0;
}
//a=1 a=2 a=3 a=4 5 6 7 8 
//b=4 b=7 b=10 b=13 16 19 22
*/

/*
//��ӡ�����������Լ��
int compare(int x, int y){
	return x <= y ? x : y;
}

int main(){
	int i = 0;
	int j = 0;
	int result1 = 0;

	scanf("%d %d",&i,&j);

	result1 = compare(i,j);

	if ((i%result1 == 0) &&(j%result1 == 0)){
		printf("%d��%d�����Լ���ǣ�%d\n",i,j,result1);
	}
	else if (((i % 2 == 0) && (j % 2 != 0)) || ((i % 2 != 0) && (j % 2 == 0))){
		printf("%d��%d�����Լ���ǣ�1", i, j);
	}
	else{
		if (result1 % 2 == 0){
			while (!((i % result1 == 0) && (j % result1 == 0)))
			{
				result1 /= 2;
			}
			printf("%d��%d�����Լ���ǣ�%d\n", i, j, result1);
		}
		else if (resu=lt1 % 2 == 0){
			while (!((i % result1 == 0) && (j % result1 == 0)))
			{
				result1 /= 3;
			}
			printf("%d��%d�����Լ���ǣ�%d\n", i, j, result1);
		}

	}

	return 0;
}
*/

/*
//����˷��ھ���
int main()
{
	int i = 0;
	int j = 0;

	for (i = 1; i <= 9;i++)
	{
		for (j = 1; j <= i;j++)
		{
			printf("%d * %d = %d ",j,i,j*i);
		}
		printf("\n");
	}

	return 0;
}
*/





/*
 //д3���������Ӵ�С���
int compare_2(int x, int y)
{
	return x >= y ? x : y;
}

void compare_3(int x,int y,int z)
{
	if ((x >= y) && (x >= z))
	{
		int result1 = compare_2(y,z);
		if (result1 == y)
			printf("�����������Ӵ�С�ǣ�%d %d %d\n", x, y, z);
		else
			printf("�����������Ӵ�С�ǣ�%d %d %d\n", x, z, y);
	}

	else if ((y >= x) && (y >= z))
	{
		int result2 = compare_2(x, z);
		if (result2 == x)
			printf("�����������Ӵ�С�ǣ�%d %d %d\n", y, x, z);
		else
			printf("�����������Ӵ�С�ǣ�%d %d %d\n", y, z, x);
	}

	else if ((z >= x) && (z >= y))
	{
		int result3 = compare_2(x, y);
		if (result3 == x)
			printf("�����������Ӵ�С�ǣ�%d %d %d\n", z, x, y);
		else
			printf("�����������Ӵ�С�ǣ�%d %d %d\n", z, y, x);
	}
}

int main()
{
	int m = 0;
	int n = 0;
	int k = 0;

	scanf("%d %d %d",&m,&n,&k);

	compare_3(m, n, k);


	return 0;
}
*/


//���չ̶���Χ�ڵ��ַ�
/*
int main(){
	while ((ch = getchar()) != EOF){
		if (ch < '0' || ch > '9')
			continue;
		putchar(ch);
	}

	return 0;
}
*/





