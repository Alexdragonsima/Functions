//FUNCTIONS
#include<iostream>
using namespace std;

int Sum(int a, int b);		//�������� �������
int Diff(int a, int b);
int Prod(int a, int b);
double Qout(int a, int b);

double Factorial(int n);
double Power(double a, int n);

//#define CLASSWORK
//#define FACTORIAL
//#define POWER

void main()
{
	setlocale(LC_ALL, "");
#ifdef CLASSWORK
	cout << "Hello Functions" << endl;
	int a, b;
	cout << "������� ��� �����: "; cin >> a >> b;
	int c = Sum(a, b);		//����� �������
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Diff(a, b) << endl;
	cout << a << " * " << b << " = " << Prod(a, b) << endl;
	cout << a << " / " << b << " = " << Qout(a, b) << endl;
#endif // CLASSWORK

#ifdef FACTORIAL
	int n;
	cout << "������� �����: "; cin >> n;
	cout << n << "! = " << Factorial(n) << endl;
#endif // FACTORIAL

#ifdef POWER
	int a;
	int n;
	cout << "������� ��������� �������: "; cin >> a;
	cout << "������� ���������� �������: "; cin >> n;
	cout << a << " ^ " << n << " = " << Power(a, n) << endl;
#endif // POWER

}

int Sum(int a, int b)		//���������� �������
{
	int c = a + b;
	return c;
}

int Diff(int a, int b)
{
	return a - b;
}

int Prod(int a, int b)
{
	return a * b;
}

double Qout(int a, int b)
{
	return (double) a / b;
}

double Factorial(int n)
{
	double f = 1;
	for (int i = 1; i <= n; i++)
	{
		f *= i;
	}
	return f;
}

double Power(double a, int n)
{
	double N = 1;
	if (n < 0)
	{
		n = -n;
		a = 1 / a;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	return N;
}