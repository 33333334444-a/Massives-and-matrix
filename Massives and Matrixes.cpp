#include <iostream>
using namespace std;

int main() {

	int rowCount;
	int columnCount;

	cout << "Enter row count: ";
	cin >> rowCount;
	cout << "Enter column count: ";
	cin >> columnCount;

	int const maxSize = 10;
	int matrix[maxSize][maxSize];

	if (rowCount < 1 || rowCount > maxSize ||
		columnCount < 1 || columnCount > maxSize) {
		cout << "Invalid size!" << endl;
		return 0;
	}

	for (int rowIndex = 0; rowIndex < rowCount; ++rowIndex) {
		for (int columnIndex = 0; columnIndex < columnCount; ++columnIndex) {
			cin >> matrix[rowIndex][columnIndex];
		}
	}

	for (int rowIndex = 0; rowIndex < rowCount; ++rowIndex) {
		int rowSum = 0;
		for (int columnIndex = 0; columnIndex < columnCount; ++columnIndex) {
			if (matrix[rowIndex][columnIndex] > 0 &&
				matrix[rowIndex][columnIndex] % 2 == 0) {

				rowSum = rowSum + matrix[rowIndex][columnIndex];
			}
		}
		cout << "\n";
		cout << " String " << rowIndex + 1 << " - " << rowSum << endl;
	}
	cout << "\n";

	for (int rowIndex = 0; rowIndex < rowCount; ++rowIndex) {
		for (int columnIndex = 0; columnIndex < columnCount; ++columnIndex) {
			cout << matrix[rowIndex][columnIndex] << " ";
		}
		cout << endl;
	}
	cout << "\n";
	system("pause");

}
