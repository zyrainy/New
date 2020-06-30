//#include <iostream>
//#include  <string>
//#include <cstring>
//#include <vector>
//#include <array>
//using namespace std;
//
//
//int main() {
//	//1&2 convert char to string
//	/*char fname[20],lname[20],letter;
//	int age;
//	cout << "What is your first name?";
//	cin.getline(fname,20);
//	cout << "What is your last name?";
//	cin.getline(lname, 20);
//	cout << "What letter grade do you deserve?";
//	cin >> letter;
//	cout << "What is your age?";
//	cin >> age;
//	cout << "Name: " << lname << ", " << fname << endl;
//	cout << "Grade: " << char(letter + 1) << endl;
//	cout << "Age: " << age << endl;*/
//
//	//3
//	/*char fname[20], lname[20], name[100];
//	cout << "Enter your first name: ";
//	cin >> fname;
//	cout << "Enter your last name: ";
//	cin >> lname;
//	strcat_s(lname, ", ");
//	strcat_s(lname, fname);
//	cout << "Here's the information in a single string: " << lname << endl;*/
//
//	//4
//	/*string fname, lname;
//	cout << "Enter your first name: ";
//	cin >> fname;
//	cout << "Enter your last name: ";
//	cin >> lname;
//	lname += ", ";
//	lname += fname;
//	cout << "Here's the information in a single string: " << lname << endl;*/
//
//	//5
//	/*struct CandyBar
//	{
//		char band[20];
//		float weight;
//		int calorie;
//	};
//	CandyBar snack = { "Mocha Munch",2.3,350 };
//	cout << "band: " << snack.band << endl
//		<< "weight: " << snack.weight << endl
//		<< "calorie: " << snack.calorie << endl;*/
//
//	//6
//	/*struct CandyBar
//	{
//		char band[20];
//		float weight;
//		int calorie;
//	};
//	CandyBar snacks[3]=
//	{
//		{"A",1.0,20},
//		{"B", 2.0, 40},
//		{"C", 3.0, 60}
//	};
//	cout << "band1: " << snacks[0].band << endl
//		<< "weight2: " << snacks[1].weight << endl
//		<< "calorie3: " << snacks[2].calorie << endl;*/
//
//	//7
//	/*struct Pizza
//	{
//		string Pname;
//		float dia;
//		float wei;
//	};
//	Pizza a;
//	cout << "Enter your pizza name: ";
//	cin >> a.Pname;
//	cout << "Enter your pizza diameter: ";
//	cin >> a.dia;
//	cout << "Enter your pizza weight: ";
//	cin >> a.wei;
//	cout << "Name: " << a.Pname << endl
//		<< "diameter: " << a.dia << endl
//		<< "weight: " << a.wei << endl;*/
//
//	//8
//	/*struct Pizza
//	{
//		string Pname;
//		float dia;
//		float wei;
//	};
//	Pizza *a=new Pizza;
//	cout << "Enter your pizza diameter: ";
//	cin >> a->dia;
//	cout << "Enter your pizza name: ";
//	cin >> a->Pname;
//	cout << "Enter your pizza weight: ";
//	cin >> a->wei;
//	cout << "Name: " << a->Pname << endl
//		<< "diameter: " << a->dia << endl
//		<< "weight: " << a->wei << endl;
//	delete a;*/
//
//	//9
//	//struct CandyBar
//	//{
//	//	char band[20];
//	//	float weight;
//	//	int calorie;
//	//};
//	//CandyBar *snacks = new CandyBar[3];
//	//strcpy_s(snacks[0].band, "A");
//	//snacks[1].weight = 2.0;
//	//snacks[2].calorie = 60;
//	///*CandyBar snacks[3] =
//	//{
//	//	{"A",1.0,20},
//	//	{"B", 2.0, 40},
//	//	{"C", 3.0, 60}
//	//};*/
//	//cout << "band1: " << snacks[0].band << endl
//	//<< "weight2: " << snacks[1].weight << endl
//	//<< "calorie3: " << snacks[2].calorie << endl;
//
//	//10
//	array<double, 3>grades;
//	cout << "first grade: ";
//	cin >> grades[0];
//	cout << "second grade: ";
//	cin >> grades[1];
//	cout << "third grade: ";
//	cin >> grades[2];
//	cout << "average grade: " << (grades[0] + grades[1] + grades[2]) / 3 << endl;
//	system("pause");
//	return 0;
//	
//}