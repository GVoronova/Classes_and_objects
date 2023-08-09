#include <iostream>
#include <string>


class Counter {
private:
	int num = 0;

public:
	void set_num(int* number) {
		num = *number;
	}

	int get_num() {
		return num;
	}
};

int main(int argc, char** argv) {

	setlocale(LC_ALL, "Russian");

	std::string startAnswer;
	int number = 0;
	std::string action;
	Counter count;

	std::cout << "�� ������ ������� ��������� �������� ��������? ������� yes ��� no: ";
	std::cin >> startAnswer;

	if (startAnswer == "yes" || startAnswer == "Yes" || startAnswer == "YES") {

		std::cout << "������� ��������� �������� ��������: ";
		std::cin >> number;
		count.set_num(&number);

	} else if (startAnswer == "no") {
		number = 0;

	} else {
		std::cout << "�������� ����. ���������� �����." << '\n';
	}
		
	while (true) {

		std::cout << "������� ������� '+', '-', '=' ��� 'x': ";
			
		std::cin >> action;

		if (action == "+") {
			number = ++number;
			count.set_num(&number);

		} else if (action == "-") {
			number = --number;
			count.set_num(&number);

		} else if (action == "=") {
			std::cout << count.get_num() << '\n';

		} else if (action == "x" || action == "X" || action == "�" || action == "�") {
			std::cout << "�� ��������!" << '\n';
			break;

		} else {
			std::cout << "�������� ����. ���������� �����." << '\n';
		}

	}

	return 0;
}