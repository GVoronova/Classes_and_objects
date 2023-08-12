#include <iostream>
#include <string>


class Counter {
private:
	int num = 0;

public:

	int startNumber(int number) {
		num = number;
		return num;
	}

	int changeNum(std::string action) {
		action == "+" ? this->num = ++num : this->num = --num;
		return num;
	}
	
	void set_num(int number) {
		this->num = num;
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

	std::cout << "Вы хотите указать начальное значение счетчика? Введите yes или no: ";
	std::cin >> startAnswer;

	if (startAnswer == "yes" || startAnswer == "Yes" || startAnswer == "YES") {

		std::cout << "Введите начальное значение счетчика: ";
		std::cin >> number;
		count.startNumber(number);

	} else if (startAnswer == "no") {	
		number = 0;
		count.startNumber(number);

	} else {
		std::cout << "Неверный ввод. Попробуйте снова." << '\n';
	}
		
	while (true) {

		std::cout << "Введите команду '+', '-', '=' или 'x': ";
			
		std::cin >> action;

		if (action == "+" || action == "-") {
			number = count.changeNum(action);
			count.set_num(number);

		} else if (action == "=") {
			std::cout << count.get_num() << '\n';

		} else if (action == "x" || action == "X" || action == "х" || action == "Х") {
			std::cout << "До свидания!" << '\n';
			break;

		} else {
			std::cout << "Неверный ввод. Попробуйте снова." << '\n';
		}

	}

	return 0;
}