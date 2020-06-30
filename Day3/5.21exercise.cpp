#include<iostream>
#include<string>
#include <array>
#include<cstring>
using namespace std;
const int ArSize = 101;
int main()
{
	//1
	/*int max, min, sum = 0;
	cout << "Enter max: ";
	cin >> max;
	cout << "Enter min: ";
	cin >> min;
	for (min; min <= max; min++)
		sum += min;
	cout << "total: " << sum << endl;*/

	//2
	/*array<long double, ArSize>factorials;
	factorials[1] = factorials[0] = 1;
	for (int i = 2; i < ArSize; i++)
		factorials[i] = i * factorials[i - 1];
	for (int i = 0; i < ArSize; i++)
		std::cout << i << "! = " << factorials[i] << std::endl;*/
	
	//3
	/*int num, sum;
	sum = 0;
	do
	{
		cout << "Enter a num: ";
		cin >> num;
		sum += num;
	} while (num);
	cout << "sum: " << sum << endl;*/

	//4
	/*long Dap, Cleo;
	int year = 0;
	Dap = Cleo = 100;
	while (Dap >= Cleo) {
		year++;
		Dap += 10;
		Cleo *= 1 + 0.05;
	}
	cout << year << " years later." << endl
		<< "Cleo: " << Cleo << endl
		<< "Dap: " << Dap << endl;*/

	//5
	/*const char *month[12] = { "Jan","Feb","Mar",
		"Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
	int seller[12],sum=0;
	for (int i = 0; i < 12; i++)
	{
		cout << "Enter the seller of " << month[i] << endl;
		cin >> seller[i];
		sum += seller[i];
	}
	for (int i = 0; i < 12; i++)
	{
		cout << "The seller of " << month[i]
			<< " is " << seller[i] << endl;
	}
	cout << "Sum: " << sum << endl;*/

	//6
	/*int seller[3][12], ysum[3] = { 0 };
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter the seller of year " << i+1 << endl;
		for (int j = 0; j < 12; j++)
		{
			cout << "month " << j + 1 << ": ";
			cin >> seller[i][j];
			ysum[i] += seller[i][j];
		}
		sum += ysum[i];
		system("cls");
		
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "The seller of year " << i + 1
			<< " is " << ysum[i] << endl;
	}
	cout << "Sum: " << sum << endl;*/

	//7
	/*struct car
	{
		string band;
		int year;

	};
	cout << "Enter the number of car: ";
	int ncar;
	cin >> ncar;
	cin.get();
	car *cars = new car[ncar];
	for (int i = 0; i < ncar; i++)
	{
		cout << "Car #" << i + 1 << endl;
		cout << "Enter the make: ";
		getline(cin, cars[i].band);
		cout << "Enter the year made: ";
		cin >> cars[i].year;
		cin.get();
		
	}
	cout << "Here is your collection: " << endl;
	for (int i = 0; i < ncar; i++)
	{
		cout << cars[i].year << " " << cars[i].band << endl;
	}*/
	
	//8
	/*int counter = 0;
	char ch[10] = "0";
	cout << "Enter words (to stop,type the word done):" << endl;
	cin >> ch;
	for (counter; strcmp(ch, "done"); counter++)
	{
		cin >> ch;
	}
	cout << endl << counter << " haracters read\n";*/

	//9
	int counter = 0;
	string ch;
	cout << "Enter words (to stop,type the word done):" << endl;
	cin >> ch;
	for (counter; ch!="done"; counter++)
	{
		cin >> ch;
	}
	cout << endl << counter << " haracters read\n";
	//10
	/*cout << "Enter number of rows: ";
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j<n-i-1; j++)
		
			cout << " ";
		
		for (int j = n-1; j > n-i-2; j--)
		
			cout << "*";
		
		cout << endl;
	}*/

	system("pause");
	return 0;
}