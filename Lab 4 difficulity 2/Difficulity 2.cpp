#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main() {
	int size = 0, answer = 0, min = 0, sum = 0, n = 0, enumerator = 1;
	int arr[20];
	srand(time(0));
	cout << "Please enter the size of our array" << endl;
	cin >> size;
	cout << "How do you want to fill array?\n1.Manualy\n2.Randomly" << endl;
	cin >> answer;
	if (cin && size > 0 && size <= 20) {
		switch (answer) {

		case 1://Заполнение массива вручную
			cout << "Please, enter the " << size << " elements manualy" << endl;
			for (int i = 0; i < size; i++) {
				cin >> arr[i];
			}
			break;

		default://Заполнение массива рандомом
		case 2:
			cout << "You can relax, the random will do all for you" << endl;
			for (int i = 0; i < size; i++) {
				arr[i] = rand() % 10 + 1;
				cout << "The " << i + 1 << " element of the array equals " << arr[i] << endl;
			}
			break;
			break;
		}

		cout << "============================================================" << endl;

		//Затирание четных элементов массива
		for (int i = 0; i < size; i++) {
			if (arr[i] & 1) {
				cout << "The " << enumerator << " element of the array equals " << arr[i] << endl;
				enumerator++;
			}
		}
	}
	return 0;
}