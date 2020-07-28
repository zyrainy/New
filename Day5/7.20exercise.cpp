#include <iostream>
#include <cmath>
#include <string>
using namespace std;


double result(double, double);
int input(double []);
void display(double [], int );
double grade(double [], int );
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void d_box(box);
void s_box(box *);
long long recursion(int n) {
	if (n == 0 || n == 1)
		return 1;
	return n * recursion(n - 1);
}

int Fill_array(double arr[], int n) {
	cout << "请输入一个double值：";
	int i = 0;
	while (n&&cin >> arr[i])    //&&左右表达式换顺序会有截然不同的结果
	{
		i++, n--;
		if (n != 0)
			cout << "请zai输入一个double值：";
	}
	cout << "实际输入了" << i << "个数字" << endl;
	return i;
}
void Show_array(double arr[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void Reverse_array(double arr[], int n) {
	for (int i = 1; i < n/2 ; i++)
	{
		
		int t = arr[i];
		arr[i] = arr[n - 1 - i];
		arr[n - 1 - i] = t;
	}
}

double *fill_array(double *a)
{
	int i = 0;
	while (cin >> a[i++]) {
		if (i == 5)
			break;
	}
	return &a[i];
}

void show_array(double *a, double *b)
{
	while (a != b) {
		cout << *a << "\t";
		++a;
	}
	cout << endl;
}

void revalue(double r, double *a, double *b)
{
	while (a != b) {
		(*a) *= r;
		++a;
	}
}

const char *Sname[4] = { "Spring","Summer","Fall","Winter" };
//struct EXPENSES {
//	double expense[4];
//};

void fill(double *p) {
	for (int i = 0; i < 4; i++)
	{
		cout << "Enter " << Sname[i] << " expenses:";
		cin >> p[i];
		//cin >> (*p).expense[i];
	}
}
void show(double *p) {
	double sum = 0.0;
	cout << "EXPENSES" << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << Sname[i] << ": $" << p[i] << endl;
		sum += p[i];

		/*cout << Sname[i] << ": $" << (*p).expense[i] << endl;
        sum += (*p).expense[i];*/
	}
	cout << "Sum expenses: $" << sum << endl;
}

const int SLEN = 30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

double calculate(double x, double y, double(*pf)(double, double))//pf表示函数指针
{
	return (*pf)(x, y);//pf表示函数指针，是一个地址，*pf表示调用函数
}
double add(double x, double y)
{
	return x + y;
}
double sub(double x, double y)
{
	return x - y;
}
double mean(double x, double y)
{
	return (x + y) / 2.0;
}

int main()
{
	//1.
	/*cout << "Enter two number (0 to quit): ";
	double n1, n2;
	
	while (cin >> n1 >> n2 )
	{
		if (n1 == 0 || n2 == 0)
			break;
		cout << "Result = " << result(n1, n2) << endl;
		cout << "Enter two number (0 to quit): ";
	}*/

	//2.
	/*double ggrade[10];
	int size = input(ggrade);
	cout << "size: " << size << endl;
	display(ggrade,size);
	cout << endl << "Avg: " << grade(ggrade, size) << endl;*/

	//3.
	/*box b = { "made in china",15,8,12 };
	s_box(&b);
	d_box(b);*/

	//4.
	/*long double ans = 1.0;
	for (double i = 0; i < 5; i++)
		ans *= (5 - i) / (47.0 - i);
	ans /= 27.0;
	cout << ans << endl;*/

	//5.
	/*int n;
	long long factorial;
	cout << "请输入一个整数：";
	while (cin >> n)
	{
		factorial = recursion(n);
		cout << n << "的阶乘为" << factorial << endl;
		cout << "请输入一个整数：";
	}*/

	//6.
	/*double arr[5];
	int n = Fill_array(arr, 5);
	Show_array(arr, n);
	Reverse_array(arr, n);
	Show_array(arr, n);*/

	//7.
	/*double a[5];
	double *e = fill_array(a);
	show_array(a, e);
	revalue(0.5, a, e);
	show_array(a, e);*/

	//8.
	/*double expense[4];
	fill(expense);
	show(expense);*/

	//9.
	//cout << "Enter class size: ";
	//int class_size;
	//cin >> class_size;
	//while (cin.get() != '\n')
	//	continue;

	//student * ptr_stu = new student[class_size];//用了new记得要delete    创建一个student数组
	//int entered = getinfo(ptr_stu, class_size);//输入信息
	//for (int i = 0; i < entered; ++i)
	//{
	//	display1(ptr_stu[i]);//传入元素，可以用.表示法
	//	display2(&ptr_stu[i]);//传入地址，只能用->表示法
	//}
	//display3(ptr_stu, entered);
	//delete[] ptr_stu;
	//cout << "Done\n";

	//10.
	double(*pf[3])(double, double) = { add, sub, mean };//函数指针数组，分别指向三个不同函数
	const char *pch[3] = { "sum", "difference", "mean" };
	double a, b;
	cout << "Enter pairs of numbers (q to quit):";
	int i;
	while (cin >> a >> b)
	{
		for (i = 0; i < 3; i++)
			cout << calculate(a, b, pf[i]) << " = " << pch[i] << "\n";
		cout << "Enter pairs of numbers (q to quit):";
	}

	system("pause");
	return 0;
}

double result(double x, double y)
{
	return 2.0 * x * y / (x + y);
}

int input(double grade[])
{
	cout << "Your golf grades: " << endl;
	int i;
	for (i = 0; i < 10; i++)
	{
		cout << "Grade #" << i + 1 << ": ";
		if (!(cin >> grade[i]))
			break;
	}
	return i;
}

void display(double grade[],int size)
{
	cout << "\nDisplay grades: ";
	for (int i = 0; i < size; i++)
		cout << grade[i] << " ";
}

double grade(double grade[], int size)
{
	double n = 0;
	for (int i = 0; i < size; i++)
		n += grade[i];
	return n / size;
}

void s_box(box *b) {
	b->volume = b->height*b->length*b->width;
}

void d_box(box b) {
	cout << "maker:" << b.maker << endl;
	cout << "height:" << b.height << endl;
	cout << "width:" << b.width << endl;
	cout << "length:" << b.length << endl;
	cout << "volume:" << b.volume << endl;
}

int getinfo(student pa[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		cout << "Please enter the fullname:";
		cin >> pa[i].fullname;
		cout << "Please enter the hobby:";
		cin >> pa[i].hobby;
		cout << "Please enter the ooplevel:";
		cin >> pa[i].ooplevel;
	}
	cout << "Enter end!" << endl;
	return i;
}

void display1(student st)
{
	cout << "display1:FullName:" << st.fullname << "\nhobby:" << st.hobby
		<< "\nooplevel:" << st.ooplevel << endl;
}

void display2(const student *ps)
{
	cout << "dispaly2:FullName:" << ps->fullname << "\nhobby:" << ps->hobby
		<< "\nooplevel:" << ps->ooplevel << endl;

}
void display3(const student pa[], int n)
{
	cout << "dispaly3:" << endl;
	for (int i = 0; i < n; i++)
		cout << i << ":FullName:" << pa[i].fullname << "\nhobby:" << pa[i].hobby
		<< "\nooplevel:" << pa[i].ooplevel << endl;
}