#include<iostream>
#include<iomanip>
#include<Windows.h>
#include "Developer.h"
#include "QAEngineer.h"
#include "ProjectManager.h"
#include "SmartPointer.h"
#include "Transactions.h"
#include "ValidInput.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	SmartPointer<double> salary = new double[3]{ -1.0, -1.0, -1.0 };
	Transaction<Developer> developer;
	Transaction<QAEngineer> engineer;
	Transaction<ProjectManager> manager;

	register int choice = 0;
	while (choice != 9) {
		cout << "МЕНЮ" << endl;
		cout << "1. Заполнить данные разработчика;" << endl;
		cout << "2. Заполнить данные QA-инженера;" << endl;
		cout << "3. Заполнить данные менеджера проектом;" << endl;
		cout << "4. Откат данных;" << endl;
		cout << "5. Рассчитать/вывести зарплату для разработчика;" << endl;
		cout << "6. Расситать/вывести зарплату для QA-инженера;" << endl;
		cout << "7. Рассчитать/вывести зарплату для менеджера проектом;" << endl;
		cout << "8. Просмотр данных;" << endl;
		cout << "9. Выход." << endl;
		cout << "Сделайте выбор: "; 
		choice = ValidInput<int>::getValidValue("Ошибка! Сделайте выбор ещё раз: ");

		switch (choice) {
		case 1:
			system("cls");
			{
				developer.BeginTransactions();
				developer->set();
				if (developer.checkTransactions()) {
					system("cls");
					cout << "Неверный ввод данных! Был произведён откат данных." << endl << endl;
					developer.DeleteTransactions();
					break;
				}
			}
			system("cls");
			salary[0] = developer->salary.calculateSalary(developer->getPriceProj());
			cout << "Данные обновлены!" << endl << endl;
			break;

		case 2:
			system("cls");
			{
				engineer.BeginTransactions();
				engineer->set();
				if (engineer.checkTransactions()) {
					system("cls");
					cout << "Неверный ввод данных! Был произведён откат данных." << endl << endl;
					engineer.DeleteTransactions();
					break;
				}
			}
			system("cls");
			salary[1] = engineer->salary.calculateSalary(engineer->getPriceProj());
			cout << "Данные обновлены!" << endl << endl;
			break;

		case 3:
			system("cls");
			{
				manager.BeginTransactions();
				manager->set();
				if (manager.checkTransactions()) {
					system("cls");
					cout << "Неверный ввод данных! Был произведён откат данных." << endl << endl;
					manager.DeleteTransactions();
					break;
				}
			}
			system("cls");
			salary[2] = manager->salary.calculateSalary(manager->getPriceProj());
			cout << "Данные обновлены!" << endl << endl;
			break;

		case 4:
			system("cls");
			{
				int ch = 0;
				while (ch != 4) {
					cout << "~~~Откат данных~~~" << endl;
					cout << "1. Разработчик;" << endl;
					cout << "2. QA-инженер;" << endl;
					cout << "3. Менеджер проекта;" << endl;
					cout << "4. Назад." << endl;
					cout << "Сделайте выбор: "; ch = ValidInput<int>::getValidValue("Ошибка! Сделайте выбор ещё раз: ");

					switch (ch) {
					case 1:
						system("cls");
						developer.DeleteTransactions();
						if (developer->salary.getBonus() != -1) {
						salary[0] = developer->salary.calculateSalary(developer->getPriceProj());
						}
						else {
							salary[0] = -1.0;
						}
						system("cls");
						cout << "Данные успешно сброшены!" << endl << endl;
						break;

					case 2:
						system("cls");
						engineer.DeleteTransactions();
						if (engineer->salary.getBonus() != -1) {
						salary[1] = engineer->salary.calculateSalary(engineer->getPriceProj());
						}
						else {
							salary[1] = -1.0;
						}
						system("cls");
						cout << "Данные успешно сброшены!" << endl << endl;
						break;

					case 3:
						system("cls");
						manager.DeleteTransactions();
						if (manager->salary.getBonus() != -1) {
						salary[2] = manager->salary.calculateSalary(manager->getPriceProj());
						}
						else {
							salary[2] = -1.0;
						}
						system("cls");
						cout << "Данные успешно сброшены!" << endl << endl;
						break;

					case 4:
						system("cls");
						break;

					default:
						system("cls");
						cout << "Неверный выбор!" << endl << endl;
					}
				}
			}
			break;

		case 5:
			system("cls");
			if (salary[0] != -1.0) {
				
				cout << fixed << setprecision(2) << "Заработная плата разработчика: " << salary[0] << "$" << endl;
				system("pause>>void");
				system("cls");
			}
			else {
				cout << "Данные о разработчике ещё не добавлены." << endl << endl;
			}
			break;

		case 6:
			system("cls");
			if (salary[1] != -1.0) {

				cout << fixed << setprecision(2) << "Заработная плата QA-инженера: " << salary[1] << "$" << endl;
				system("pause>>void");
				system("cls");
			}
			else {
				cout << "Данные о QA-инженере ещё не добавлены." << endl << endl;
			}
			break;

		case 7:
			system("cls");
			if (salary[2] != -1.0) {

				cout << fixed << setprecision(2) << "Заработная плата менеджера проекта: " << salary[2] << "$" << endl;
				system("pause>>void");
				system("cls");
			}
			else {
				cout << "Данные о менеджере проекта ещё не добавлены." << endl << endl;
			}
			break;

		case 8:
			system("cls");
			{
				int ch = 0;
				while (ch != 4) {
					cout << "~~~Вывод данных~~~" << endl;
					cout << "1. Разработчик;" << endl;
					cout << "2. QA-инженер;" << endl;
					cout << "3. Менеджер проекта;" << endl;
					cout << "4. Назад." << endl;
					cout << "Сделайте выбор: "; ch = ValidInput<int>::getValidValue("Ошибка! Сделайте выбор ещё раз: ");

					switch (ch) {
					case 1:
						system("cls");
						if (developer->salary.getNumHours() != -1) {
							cout << "~~~Разработчик~~~" << endl;
							developer->get();
							system("pause>>void");
							system("cls");
						}
						else {
							cout << "Нет ещё данных о разработчике." << endl << endl;
						}
						break;

					case 2:
						system("cls");
						if (engineer->salary.getNumHours() != -1) {
							cout << "~~~QA-инженер~~~" << endl;
							engineer->get();
							system("pause>>void");
							system("cls");
						}
						else {
							cout << "Нет ещё данных о QA-инженере." << endl << endl;
						}
						break;

					case 3:
						system("cls");
						if (manager->salary.getNumHours() != -1) {
							cout << "~~~Менеджер проекта~~~" << endl;
							manager->get();
							system("pause>>void");
							system("cls");
						}
						else {
							cout << "Нет ещё данных о менеджере проекта." << endl << endl;
						}
						break;

					case 4:
						system("cls");
						break;

					default:
						system("cls");
						cout << "Неверный выбор!" << endl << endl;
					}
				}
			}
			break;

		case 9:
			system("cls");
			break;

		default:
			system("cls");
			cout << "Неверный выбор! Попробуйте ещё раз." << endl << endl;
			break;
		}
	}

	return 0;
}