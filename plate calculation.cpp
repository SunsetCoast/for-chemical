#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void JingLiu(double a,double JiaoDian,double R)
{
	int i = 0;
	double x = 0;
	double y = 0;
	double XD = 0.995;
	double num1 = 0;
	printf("请输入y1的值:");
	scanf("%lf", &y);
	printf("现在是精馏段塔板数的计算\n");
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
			printf("精馏段塔板数为：%d\n", i-1);
			printf("请记下倒数第二位Y的值\n");
			printf("提馏段计算需要手动输入倒数第二位Y的值\n");
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
	printf("现在是提馏段塔板数的计算\n");
	printf("请输入F的值:");
	scanf("%lf", &F);
	printf("请输入W的值:");
	scanf("%lf", &W);
	printf("请输入D的值:");
	scanf("%lf", &D);
	printf("请输入精馏段塔板数计算倒数第二位Y的值：");
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
			printf("精馏段塔板数为：%d", i-1);
			break;
		}

	}
}

int main() //根据y的值计算出1/x，在计算出x
{
	double a = 0;
	double JiaoDian = 0;
	double R = 0;
	double q = 0;
	printf("请输入相对挥发度的值:");
	scanf("%lf", &a);
	printf("请输入精馏段和提馏段交点的横坐标X的值:");
	scanf("%lf", &JiaoDian);
	printf("请输入回流比的值:");
	scanf("%lf", &R);
	printf("请输入q值:");
	scanf("%lf", &q);
	JingLiu(a, JiaoDian, R);
	TiLiu(a, R, q);
	return 0;
}



