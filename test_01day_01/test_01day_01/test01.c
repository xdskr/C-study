//��һ������һ�㶼�ǣ�hello world

# define _CRT_SECURE_NO_WARNINGS	1
//�����������д��룬����һ�ַ�����
//# pragma warning(disable:4996)

# include <stdio.h>
//stdio -std ��׼��-i input��-o output����׼�������ͷ�ļ�
//.h-ͷ�ļ�

# include <stdlib.h>

//main -������
//�����Ǵ�main�����ĵ�һ��ִ�У�main�����ǳ������ڡ�
//һ�������ﲻ��û����ڣ���Ҳֻ������ֻ��һ����ڡ�

//�����int��ʲô��˼��main����Ҳ�Ǳ������������õģ�main����ִ����ϣ�
//�᷵��һ��int���ͣ�����һ��0��return 0

/*
//���void����ȷ��ʾ���ǵ�main��������Ҫ����
int main(void)
{
	return 0;
}
*/

/*
//��Ҫ���ò���
int main(int argc,char* argv[])
{
return 0;
}
*/

//���·����Ѿ���ʱ
/*
void main(void)
{
	printf("hehe\n");
}
*/

//-printf ���
//-scanf ����

/*
int main()
{
	int a = 0;
	scanf("%d",&a);
	printf("%d\n",a);

	return 0;
}
*/

//���򱨴�
//error C4996: 'scanf': This function or variable may be unsafe. Consider using scanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
//���������������ܲ���ȫ������ʹ��scanf_s���������������뿴��������棬��ʹ�ã�_CRT_SECURE_NO_WARNINGS
//scanf_s ���������VS�ṩ�ģ�����Ѵ������gcc�����������������򲻿ɿ�ƽ̨ʹ���ˡ�

//int main()
//{
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//
//	return 0;//����0��ʾ��ȷ����
//}
//�뿴һ�³�������ô���еģ���F10

/*
int main()
{
	//printf-��ӡ����-�⺯��
	//�⺯����ʹ�ã�Ҫ����ͷ�ļ������ø�ʽ��# include <stdio.h>
	printf("hello world\n");
	
	//system("pause");
	//system��һ��ִ��ϵͳ����ĺ���-pause��ͣ
	//system�ǿ⺯������Ҫ����ͷ�ļ�
	//ÿдһ������������Ҫ����仰���Ƚ��鷳��
	//������Ŀ���Եķ�����һ����Ŀ����һ�ξͿ��ԡ�

	return 0;
}
*/

//�����ļ�
//ctrl+F5
//���ctrl+f5û��Ӧ��fn+ctrl+f5���߹ص�fn����ctrl+f5
//fn-�������ܼ���
//����������ֱ�ӽ����ˣ�����û�п��������
//1��������Ŀ���ԣ�test_01day_01�Ҽ������ԣ���������ϵͳ����ϵͳ������̨
//2��system("pause");