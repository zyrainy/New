////lotto.cpp -- probability of wining
//#include <iostream>
//long double probability(unsigned numbers, unsigned picks);
//int main()
//{
//	using namespace std;
//	double total, choices;
//	cout << "Enter the total number of choices on the game card and\n"
//		<< "the number of picks allowed:\n";
//	while ((cin >> total >> choices) && choices <= total)
//	{
//		cout << "You have one chance in ";
//		cout << probability(total, choices);
//		cout << " of wining.\n";
//		cout << "Next two nubmers (q to quit): ";
//
//	}
//	cout << "bye\n";
//	system("pause");
//	return 0;
//}
//
//long double probability(unsigned numbers, unsigned picks)
//{
//	long double result = 1.0;
//	long double n;
//	unsigned p;
//	for (n = numbers, p = picks; p > 0; n--, p--)
//	{
//		result = result * n / p;
//	}
//	return result;
//}