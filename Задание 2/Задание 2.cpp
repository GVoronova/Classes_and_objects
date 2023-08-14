#include <iostream>
#include <string>



class Counter 
{
private:
	int num;

public:
	Counter() {
	num = 0;
	}

	Counter(int num) {
		this->num = num;
	}

	void changeNum(std::string action) {
		action == "+" ? num = ++num : num = --num;
	}

	int get_num() {
		return num;
	}
};

int main(int argc, char** argv) {

	setlocale(LC_ALL, "Russian");

	std::string startAnswer;
	int num;
	std::string action;
	Counter count;

	std::cout << "Вы хотите указать начальное значение счетчика? Введите yes или no: ";
	std::cin >> startAnswer;

	if (startAnswer == "yes" || startAnswer == "Yes" || startAnswer == "YES") {

		std::cout << "Введите начальное значение счетчика: ";
		std::cin >> num;
		count = Counter (num);

	} else if (startAnswer == "no") {	
		count = Counter();

	}
	else {
		std::cout << "Неверный ввод. Попробуйте снова." << '\n';
	}
		
	while (true) {

		std::cout << "Введите команду '+', '-', '=' или 'x': ";

		std::cin >> action;

		if (action == "+" || action == "-") {
			count.changeNum(action);


		}
		else if (action == "=") {
			std::cout << count.get_num() << '\n';

		}
		else if (action == "x" || action == "X" || action == "х" || action == "Х") {
			std::cout << "До свидания!" << '\n';
			break;

		}
		else {
			std::cout << "Неверный ввод. Попробуйте снова." << '\n';
		}
	}

	return 0;
}