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
		cout << "����" << endl;
		cout << "1. ��������� ������ ������������;" << endl;
		cout << "2. ��������� ������ QA-��������;" << endl;
		cout << "3. ��������� ������ ��������� ��������;" << endl;
		cout << "4. ����� ������;" << endl;
		cout << "5. ����������/������� �������� ��� ������������;" << endl;
		cout << "6. ���������/������� �������� ��� QA-��������;" << endl;
		cout << "7. ����������/������� �������� ��� ��������� ��������;" << endl;
		cout << "8. �������� ������;" << endl;
		cout << "9. �����." << endl;
		cout << "�������� �����: "; 
		choice = ValidInput<int>::getValidValue("������! �������� ����� ��� ���: ");

		switch (choice) {
		case 1:
			system("cls");
			{
				developer.BeginTransactions();
				developer->set();
				if (developer.checkTransactions()) {
					system("cls");
					cout << "�������� ���� ������! ��� ��������� ����� ������." << endl << endl;
					developer.DeleteTransactions();
					break;
				}
			}
			system("cls");
			salary[0] = developer->salary.calculateSalary(developer->getPriceProj());
			cout << "������ ���������!" << endl << endl;
			break;

		case 2:
			system("cls");
			{
				engineer.BeginTransactions();
				engineer->set();
				if (engineer.checkTransactions()) {
					system("cls");
					cout << "�������� ���� ������! ��� ��������� ����� ������." << endl << endl;
					engineer.DeleteTransactions();
					break;
				}
			}
			system("cls");
			salary[1] = engineer->salary.calculateSalary(engineer->getPriceProj());
			cout << "������ ���������!" << endl << endl;
			break;

		case 3:
			system("cls");
			{
				manager.BeginTransactions();
				manager->set();
				if (manager.checkTransactions()) {
					system("cls");
					cout << "�������� ���� ������! ��� ��������� ����� ������." << endl << endl;
					manager.DeleteTransactions();
					break;
				}
			}
			system("cls");
			salary[2] = manager->salary.calculateSalary(manager->getPriceProj());
			cout << "������ ���������!" << endl << endl;
			break;

		case 4:
			system("cls");
			{
				int ch = 0;
				while (ch != 4) {
					cout << "~~~����� ������~~~" << endl;
					cout << "1. �����������;" << endl;
					cout << "2. QA-�������;" << endl;
					cout << "3. �������� �������;" << endl;
					cout << "4. �����." << endl;
					cout << "�������� �����: "; ch = ValidInput<int>::getValidValue("������! �������� ����� ��� ���: ");

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
						cout << "������ ������� ��������!" << endl << endl;
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
						cout << "������ ������� ��������!" << endl << endl;
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
						cout << "������ ������� ��������!" << endl << endl;
						break;

					case 4:
						system("cls");
						break;

					default:
						system("cls");
						cout << "�������� �����!" << endl << endl;
					}
				}
			}
			break;

		case 5:
			system("cls");
			if (salary[0] != -1.0) {
				
				cout << fixed << setprecision(2) << "���������� ����� ������������: " << salary[0] << "$" << endl;
				system("pause>>void");
				system("cls");
			}
			else {
				cout << "������ � ������������ ��� �� ���������." << endl << endl;
			}
			break;

		case 6:
			system("cls");
			if (salary[1] != -1.0) {

				cout << fixed << setprecision(2) << "���������� ����� QA-��������: " << salary[1] << "$" << endl;
				system("pause>>void");
				system("cls");
			}
			else {
				cout << "������ � QA-�������� ��� �� ���������." << endl << endl;
			}
			break;

		case 7:
			system("cls");
			if (salary[2] != -1.0) {

				cout << fixed << setprecision(2) << "���������� ����� ��������� �������: " << salary[2] << "$" << endl;
				system("pause>>void");
				system("cls");
			}
			else {
				cout << "������ � ��������� ������� ��� �� ���������." << endl << endl;
			}
			break;

		case 8:
			system("cls");
			{
				int ch = 0;
				while (ch != 4) {
					cout << "~~~����� ������~~~" << endl;
					cout << "1. �����������;" << endl;
					cout << "2. QA-�������;" << endl;
					cout << "3. �������� �������;" << endl;
					cout << "4. �����." << endl;
					cout << "�������� �����: "; ch = ValidInput<int>::getValidValue("������! �������� ����� ��� ���: ");

					switch (ch) {
					case 1:
						system("cls");
						if (developer->salary.getNumHours() != -1) {
							cout << "~~~�����������~~~" << endl;
							developer->get();
							system("pause>>void");
							system("cls");
						}
						else {
							cout << "��� ��� ������ � ������������." << endl << endl;
						}
						break;

					case 2:
						system("cls");
						if (engineer->salary.getNumHours() != -1) {
							cout << "~~~QA-�������~~~" << endl;
							engineer->get();
							system("pause>>void");
							system("cls");
						}
						else {
							cout << "��� ��� ������ � QA-��������." << endl << endl;
						}
						break;

					case 3:
						system("cls");
						if (manager->salary.getNumHours() != -1) {
							cout << "~~~�������� �������~~~" << endl;
							manager->get();
							system("pause>>void");
							system("cls");
						}
						else {
							cout << "��� ��� ������ � ��������� �������." << endl << endl;
						}
						break;

					case 4:
						system("cls");
						break;

					default:
						system("cls");
						cout << "�������� �����!" << endl << endl;
					}
				}
			}
			break;

		case 9:
			system("cls");
			break;

		default:
			system("cls");
			cout << "�������� �����! ���������� ��� ���." << endl << endl;
			break;
		}
	}

	return 0;
}