#include <iostream>
#include "Functions.h"

using namespace std;

//��������, ��� �������� ����� int
int Input()
{
	//TODO: naming(Done)
	int number = 0;

	while (true)
	{
		cin >> number;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "ERROR\n";
		}
		else
		{
			break;
		}
	}

	return number;
}