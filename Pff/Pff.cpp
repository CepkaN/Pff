#include<iostream>

int main() {
	setlocale(LC_ALL, "Russian");

	// ������ 1.
	std::cout<<"������ ������ .\n";
	std::cout << "������� ����� : ";
	int a;
	std::cin >> a;
	int b = 1, counter = 1;
	for (int i = 1; b<= a; i++) {
		for (int j = 0; j <i&&b<=a; j++) {
			std::cout << b << ' ';
			b++;			
		}
		std::cout<<'\n';
	}

	// ������ 2.
	std::cout << "\n������ ��������� �����.\n";
	std::cout << "������� ������ � ������ ��������� ����� : ";
	int x, y;
	std::cin >> x>>y;
	std::cout << "\n\n";
	for (int i = 0; i < x+2; i++)
	{
		for (int j = 0; j < y+2; j++){
			if (i == 0 || i == x+1 || j == 0 || j == y+1)
				std::cout << " #";
			else
			((j % 2 && i % 2) || (!(j % 2) && !(i % 2))) ? (std::cout << " x") : (std::cout << "  ");
		}
		std::cout << '\n';
	}
	std::cout << "\n\n\n";



	return 0;
}