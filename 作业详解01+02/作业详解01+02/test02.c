#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

//1��
/*
���´�����������
�ȶ���һ��int���͵�arr���飬��ʼ��ֵΪ1 2 3 4 5
��arr�������Ԫ�ص�ַ��ֵ��ָ�����p����ǿתΪshort��
 1��00000000 00000000 00000000 00000001
 2��00000000 00000000 00000000 00000010
 3��00000000 00000000 00000000 00000011
 4��00000000 00000000 00000000 00000100
 5��00000000 00000000 00000000 00000101
short���͵ı���ռ2���ֽڣ�Ҳ����16������λ��
 1��00000000 00000001
 2��00000000 00000010
 3��00000000 00000011
 4��00000000 00000100
 5��00000000 00000101
 ѭ��4�Σ����ǽ�pÿһ������һ��short���͵ľ��룬Ҳ����ÿ���ƶ������ֽڣ�ֻ����8���ֽڵĶ�����Ϊ0��
 ��Ӧ��arr�����У�֮������int���͵�ǰ8���ֽڣ�Ҳ��������int���͵�����������0 0 3 4 5
 */
/*
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	short *p = (short*)arr;
	int i = 0;
	for (i = 0; i<4; i++)
	{
		*(p + i) = 0;
	}

	for (i = 0; i<5; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
*/


//2��
/*
���´�����������
������һ���޷��ų����͵����飬������ʼֵ��6 7 8 9 10��Ȼ������һ���޷��ų����ε�ָ�룬
Ȼ��������Ԫ�صĵ�ַ��ֵ��ָ�룬��ָ��Ŀǰָ���������Ԫ��
6�� 00000000 00000000 00000000 00000110
7�� 00000000 00000000 00000000 00000111
8�� 00000000 00000000 00000000 00001000
9�� 00000000 00000000 00000000 00001001
10��00000000 00000000 00000000 00001010
�޷��ų��������ڴ���ռ4���ֽڣ���32������λ
���׵�ַ+3����ǰŲ��3��unsigned int�ĳ��ȣ���3*4=12���ֽ�
��ָ��9��Ȼ��������б��ʽ��*(pulPtr + 3) = *(pulPtr + 3) + 3
�����н����ò���������ֵ+3=12
��ʱ��ӡ*pulPtr��Ϊ6���䣬*(pulPtr + 3)Ϊ12
*/
/*
int main(){
	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
	unsigned long *pulPtr;
	pulPtr = pulArray;
	*(pulPtr + 3) += 3;
	printf("%d, %d\n", *pulPtr, *(pulPtr + 3));
}
*/


//3�����д�������н����
/*
����������������Ȼ����ṹ�����͵ı�����������students�����У��ܹ�����3����ʱ����
num��	9801	9802	9803
name��	zhang	wang	zhao
age��	 20		 19		 18
Ȼ�����fun����������fun����ʱ����ʱָ��ָ��ڶ�����ʱ������
fun��������ָ������������д�ӡ����ʱ��ӡwang
*/
/*
//����һ��struct stu�Ľṹ������
struct stu
{
	int num;
	char name[10];
	int age;
};

//����һ��fun��������������Ϊ��
void fun(struct stu *p)
{
	printf("%s\n", (*p).name);
	return;
}


int main()
{
	struct stu students[3] = { { 9801, "zhang", 20 },
	{ 9802, "wang", 19 },
	{ 9803, "zhao", 18 }
	};
	fun(students + 1);
	return 0;
}
*/



//4�����д�������н��
/*
������һ�����α���a������a�����˵�ַ��
��a��������ȡ��ַ��������ǿתΪchar���͵�ָ�����������a�ĵ�ַ��ֵ��ָ�����pc
����*pc=0��������a=0��
*/
/*
int main()
{
	int a = 0x11223344;
	char *pc = (char*)&a;
	*pc = 0;
	printf("%x\n", a);
	return 0;
}
*/


//5��
/*
ʹ��ָ���ӡ�������ݣ�
дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
arr��һ������һά���顣
*/
/*
void init(int *arr,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = i;
	}
}

void print_arr(int *arr,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",*(arr + i));
	}
	printf("\n");
}

int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	init(arr,sz);
	print_arr(arr,sz);

	return 0;
}
*/


//6��
/*
�ַ�������
дһ����������������һ���ַ��������ݡ�
*/
/*
void revise_str(char *str, int sz)
{
	int start = 0;
	int end = sz-1;
	while (start < end)
	{
		int tmp = str[start];
		str[start] = str[end];
		str[end] = tmp;
		start++;
		end--;
	}

}
int main()
{
	char str[100] = {0};
	gets(str);

	int sz = strlen(str);
	printf("%s\n", str);
	revise_str(str, sz);
	printf("%s\n", str);

	return 0;
}
*/





//7��
/*
������ͣ�
��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
���磺2+22+222+2222+22222
2=0+(2*1)
22=2+(2*10)
222=22+(2*100)
2222=222+(2*1000)
22222=2222+(2*10000)
*/
//�Լ�д��
/*
int Sum_a(int a)
{
	int sum = 0;
	int ret = 0;
	int i = 0;
	static int k = 0;
	for (i = 0; i < 5; i++)
	{
		//sum=0+(2*1)=2				k=2
		//sum=2+(2*10)=22			k=22
		//sum=22+(2*100)=222		k=222
		//sum=222+(2*1000)=2222		k=2222
		//sum=2222+(2*10000)=22222	k=22222
		ret = (k + (a * pow(10, i)));
		sum += ret;
		k = ret;
	}
	return sum;
	
}

int main()
{
	printf("%d\n", 2 + 22 + 222 + 2222 + 22222);
	int a = 0;
	scanf("%d", &a);
	int Sn = Sum_a(a);
	printf("%d\n", Sn);
	

	return 0;
}*/
//��ʦд��
/*
int main()
{
	int a = 0;
	int n = 0;
	scanf("%d %d",&a,&n);
	int sum = 0;
	int i = 0;
	int k = 0;
	for (i = 0; i < n; i++)
	{
		k = k * 10 + a;
		sum += k;
	}
	printf("%d\n",sum);

	return 0;
}
*/


//8��
/*
��ӡˮ�ɻ���
���0��100000֮������С�ˮ�ɻ������������
��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ���������:153��1^3��5^3��3^3����153��һ����ˮ�ɻ�������
*/
/*
int judge_number(int k)
{
	int count = 0;
	while (k != 0)
	{
		k /= 10;
		count++;
	}
	return count;
}
int judge_water(int i,int ret)
{
	int n = 0;
	int sum = 0;
	int m = i;
	while (i != 0)
	{
		n = i % 10;
		i = i / 10;
		sum += (int)pow(n, ret);
	}
	if (sum == m)
		return 1;
	else
		return 0;
}
int main()
{
	int i = 0;
	for (i = 0; i < 100000; i++)
	{
		int ret = judge_number(i);
		int num = judge_water(i,ret);
		if (num)
			printf("%d ",i);
	}
}
*/
//��ʦд
/*
int main()
{
	int i = 0;
	for(i = 0; i <= 100000; i++)
	{
		int sum = 0;
		//�ж�i�Ƿ�Ϊ������
		//1������i��λ��n
		int tmp = i;//123
		int n = 1;
		while(tmp/10)
		{
			n++;
			tmp /= 10;
		}
		//2����ȡi��ÿһλ��������ÿһλ��n�η�֮��
		tmp = i;
		while(tmp)
		{
			sum += pow(tmp % 10);
			tmp /= 10;
		}
		//3���жϲ����
		if(sum == i)
		{
			printf("%d ",i);
		}
	}
	
	return 0;
}
*/



//9����ӡ����
/*
      *
	 ***
	*****
   *******
    *****
	 ***
	  *
�����ӡline�У������ӡline-1�У��ֿ�ʵ��
*/
/*
int main()
{
	int line = 0;
	scanf("%d",&line);
	//��ӡ�ϰ벿��--line
	int i = 0;
	for (i = 0; i < line; i++)
	{
		//��ӡһ��
		//�ո�
		int j = 0;
		for (j = 0; j < line-1-i; j++)
		{
			printf(" ");
		}
		//*��
		for (j = 0; j < 2*i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	//��ӡ�°벿��--line-1
	for (i = 0; i < line - 1; i++)
	{
		//��ӡһ��
		//�ո�
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		//*��
		for (j = 0; j < 2 * (line -1-i)- 1; j++)
		{
			printf("*");
		}
		printf("\n");

	}

	return 0;
}
*/



//10��
/*
����ˮ����
����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
*/
/*
int main()
{
	int money = 0;
	scanf("%d",&money);//20
	
	int total = 0;
	int empty = 0;

	total += money;
	empty += money;

	//�û�
	while (empty >= 2)
	{
		total += empty / 2;
		empty = (empty / 2) + (empty % 2);
	}
	printf("total = %d\n",total);

	return 0;
}
*/

//����������㣺���Ƿ���total=money*2 - 1
//�Ż�����
/*
int main()
{
	int money = 0;
	scanf("%d", &money);//20
	int total = 0;

	if (money > 0)//�����������ж�����������ǮΪ0����ҪǷһƿ
		total = money * 2 - 1;
	printf("total = %d\n", total);

	return 0;
}
*/