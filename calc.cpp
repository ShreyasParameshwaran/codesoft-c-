
#include <iostream>
using namespace std;


int main()
{   
	system("cls");
	char op;
	float num1, num2;

	int i = 0;

	while (i<20)
	{	
    cout<<"Enter 2 numbers \n";	
	cin >> num1 >> num2;

	cout<<"Enter operation for calculator \n + for addition \n - for subtraction \n / for division \n *for multiplication\n";
	cin >> op;
	switch (op) {

	case '+':
		cout << num1 + num2;
		break;

	case '-':
		cout << num1 - num2;
		break;


	case '*':
		cout << num1 * num2;
		break;


	case '/':
		cout << num1 / num2;
		break;

	default:
		cout << "Error! operator is not correct";
		i++;
	}}


	return 0;
}
