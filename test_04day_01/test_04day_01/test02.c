# include <stdio.h>

//��ϰ
//��ϰ1���ж�һ�����Ƿ�Ϊ����
/*
int main(){
	int num = 0;
	scanf("%d\n",&num);
	if (num % 2 == 1){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}

	return 0;
}
*/

//��ϰ2�����1-100������
/*
int main(){
	int i = 0;
	for (i == 1; i <= 100; i++){
		if (i % 2 == 1){
			printf("%d\n",i);
		}
	}

	return 0;
}
*/

/*
int main(){
	int i = 0;
	for (i == 1; i <= 100; i += 2){
		printf("%d\n",i);
	}

	return 0;
}
*/

//��ϰ3�����´������������
/*
int main(){
	int n = 1;
	int m = 2;

	switch (n){
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n)
		{//switch����Ƕ��ʹ��
		case 1:
			n++;
		case 2:
			m++;
			n++;
			break;
		}
	case 4:
		m++;
		break;
	default :
		break;
	}
	printf("m = %d,n = %d\n",m,n);
	//m=5
	//n=3

	return 0;
}
*/


//�ж����´�����������ӡ0-9
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

//��ϰ4���ж�����ѭ��ѭ�����ٴ�
	/*
	int main(){
		int i = 0;
		int k = 0;
		for (i = 0, k = 0; k = 0; i++, k++)
			k++;
		return 0;
	}
	//һ��Ҳû��ѭ��
	//�ڶ������ʽ�����жϣ��Ǹ�ֵ��k=0��0Ϊ�٣�����һ�β�ִ��
	*/