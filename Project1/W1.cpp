#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

int main() {
	srand(static_cast<unsigned int>(time(NULL)));
	int matrix1[4][4];
	int matrix2[4][4];
	int matrix3[4][4] = { 0 };

	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			matrix1[i][j] = (rand() % 9) + 1;
			matrix2[i][j] = (rand() % 9) + 1;
		}
	}

	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			cout << matrix1[i][j] << " ";
		}
		cout << "   ";
		for (int k = 0; k < 4; ++k) {
			cout << matrix2[i][k] << " ";
		}
		cout << endl;
	}
	
	while (1) {
		cout << endl;
		cout << "m : ����� ����" << endl;
		cout << "a : ����� ����" << endl;
		cout << "d : ����� ����" << endl;
		cout << "r : ��Ľ��� ��" << endl;
		cout << "t : ��ġ ��İ� �� ��Ľ��� ��" << endl;
		cout << "e : ���� �� �ּҰ��� ã�� �� ����ŭ ��� ���� ���� (return)" << endl;
		cout << "f : ���� �� �ִ밪�� ã�� �� ����ŭ ��� ���� ���� (return)" << endl;
		cout << "1 ~ 9 : �Է��� ������ ����� ��� (return)" << endl;
		cout << "s : ��� �缳��" << endl;
		cout << "q : ���α׷� ����" << endl;
		cout << endl;
		cout << "������ ��ɾ �Է��ϼ��� : ";

		char command;
		cin >> command;
		switch (command) {
		case 'm':
			for (int i = 0; i < 4; ++i) {
				for (int j = 0; j < 4; ++j) {
					matrix3[i][j] = { 0 };
				}
			}
			for (int i = 0; i < 4; ++i) {
				for (int j = 0; j < 4; ++j) {
					for (int k = 0; k < 4; ++k) {
						matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
					}
				}
			}
			system("cls");
			for (int i = 0; i < 4; ++i) {
				for (int j = 0; j < 4; ++j) {
					cout << matrix1[i][j] << " ";
				}
				cout << "   ";
				for (int k = 0; k < 4; ++k) {
					cout << matrix2[i][k] << " ";
				}
				cout << "   ";
				for (int m = 0; m < 4; ++m) {
					cout << matrix3[i][m] << " ";
				}
				cout << endl;
			}
			break;

		case 'a':
			for (int i = 0; i < 4; ++i) {
				for (int j = 0; j < 4; ++j) {
					matrix3[i][j] = { 0 };
				}
			}
			for (int i = 0; i < 4; ++i) {
				for (int j = 0; j < 4; ++j) {
					matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
				}
			}
			system("cls");
			for (int i = 0; i < 4; ++i) {
				for (int j = 0; j < 4; ++j) {
					cout << matrix1[i][j] << " ";
				}
				cout << "   ";
				for (int k = 0; k < 4; ++k) {
					cout << matrix2[i][k] << " ";
				}
				cout << "   ";
				for (int m = 0; m < 4; ++m) {
					cout << matrix3[i][m] << " ";
				}
				cout << endl;
			}
			break;

		case 'e':
			int min = 10;
			for (int i = 0; i < 4; ++i) {
				for (int j = 0; j < 4; ++j) {
					if (matrix1[i][j] < min) min = matrix1[i][j];
					if (matrix2[i][j] < min) min = matrix2[i][j];
				}
			}
			if (min != 10) {
				for (int i = 0; i < 4; ++i) {
					for (int j = 0; j < 4; ++j) {
						matrix1[i][j] -= min;
						matrix2[i][j] -= min;
					}
				}
			}
			system("cls");
			for (int i = 0; i < 4; ++i) {
				for (int j = 0; j < 4; ++j) {
					cout << matrix1[i][j] << " ";
				}
				cout << "   ";
				for (int k = 0; k < 4; ++k) {
					cout << matrix2[i][k] << " ";
				}
				cout << endl;
			}

			break;

		case 'd':
			for (int i = 0; i < 4; ++i) {
				for (int j = 0; j < 4; ++j) {
					matrix3[i][j] = { 0 };
				}
			}
			for (int i = 0; i < 4; ++i) {
				for (int j = 0; j < 4; ++j) {
					matrix3[i][j] = matrix1[i][j] - matrix2[i][j];
				}
			}
			system("cls");
			for (int i = 0; i < 4; ++i) {
				for (int j = 0; j < 4; ++j) {
					cout << matrix1[i][j] << " ";
				}
				cout << "   ";
				for (int k = 0; k < 4; ++k) {
					cout << matrix2[i][k] << " ";
				}
				cout << "   ";
				for (int m = 0; m < 4; ++m) {
					cout << matrix3[i][m] << " ";
				}
				cout << endl;
			}
			break;

		case 's':
			system("cls");
			for (int i = 0; i < 4; ++i) {
				for (int j = 0; j < 4; ++j) {
					matrix1[i][j] = (rand() % 9) + 1;
					matrix2[i][j] = (rand() % 9) + 1;
				}
			}
			for (int i = 0; i < 4; ++i) {
				for (int j = 0; j < 4; ++j) {
					cout << matrix1[i][j] << " ";
				}
				cout << "   ";
				for (int k = 0; k < 4; ++k) {
					cout << matrix2[i][k] << " ";
				}
				cout << endl;
			}
			break;

		case 'q':
			cout << "���α׷��� �����մϴ�. " << endl;
			return 0;
		}
	}
	
	return 0;
}