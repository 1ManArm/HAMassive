#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	const int size = 10;
	int arr[size][size];
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			arr[i][j] = rand() % (101) + 0;
			std::cout << arr[i][j] << '\t';
		}
		std::cout << '\n';
	}
	int sumj;
	for (int i = 0; i < size; i++) {
		sumj = 0;  //SOS!!! ����� ������ �� ���������!!! ������� ��� ������!!! ���������� � ���������� ���������� (��� � ����������� ��� ���������!!! ����� ���� "������� ����" �� �����������!!!)
		for (int j = 0; j < size; j++) {
			sumj += arr[i][j];
			std::cout << "\n" << sumj << "\t";
		}
	}
	std::cout << "\n������� ����� ���� ������� -> ";
	std::cin >> n;
	std::sort(arr[n], arr[n] + size);

	std::cout << "\n�������� ������ -> \n";
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			std::cout << arr[i][j] << '\t';
	std::cout << "\n\n";

	return 0;
}

