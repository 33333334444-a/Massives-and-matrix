#include <iostream>
using namespace std;

int main() {

	
	int rowCount;
	int columnCount;

	cout << "Enter row count: ";
	cin >> rowCount;
	cout << "Enter column count: ";
	cin >> columnCount;

	int matrix[10][10];

	if (rowCount < 1 or rowCount > 10 or
		columnCount < 1 or columnCount > 10) {
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

			if (matrix[rowIndex][columnIndex] > 0 and
				matrix[rowIndex][columnIndex] % 2 == 0) {

				rowSum = rowSum + matrix[rowIndex][columnIndex];
			}

		}
		cout << "\n String " << rowIndex + 1 << " - " << rowSum << endl;
		
	}
}
