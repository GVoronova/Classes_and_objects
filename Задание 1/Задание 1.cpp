#include <iostream>


class Calculator {

private:

	double num1;
	double num2;

public:
	double add() {
		double sum = num1 + num2;
		return sum;
	};

	double multiply() {
		double mult = num1 * num2;
		return mult;
	};

	double subtract_1_2() {
		double subtr1 = num1 - num2;
		return subtr1;
	};

	double subtract_2_1() {
		double subtr2 = num2 - num1;
		return subtr2;
	};
	double divide_1_2() {
		double div1 = num1 / num2;
		return div1;
	};


	double divide_2_1() {
		double div2 = num2 / num1;
		return div2;
	};

	bool set_num1(double num1) {
		if (num1 != 0) {
			this->num1 = num1;
			return true;
		} return false;
	};

	bool set_num2(double num2) {
		if (num2 != 0) {
			this->num2 = num2;
			return true;
		} return false;
	};
};

int main(int argc, char** argv) {

	setlocale(LC_ALL, "Russian");
	double num1;
	double num2;
	
	Calculator data;
	
	while (true) {
		std::cout << "Введите num1: ";
		std::cin >> num1;
		data.set_num1(num1);
		std::cout << "Введите num2: ";
		std::cin >> num2;
		data.set_num1(num2);

		if (data.set_num1(num1) == true && data.set_num2(num2) == true) {
			std::cout << "num1 + num2 = " << data.add() << '\n';
			std::cout << "num1 - num2 = " << data.subtract_1_2() << '\n';
			std::cout << "num2 - num1 = " << data.subtract_2_1() << '\n';
			std::cout << "num1 * num2 = " << data.multiply() << '\n';
			std::cout << "num1 / num2 = " << data.divide_1_2() << '\n';
			std::cout << "num2 / num1 = " << data.divide_2_1() << '\n';
		}
		else {
			std::cout << "Неверный ввод!" << '\n';
		};

	}
	
	return 0;
};


