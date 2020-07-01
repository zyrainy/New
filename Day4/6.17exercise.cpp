#include<iostream>
#include<fstream>
#include<cctype>
#include<cstring>
#include<string>
using namespace std;

int main()
{
	//1
	/*char ch;
	while ((ch=cin.get()) != '@')
	{
		if (isupper(ch))
			cout << char(tolower(ch));
		else if (islower(ch))
			cout << char(toupper(ch));
		else if (isalnum(ch))
			continue;
		else
			cout << ch;

	}*/

	//2
	/*double donation[10];
	int bigger = 0, i = 0;
	double avg,sum = 0.0;
	cout << "Enter the donation #" << i <<": ";
	while (cin >> donation[i])
	{

		sum += donation[i];
		i++;
		cout << "Enter the donation #" << i << ": ";
	}
	cout << sum << endl;
	cout << i << endl;
	avg = sum / i;
	cout << "Avg: " << avg << endl;
	for (int j = 0; j < i; j++)
	{
		if (donation[j] > avg)
			bigger++;
	}
	cout << bigger << " numbers are bigger than avg " << endl;*/

	//3
	/*char ch;
	cout << "Please enter one of the following choices: " << endl;
	cout << "c)carnivore		p)pianist" << endl;
	cout << "t)tree			g)game" << endl;
	cin >> ch;
	while (ch != 'c' && ch != 'p' && ch != 't' && ch != 'g')
	{

		cout << "Please enter a c,p,t, or g: ";
		cin >> ch;

	}
	switch (ch)
	{
	case 'c':cout << "carnivore" << endl; break;
	case 'p':cout << "pianist" << endl; break;
	case 't':cout << "tree" << endl; break;
	case 'g':cout << "game" << endl; break;

	}*/

	//4
	//const int strsize = 100;
	//struct bop {
	//	char fullname[strsize];
	//	char title[strsize];
	//	char bopname[strsize];
	//	int preference;//0=fullname,1=title,2=bopname
	//};
	//bop ara[5] = {
	//	{"Wim Macho","t0","b0",0},
	//{"Raki R","t1","b1",1 },
	//{"C L","t2","b2",2},
	//{"H H","t3","b3",0},
	//{"P H","t4","b4",1}
	//};
	//cout << "Benevolent Order of Programmers Report" << endl;
	//cout << "a.display by name		b.display by title\n"
	//	<< "c.display by bopname		d.display by preference\n"
	//	<< "q.quit";
	//cout << endl << "Enter your choice: ";
	//char ch;
	//cin >> ch;
	//while (ch != 'q')
	//{
	//	switch (ch)
	//	{
	//	case 'a':
	//		for (int i = 0; i < 5; i++)
	//			cout << ara[i].fullname << endl;
	//		break;
	//	case 'b':
	//		for (int i = 0; i < 5; i++)
	//			cout << ara[i].title << endl;
	//		break;
	//	case 'c':
	//		for (int i = 0; i < 5; i++)
	//			cout << ara[i].bopname << endl;
	//		break;
	//	case 'd':
	//		for (int i = 0; i < 5; i++)
	//		{
	//			if(ara[i].preference==0)
	//				cout << ara[i].fullname << endl;
	//			else if(ara[i].preference==1)
	//				cout << ara[i].title << endl;
	//			else
	//				cout << ara[i].bopname << endl;
	//		}
	//		break;
	//	}
	//	
	//	cout << "Enter your choice: ";
	//	cin >> ch;
	//}

	//5
	/*double income, tax = 0.0;
	cout << "Enter your income: ";
	while (cin >> income && income>=0)
	{
		if (income <= 5000)
			tax += 0;
		else if (income > 5000 && income <= 15000)
			tax += (income - 5000)*0.1;
		else if (income > 15001 && income <= 35000)
			tax += 10000 * 0.1 + (income - 15000)*0.15;
		else
			tax += 10000 * 0.1 + 20000 * 0.15 + (income - 35000)*0.2;
		cout << "Your tax is " << tax << endl;
		cout << "Enter your income: ";
	}*/

	//6
	/*struct people
	{
		char name[20];
		double don;
	};
	int donater;
	cout << "Enter the number of donater: ";
	cin >> donater;
	people *arr = new people[donater];
	for (int i = 0; i < donater; i++)
	{
		cout << "#" << i + 1 << " donater is: ";
		cin >> arr[i].name;
		cout << "Its money is: ";
		cin >> arr[i].don;
	}
	cout << "Grand Patrons: " << endl;
	int count=0;
	for (int i = 0; i < donater; i++)
	{
		if (arr[i].don > 10000)
		{ 
			cout << arr[i].name << endl;
			count++;
		}
	}
	if (count == 0)
		cout << "None" << endl;
	cout << "Patrons: " << endl;
	count = 0;
	for (int i = 0; i < donater; i++)
	{	
		if (arr[i].don <= 10000)
		{
			cout << arr[i].name << endl;
			count++;
		}
	}
	if (count == 0)
		cout << "None" << endl;*/
	
	//7
	//char ch[50],c0;
	//int vowels = 0;
	//int cons = 0;
	//int flag = 0;
	//int other = 0;
	//cout << "Enter words (q to quit): " << endl;
	//cin >> ch;
	////cout << strcmp(ch, "q");
	//while (strcmp(ch,"q"))
	//{
	//	if (isalpha(ch[0]))
	//	{
	//		if (ch[0] == 'a' || ch[0] == 'e' || ch[0] == 'o' || ch[0] == 'u' || ch[0] == 'i' || ch[0] == 'A' || ch[0] == 'E' || ch[0] == 'O' || ch[0] == 'U' || ch[0] == 'I')
	//			vowels++;
	//		else
	//			flag++;
	//	}
	//	else
	//		other++;
	//	cin >> ch;
	//}
	//cout << vowels << " words begining with vowels" << endl
	//	<< flag << " words begining with consonants" << endl
	//	<< other << " others" << endl;
	
	//8
	/*ifstream inFile;
	inFile.open("Carinfo.txt");
	char ch;
	int nch=0;
	inFile.get(ch);
	while (inFile.good())
	{
		cout << ch;
		nch++;
		inFile.get(ch);
		
	}
	cout << endl<<nch << " chars read." << endl;*/

	//9
	struct people
	{
		char name[20];
		double don;
	};
	int donater;
	ifstream inFile;
	inFile.open("donate.txt");
	inFile >> donater;
	inFile.get();
	char ch;
	people *arr = new people[donater];
	for (int i = 0; i < donater; i++)
	{
		cout << "#" << i + 1 << " donater is: ";
		inFile.get(arr[i].name,20).get();
		
		cout << arr[i].name<<endl;
		cout << "Its money is: ";
		inFile >> arr[i].don;
		inFile.get();
		cout << arr[i].don<<endl;
	}
	cout << "Grand Patrons: " << endl;
	int count=0;
	for (int i = 0; i < donater; i++)
	{
		if (arr[i].don > 10000)
		{
			cout << arr[i].name << endl;
			count++;
		}
	}
	if (count == 0)
		cout << "None" << endl;
	cout << "Patrons: " << endl;
	count = 0;
	for (int i = 0; i < donater; i++)
	{
		if (arr[i].don <= 10000)
		{
			cout << arr[i].name << endl;
			count++;
		}
	}
	if (count == 0)
		cout << "None" << endl;

	system("pause");
	return 0;
}