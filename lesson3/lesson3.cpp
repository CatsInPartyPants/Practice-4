#include <iostream>
#include <Windows.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	/*
	std::cout << "Calculator\n";
	int a, b;
	char c;
	std::cin >> a >> b >> c;

	if (c == '+') {
		std::cout << a + b << std::endl;
	}
	else if (c == '-') {
		std::cout << a + b << std::endl;
	}
	else if (c == '*') {
		std::cout << a * b << std::endl;
	}
	else if (c == '/' && b != 0) {
		std::cout << a / b << std::endl;
	}
	else {
		std::cout << "Error";
	}

	a = 1; b = 2;
	int d = 58;
	(d) ? std::cout << a : std::cout << b;
	*/
	
	/*
	int choise;
	int count;
	float price9x12 = 3.20, price10x15 = 5.40, sale = 0.95;
	std::cout << "Выберете формат фотографии 1 - 9х12; 2- 10x15 -> ";
	std::cin >> choise;
	std::cout << "Количество, шт. -> ";
	std::cin >> count;

	if (choise == 1 && count > 10) {
		std::cout << "Цена: 3.20 руб. Количество: " << count << std::endl;
		std::cout << "Сумма: " << (price9x12 * count) << " Скидка: " << (price9x12 * count) - ((price9x12 * count) * sale) << std::endl;
		std::cout << "К оплате: " << (price9x12 * count) * sale << std::endl;
	}
	else if (choise == 1 && count <= 10) {
		std::cout << "Цена: 3.20 руб. Количество: " << count << std::endl;
		std::cout << "Сумма: " << (price9x12 * count) << " Скидка: " << "Отсутсвует!" << std::endl;
		std::cout << "К оплате: " << (price9x12 * count) << std::endl;
	}
	else if (choise == 2 && count > 10) {
		std::cout << "Цена: 5.40 руб. Количество: " << count << std::endl;
		std::cout << "Сумма: " << (price10x15 * count) << " Скидка: " << (price10x15 * count) - ((price10x15 * count) * sale) << std::endl;
		std::cout << "К оплате: " << (price10x15 * count) * sale << std::endl;
	}
	else if (choise == 2 && count <= 10) {
		std::cout << "Цена: 5.40 руб. Количество: " << count << std::endl;
		std::cout << "Сумма: " << (price10x15 * count) << " Скидка: " << "Отсутсвует!" << std::endl;
		std::cout << "К оплате: " << (price10x15 * count) << std::endl;
	}
	else {
		std::cout << "Введены неправильные данные!" << std::endl;
	}
	*/

	/*
	int a = -99;
	while(a != 0) {
		std::cout << "Введите число, оно будет проверено на четность. Для выхода введите \"0\" -> ";
		std::cin >> a;
		
		(a % 2 == 0) ? std::cout << "Число четное.\n" : std::cout << "Число не четное.\n";
		
		if (a % 2 == 0) {
			std::cout << "Число четное." << std::endl;
		}
		else {
			std::cout << "Число не четное." << std::endl;
		}
		
	*/
		
	/*
	float first = 1, second = 1;
	while (first != 0 && second != 0) {
		std::cout << "Для выхода укажите, что оба числа == 0\n";
		std::cout << "Введите первое число -> ";
		std::cin >> first;
		std::cout << "Введите второе число -> ";
		std::cin >> second;

		(first >= second) ? std::cout << first << std::endl : std::cout << second << std::endl;
	}
	*/

	/*
	float first, second, third;
	std::cout << "Введите первое число -> ";
	std::cin >> first;
	std::cout << "Введите второе число -> ";
	std::cin >> second;
	std::cout << "Введите третье число -> ";
	std::cin >> third;

	if (first > second && first > third) std::cout << first;
	else if (second > third) std::cout << second;
	else std::cout << third;
	*/

    /*
	float first, second, third, fourth, fifth;
	std::cout << "Введите первое число -> ";
	std::cin >> first;
	std::cout << "Введите второе число -> ";
	std::cin >> second;
	std::cout << "Введите третье число -> ";
	std::cin >> third;
	std::cout << "Введите четвертое число -> ";
	std::cin >> fourth;
	std::cout << "Введите пятое число -> ";
	std::cin >> fifth;

	if (first > second && first > third && first > fourth && first > fifth) std::cout << first;
	else if (second > third && second > fourth && second > fifth) std::cout << second;
	else if (third > fourth && third > fifth) std::cout << third;
	else if (fourth > fifth) std::cout << fourth;
	else std::cout << fifth;
	*/

	/*
	int month;
	std::cout << "Введите число от одного до двенадцати -> ";
	std::cin >> month;
	switch (month) {
	case 1:
		std::cout << "Январь\n";
		break;
	case 2:
		std::cout << "Февраль\n";
		break;
	case 3:
		std::cout << "Март\n";
		break;
	case 4:
		std::cout << "Апрель\n";
		break;
	case 5:
		std::cout << "Май\n";
		break;
	case 6:
		std::cout << "Июнь\n";
		break;
	case 7:
		std::cout << "Июль\n";
		break;
	case 8:
		std::cout << "Август\n";
		break;
	case 9:
		std::cout << "Сентябрь\n";
		break;
	case 10:
		std::cout << "Октябрь\n";
		break;
	case 11:
		std::cout << "Ноябрь\n";
		break;
	case 12:
		std::cout << "Декабрь\n";
		break;
	default:
		std::cout << "Такого месяца нет.\n";
		break;
	}
	*/
	enum Month {January = 1, February, March, April, May, June, July, August, September, October, November, December};
	int month;
	std::cout << "Введите число от одного до двенадцати -> ";
	std::cin >> month;

	switch (month) {
	case January:
		std::cout << "Январь";
		break;
	case February:
		std::cout << "Февраль";
		break;
	case March:
		std::cout << "Март";
		break;
	case April:
		std::cout << "Апрель";
		break;
	case May:
		std::cout << "Май";
		break;
	case June:
		std::cout << "Июнь";
		break;
	case July:
		std::cout << "Июль";
		break;
	case August:
		std::cout << "Август";
		break;
	case September:
		std::cout << "Сентябрь";
		break;
	case October:
		std::cout << "Октябрь";
		break;
	case November:
		std::cout << "Ноябрь";
		break;
	case December:
		std::cout << "Декарь";
		break;
	default:
		std::cout << "Такого месяца не существует!";
	}
}


