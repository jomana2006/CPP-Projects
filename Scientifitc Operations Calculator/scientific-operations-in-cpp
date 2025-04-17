#include <iostream>
#include <cmath>
using namespace std;
int choice;
int choice2;
int choice3;
void DisplayOperations() {
	cout << "What arithmetic operation are you needing to use?";
	cout << "\n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n 5. Trigonometry \n 6. Logarithms \n";
}
void DisplayTrig() {
	cout << "What trigonometric function are you needing to use?";
	cout << "\n 1. Sine \n 2. Cosine \n 3. Tangent \n";
	cin >> choice2;
}
void DisplayLog() {
	cout << "What logarithmic function are you needing to use?";
	cout << "\n 1. Logarithm \n 2. Exponential \n";
	cin >> choice3;
}
int main() {
	double result = 0;
	double a, b;
	double x, y;
	cout << "CASIO CALCULATOR" << endl;
	cout << "Choose the operation you want to do: " << endl;
	DisplayOperations();
	cin >> choice;
	switch (choice) {
	case 1:
		cout << "Enter your two values with a space in between: ";
		cin >> a >> b;
		result = a + b;
		cout << "Final answer is: " << result << endl;
		break;
	case 2:
		cout << "Enter your two values with a space in between: ";
		cin >> a >> b;
		result = a - b;
		cout << "Final answer is: " << result << endl;
		break;
	case 3:
		cout << "Enter your two values with a space in between: ";
		cin >> a >> b;
		result = a * b;
		cout << "Final answer is: " << result << endl;
		break;
	case 4:
		cout << "Enter your two values with a space in between: ";
		cin >> a >> b;
		if (b != 0) {
			result = a / b;
			cout << "Final answer is: " << result << endl;
		}
		else
			cout << "Division by Zero" << endl;
		break;
	case 5:
		DisplayTrig();
		switch (choice2) {
		case 1:
			cout << "Enter your value: ";
			cin >> x;
			result = sin(x);
			cout << "Final answer is: " << result << endl;
			break;
		case 2:
			cout << "Enter your value: ";
			cin >> x;
			result = cos(x);
			cout << "Final answer is: " << result << endl;
			break;
		case 3:
			cout << "Enter your value: ";
			cin >> x;
			result = tan(x);
			cout << "Final answer is: " << result << endl;
			break;
		default:
			cout << "Invalid Choice." << endl;
		}
		break;
	case 6:
		DisplayLog();
		switch (choice3) {
		case 1:
			cout << "Enter your value: ";
			cin >> y;
			if (y <= 0) {
				cout << "Natural Logarithms are undefined for non-postive values. Enter another number: ";
				cin >> y;
			}
			else {
				result = log(y);
				cout << "Final answer is: " << result << endl;
			}
			break;
		case 2:
			cout << "Enter your value: ";
			cin >> y;
			result = exp(y);
			cout << "Final answer is: " << result << endl;
			break;
		default:
			cout << "Invalid Choice." << endl;
		}
		break;
	default:
		cout << "Invalid Choice." << endl;
	}
	return 0;
}