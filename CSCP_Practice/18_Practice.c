/*
Aşağıdaki C kodlarında kullanlan if deyimlerindeki hataları açıklayınız:
*/

double foo(void);
void bar(double);

int main(void)
{
	double dval = foo();

	if (dval > 3,4)
		bar(dval);
}
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
double foo(void);
void bar(double);

int main(void)
{
	double dval = foo();

	if (dval > 4.5);
		bar(dval);
}
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
int func(void);
void bar(int);

int main(void)
{
	int x = func();

	if (10 < x < 20)
		bar(x);
}
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
int func(void);
void bar(int);

int main(void)
{
	int x = func();

	if (x != 7  || x != 23)
		bar(x);
}
