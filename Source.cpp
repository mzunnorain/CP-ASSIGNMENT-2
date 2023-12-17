#include<iostream>
using namespace std;
int main()
{
	int user_input;
	int result;
	cout << "Enter your number :";
	cin >> user_input;
	if (user_input < 0)
	{
		result = -1;

	}
	else if (user_input >= 0 && user_input <= 5)
	{
		result = 0;
	}
	else if (user_input > 5 && user_input <= 12)
	{
		result = 1;
	}
	else if (user_input > 12 && user_input <= 19)
	{
		result = 2;
	}
	else if (user_input > 19 && user_input <= 50)
	{
		result = 3;
	}
	else if (user_input > 50 && user_input <= 60)
	{
		result = 4;
	}
	else if (user_input > 60 && user_input <= 101)
	{
		result = 5;
	}
	else if(user_input>101)
	{
		result = -1;
	}
	cout << "Result is :" << result << endl;
	return 0;
}