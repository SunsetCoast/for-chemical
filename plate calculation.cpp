#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void JingLiu(double a,double JiaoDian,double R)
{
	int i = 0;
	double x = 0;
	double y = 0;
	double XD = 0.995;
	double num1 = 0;
	printf("������y1��ֵ:");
	scanf("%lf", &y);
	printf("�����Ǿ�����������ļ���\n");
	while (1)
	{

		num1 = a / y - a + 1;//1/x1
		x = 1 / num1; //x1
		y = x * R / (R + 1) + XD / (R + 1); //y2
		i++;
		printf("X%d", i);
		printf(" %lf", x);
		printf("\n");
		printf("Y%d", i + 1);
		printf(" %lf", y);
		printf("\n");
		if (x < JiaoDian)
		{
			printf("�����������Ϊ��%d\n", i-1);
			printf("����µ����ڶ�λY��ֵ\n");
			printf("����μ�����Ҫ�ֶ����뵹���ڶ�λY��ֵ\n");
			break;
		}
	}
}

void TiLiu(double a,double R, double q)
{
	int i = 0;
	double x = 0;
	double Xw = 0.005;
	double num2 = 0;
	double L = 0;
	double V = 0;
	double F = 0;
	double W = 0;
	double D = 0;
	double y = 0;
	printf("������������������ļ���\n");
	printf("������F��ֵ:");
	scanf("%lf", &F);
	printf("������W��ֵ:");
	scanf("%lf", &W);
	printf("������D��ֵ:");
	scanf("%lf", &D);
	printf("�����뾫������������㵹���ڶ�λY��ֵ��");
	scanf("%lf", &y);
	L = R * D + q * F;
	V = R * D + D + q * F - F;
	while (1)
	{
		num2 = a / y - a + 1;//1/x1
		x = 1 / num2; //x1
		y = L / V * x - W * Xw / V; //y2
		i++;
		printf("X%d", i);
		printf(" %lf", x);
		printf("\n");
		printf("Y%d", i + 1);
		printf(" %lf", y);
		printf("\n");
		if (x < Xw)
		{
			printf("�����������Ϊ��%d", i-1);
			break;
		}

	}
}

int main() //����y��ֵ�����1/x���ڼ����x
{
	double a = 0;
	double JiaoDian = 0;
	double R = 0;
	double q = 0;
	printf("��������Իӷ��ȵ�ֵ:");
	scanf("%lf", &a);
	printf("�����뾫��κ�����ν���ĺ�����X��ֵ:");
	scanf("%lf", &JiaoDian);
	printf("����������ȵ�ֵ:");
	scanf("%lf", &R);
	printf("������qֵ:");
	scanf("%lf", &q);
	JingLiu(a, JiaoDian, R);
	TiLiu(a, R, q);
	return 0;
}



