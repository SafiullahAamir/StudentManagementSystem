#include <iostream>
#include "Functions.h"

using namespace std;

int main ()
{
	HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
	bool flag=true;

	while(flag==true)
	{
		SetConsoleTextAttribute(color,3);
		cout << "~~~~~~~~~~~~~~ STUDENT MANAGEMENT SYSTEM ~~~~~~~~~~~~~~" << endl << endl;
		cout << "                      a. ADMIN                         " << endl;
		cout << "                      b. STUDENT                       " << endl;
		cout << "                      c. QUIT                          " << endl << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;

		char choice;

		SetConsoleTextAttribute(color,7);
		cout << "Enter your Role/Posiion: ";
		cin  >> choice;

		role_validation(choice);
		system("cls");
		cout << endl;

		if(choice=='a' || choice=='A' )
		{
			bool chk=true;
			while(chk==true)
			{
				SetConsoleTextAttribute(color,3);
				cout << "~~~~~~~~~~~~~~~~~~~~ SELECT OPTION ~~~~~~~~~~~~~~~~~~~~" << endl << endl;
				cout << "               1. Enter Student Record                 " << endl;
				cout << "               2. Delete Students Record               " << endl;
				cout << "               3. Back                                 " << endl << endl;
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;

				char opt;
				SetConsoleTextAttribute(color,7);
				cout << "Enter option: ";
				cin  >> opt;

				admin_validation(opt);

				system("cls");
				switch(opt)
				{
					case '1':
						//Enter Student Record
						enter();

						cout << endl;
						cin.ignore();
						cout << "Press any key to Return.... ";
						cin.get();

						system("cls");

						break;

					case '2':
						//Delete Students Record
						remove();

						cout << endl;
						cin.ignore();
						cout << "Press any key to Return.... ";
						cin.get();

						system("cls");

						break;

					case '3':
						//Back

						system("cls");

						cout << endl;
						chk=false;
						break;
				}
			}
		}
		else if (choice=='b' || choice=='B')
		{
			SetConsoleTextAttribute(color,7);
			string name, roll_no;
			cin.ignore();
			cout << "ENTER YOUR NAME: ";
			getline(cin,name);

			cout << "\nENTER YOUR ROLL NUMBER: ";
			getline(cin,roll_no);
			cout << endl;

			bool check=true;
			while(check==true)
			{
				SetConsoleTextAttribute(color,3);
				cout << "~~~~~~~~~~~~~~~~~~~~ SELECT OPTION ~~~~~~~~~~~~~~~~~~~~" << endl << endl;
				cout << "                    1. Profile                         " << endl;
				cout << "                    2. Fee                             " << endl;
				cout << "                    3. Time Table                      " << endl;
				cout << "                    4. CGPA Calculator                 " << endl;
				cout << "                    5. Back                            " << endl << endl;
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;

				char option;

				SetConsoleTextAttribute(color,7);
				cout << "Enter option: ";
				cin  >> option;

				student_validation(option);

				system("cls");
				switch(option)
				{
					case '1':
						//Profile
						profile();

						cout << endl;
						cin.ignore();
						cout << "Press any key to Return.... ";
						cin.get();

						system("cls");

						break;

					case '2':
						//Fee
						fee();

						cin.ignore();
						cout << "Press any key to Return.... ";
						cin.get();

						system("cls");

						break;

					case '3':
						//Timetable
						time_table();

						cout << endl;
						cin.ignore();
						cout << "Press any key to Return.... ";
						cin.get();

						system("cls");

						break;

					case '4':
						//CGPA Calculator
						cgpa();

						cout << endl;
						cin.ignore();
						cout << "Press any key to Return.... ";
						cin.get();

						system("cls");

						break;

					case '5':
						//Back

						system("cls");

						check=false;

				}
			}
		}
		else
		{
			SetConsoleTextAttribute(color,9);
			cout << "\n..........(; I AM SORRY IT ENDED LIKE THIS (;..........\n" << endl;
			cout << endl;
			flag=false;
		}
	}
	return 0;
}

