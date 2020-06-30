//#include <iostream>
//using namespace std;
//int main() 
//{
//	int height;
//	const int con = 12;
//	cout << "Enter your height:___\b\b\b";
//	cin >> height;
//	int in = height / con;
//	int feet = height % con;
//	cout << "Height is " << in << " inches, " << feet << " feet." << endl;
//
//	int pounds;
//	double BMI, kilo, meter;
//	cout << "Enter your in and feet: ";
//	cin >> in >> feet;
//	cout << "Enter your pounds: ";
//	cin >> pounds;
//	kilo = pounds / 2.2;
//	feet = 12 * in + feet;
//	meter = feet * 0.0254;
//	BMI = kilo / (meter*meter);
//	cout << "BMI is " << BMI << endl;
//
//	int degrees,minutes, seconds;
//	double fdegrees;
//	cout << "Enter a latitude in degrees, minutes, and seconds:";
//	cout << "\nFirst,enter the degrees: ";
//	cin >> degrees;
//	cout << "Next, enter the minutes of arc: ";
//	cin >> minutes;
//	cout << "Finally, enter the secondes of arc: ";
//	cin >> seconds;
//	fdegrees = degrees + minutes / 60.0 + seconds / 3600.0;
//	cout << degrees << " degrees, " << minutes << " minutes, "
//		 << seconds << " seconds = " << fdegrees << " degrees" << endl;
//	
//	long sec;
//	int day, hour, min, fsec;
//	cout << "Enter the number of seconds: ";
//	cin >> sec;
//	day = sec / 24 / 60 / 60;
//	hour = sec % (24 * 60 * 60) / 60 / 60;
//	min = sec % (60 * 60) / 60;
//	fsec = sec % 60;
//	cout << sec << " seconds = " << day << " days, "
//		<< hour << " hours, " << min << " minutes, " << fsec << " seconds" << endl;
//
//	long long pop, apop;
//	cout << "Enter the world's population: ";
//	cin >> pop;
//	cout << "Enter the population of the US: ";
//	cin >> apop;
//	double per;
//	per = apop * 100.0 / pop;
//	cout << "The poplulation of the US is " << per << "% of the world population." << endl;
//
//	int kilometer, gallon;
//	double kpg;
//	cout << "Enter the kilometer and gallon: ";
//	cin >> kilometer >> gallon;
//	kpg = kilometer * 1.0 / gallon;
//	cout << kpg << " kilometers costs 1 gallon." << endl;
//
//	double lpkm;
//	cout << "Enter the lpkm: ";
//	cin >> lpkm;
//	kpg = 235.2156 / lpkm;
//	cout << kpg << " kilometers costs 1 gallon." << endl;
//	system("pause");
//	return 0;
//}