#include <iostream>
using std::cout;
using std::cin;
using std::endl;



int main() {

	int arr[20], max_index = 0, size = 0, sum = 0;
	cout << "Please, enter a size of our array" << endl;
	cin >> size;
	if (cin && size <= 20 && size > 0) {
		cout << "Please, fill our array" << endl;

		//���� �������
		for (int i = 0; i < size; i++) {
			cin >> arr[i];
		}
		
		//����� ������������� �����
		for (int i = 0; i < size; i++) {
			if (arr[max_index] < arr[i]) {
				max_index = i;
			}
		}

		//������� ����� �� ������������ �����
		if (max_index == 0) {
			cout << "The max element is the first, so, the sum equals zero" << endl;
		}
		else {
			for (int i = 0; i < max_index; i++) {
				sum += arr[i];
			}
			cout << "The sum of the elements before max element is " << sum << endl;
		}

		

	}
	else {
		cout << "The size of array must be integer, over zero, less then 21" << endl;
	}

	return 0;
}