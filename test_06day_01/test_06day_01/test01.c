#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//����


/*
int Add(int x,int y)
{
	return (x + y);
	//������Ҫ�ں�����д�д�ӡ�ȹ��ܣ������ĺ������߱������ԡ�
}

int main()
{
	int a = 10;
	int b = 20;
	int ret = Add(a, b);
	printf("%d\n",ret);



	return 0;
}
*/


/*
//--------------------------strcpy
int main()
{
	char arr1[] = "bit";//����Դ
	char arr2[] = "xxxxxxxxxxxxxxxx";//Ŀ�ĵ�
	//��ʵ������ȥ���±�4������ʣ�µ�x����Ĭ�ϵ�0�����Ǵ�ӡֻ��ӡbit����Ϊ��arr1�е�bit\0������ӡ�����ˣ�����\0��ֹͣ��

	strcpy(arr1, arr2);
	printf("%s\n",arr2);//bit



	return 0;
}
*/


//--------------------------memset
/*
int main()
{
	char arr[] = "hello bit";//���ǰ�hello bit�ŵ�������ȥ�ˣ��ŵ����������ڴ���ȥ�����Գ�֮Ϊ�ڴ��
	memset(arr, 'x', 5);

	printf("%s\n", arr);//xxxxx bit



	return 0;
}
*/


/*
//int  ����ֵ����
//get_max  ������
//int x��int y�������б�
//{}������-������ʵ��
int get_max(int x,int y)
{
	return (x > y) ? (x) : (y);
}

int main()
{
	int a = 10;
	int b = 20;
	int max = get_max(a, b);//�ҳ����������еĽϴ�ֵ

	printf("max = %d\n",max);



	return 0;
}
*/

/*
void Swap(int x, int y)
{
	int temp = 0;
	temp = x;
	x = y;
	y = temp;

}

int main()
{
	int a = 10;
	int b = 20;
	//д����������a��b��ֵ
	printf("a = %d b = %d\n", a, b);//����ǰ
	Swap(a, b);
	printf("a = %d b = %d\n", a, b);//������

	//���������н����Ժ󣬽�����д���û�иı䡣
	//��Swap�������棬x��y��ֵȷʵ�����˽���������������main�����a��b��ֵû�иı䡣
	//�����������е�ʱ��a��b���Դ������Լ����ڴ�ռ䣬��Swap�����s��yҲ���Դ������Լ����ڴ�ռ䡣
	//�ڽ���Swap����ʱ��x��yȷʵ�õ���a��b��ֵ��10��20�������и��Ե��ڴ�ռ䣬�����ں��������temp�����ʱ��������x��y�����˽�����
	//����x��y֮�󣬲�Ӱ��a��b����Ϊ��������ͬ���ڴ�ռ䡣

	return 0;
}
*/



/*

//�Ľ�����ָ��
//void Swap1(int x, int y)//�β�
//{
//	int temp = 0;
//	temp = x;
//	x = y;
//	y = temp;
//
//}

//ΪʲôSwap1���У���Swap����ʵ���أ�
//�������ε�ʱ��
//ʵ�δ��ݸ��βΣ��β���ʵ�ε�һ����ʱ������
//���βε��޸Ĳ���Ӱ��ʵ�Ρ�

//Swap�����ǵ�ַ���β�����õ�����ʵ�εĵ�ַ��ͨ����ַ�����һص�ʵ�Ρ�

void Swap(int* px, int* py)//�β�
{
	int temp = *px;
	*px = *py;
	*py = temp;

}

int main()
{
	int a = 10;
	int b = 20;
	//д����������a��b��ֵ
	printf("a = %d b = %d\n", a, b);//����ǰ
	//Swap1(a, b);//ʵ��
	Swap(&a, &b);//ʵ��
	printf("a = %d b = %d\n", a, b);//������

	//��ȥ�������Swap������ϵͳ����� px��py ����ռ䡣


	return 0;
	}

*/

/*
int main(){
	
	int a = 10;
	int b = 20;

	int * pa = &a;
	int * pb = &b;

	test1(pa,pb);//��ֵ
	test1(&pa,&pb);//��ַ


	return 0;
}
*/