#include <iostream>


class Calculator {

public:

	double num1;
	double num2;

	double add(double num1, double num2) {
		double sum = num1 + num2;
		return sum;
	};

	double multiply(double num1, double num2) {
		double mult = num1 * num2;
		return mult;
	};

	double subtract_1_2(double num1, double num2) {
		double subtr1 = num1 - num2;
		return subtr1;
	};

	double subtract_2_1(double num1, double num2) {
		double subtr2 = num2 - num1;
		return subtr2;
	};
	double divide_1_2(double num1, double num2) {
		double div1 = num1 / num2;
		return div1;
	};


	double divide_2_1(double num1, double num2) {
		double div2 = num2 / num1;
		return div2;
	};

	bool set_num1(double num1) {
		if (num1 != 0) {
			this->num1;
			return true;
		} return false;
	};

	bool set_num2(double num2) {
		if (num2 != 0) {
			this->num2;
			return true;
		} return false;
	};
};

int main(int argc, char** argv) {

	setlocale(LC_ALL, "Russian");

	Calculator data;
	
	while (true) {
		std::cout << "Введите num1: ";
		std::cin >> data.num1;
		std::cout << "Введите num2: ";
		std::cin >> data.num2;
		if (data.set_num1(data.num1) == true && data.set_num2(data.num2) == true) {
			std::cout << "num1 + num2 = " << data.add(data.num1, data.num2) << '\n';
			std::cout << "num1 - num2 = " << data.subtract_1_2(data.num1, data.num2) << '\n';
			std::cout << "num2 - num1 = " << data.subtract_2_1(data.num1, data.num2) << '\n';
			std::cout << "num1 * num2 = " << data.multiply(data.num1, data.num2) << '\n';
			std::cout << "num1 / num2 = " << data.divide_1_2(data.num1, data.num2) << '\n';
			std::cout << "num2 / num1 = " << data.divide_2_1(data.num1, data.num2) << '\n';
		}
		else {
			std::cout << "Неверный ввод!" << '\n';
		};

	}
	
	return 0;
};


