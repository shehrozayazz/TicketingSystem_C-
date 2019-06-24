
#include <conio.h>
#include <iostream>
#include <Windows.h>
#include "UsersInfo.h"


using namespace std;
class Menu :public UsersInfo
{
private:
	void Menu7(char* Option1, char* Option2, char* Option3, char* Option4, char* Option5, char* Option6, char* Option7);
	void Menu4(char* Option1, char* Option2, char* Option3,char* Option4);
public:
	void MenuMain(char* Option1, char* Option2, char* Option3,char*);
};
void Menu::Menu7(char* Option1, char* Option2, char* Option3, char* Option4, char* Option5, char* Option6, char* Option7) // Guests
{
	

	char move;

		int row = 18, col = 50;
		int i = row;
		system("cls");
		box7();
		DaewooStart();
		do
			
		
		{
			//system("cls");
			//box7();
			//DaewooStart();

		clr();
		
			

			inMenu7(Option1, Option2, Option3, Option4, Option5, Option6, Option7 );  gotoxy(5, 10);
			cout << "\t\t\t\t\t         ......................\n\t\t\t\t\t..........       MAIN MENU    ........\n\t\t\t\t\t\t ......................";			
			gotoxy(col - 4, i);

			cout << "=>";
			
			//_getch();
			move = _getch();
		
			
			if (move == 'P' ) 
			{
				if (i == 30)
				{
					i = 16;
				}
				i += 2;
			}
			if (move == 'H' ) 
			{
				if (i == 18)
				{
					i = 32;
				}
				i -= 2;
			}
			
			

			if ( move==13&& i==18) // 1  
			{
				system("cls");
				DaewooStart();
				gotoxy(10, 15);
				cout << "\n\t This Option Cannot be used in Guest Mode\n";
				_getch();

				Menu7("1-) Buy Tickets", "2-) Add Amount", "3-) Account Settings", "4-) Schedule", "5-) Delete Account", "6-) My Account", "7-) Exit.");

				//Menu4("1-) Option 1", "2-)Option 2", "3-)Option3","4-)Exit");
			}
			if (move == 'K')
				break;

			else if ( move==13 && i==20 ) // 2
			{
				system("cls");
				DaewooStart();
				gotoxy(10, 15);
				cout << "\n\t This Option Cannot be used in Guest Mode\n";
				_getch();
				Menu7("1-) Buy Tickets", "2-) Add Amount", "3-) Account Settings", "4-) Schedule", "5-) Delete Account", "6-) My Account", "7-) Exit.");

			}
			else if ( move == 13 && i == 22) // 3
			{
				system("cls");
				DaewooStart();
				gotoxy(10, 15);
				cout << "\n\t This Option Cannot be used in Guest Mode\n";
				_getch();
				Menu7("1-) Buy Tickets", "2-) Add Amount", "3-) Account Settings", "4-) Schedule", "5-) Delete Account", "6-) My Account", "7-) Exit.");


			}
			else if ( move == 13 && i == 24) // 4
			{
				system("cls");
				Menu_Schedule("1-) Lahore to Rawalpindi", "2-) Rawalpindi to Lahore", "3-) Lahore to Peshawar", "4-) Peshawar to Lahore", "5-) Lahore to Multan", "6-) Multan to Lahore", "7-) Lahore to Sargodha", "8-) Sargodha to Lahore", "9-) Lahore to Karachi", "10-) Karachi to Lahore","11-) Exit","filename");
							Menu7("1-) Buy Tickets", "2-) Add Amount", "3-) Account Settings", "4-) Schedule", "5-) Delete Account", "6-) My Account", "7-) Exit." );


					_getch();
					Menu7("1-) Buy Tickets", "2-) Add Amount", "3-) Account Settings", "4-) Schedule", "5-) Delete Account", "6-) My Account", "7-) Exit.");


			}
			else if ( move == 13 && i == 26) // 5
			{
				system("cls");
				DaewooStart();
				gotoxy(10, 15);
				cout << "\n\t This Option Cannot be used in Guest Mode\n";
				_getch();
				Menu7("1-) Buy Tickets", "2-) Add Amount", "3-) Account Settings", "4-) Schedule", "5-) Delete Account", "6-) My Account", "7-) Exit.");


			}
			else if (move == 13 && i == 28) // 6
			{
				system("cls");
				DaewooStart();
				gotoxy(10, 15);
				cout << "\n\t This Option Cannot be used in Guest Mode\n";

				_getch();
				Menu7("1-) Buy Tickets", "2-) Add Amount", "3-) Account Settings", "4-) Schedule", "5-) Delete Account", "6-) My Account", "7-) Exit.");


			}
			else if ( move == 13 && i == 30)
			{
				system("cls");
				gotoxy(30, 10);
				cout << "\n\t \"Good Bye\"\n";
				Sleep(1000);
				exit(0);			
				
			}
			

			
		} while (move != 13);

}
void Menu::Menu4(char* Option1, char* Option2, char* Option3,char* Option4)
{
	system("cls");
	char move;
	box3();
	DaewooStart();
	int row = 18, col = 50;
	int i = row;

	do


	{
		system("cls");
		box3();
		DaewooStart();
		inMenu4(Option1, Option2, Option3,Option4);



		gotoxy(col - 4, i);

		cout << "=>";

		_getch();
		move = _getch();
		clr();

		if (move == 'P')
		{
			if (i == 24)
			{
				i = 16;
			}
			i += 2;
		}
	else	if (move == 'H')
		{
			if (i == 18)
			{
				i = 26;
			}
			i -= 2;
		}
		

	else	if ( move == 13 && i == 18 )
		{
		
			system("cls");
			gotoxy(20, 20);
			cout << "\n You are in the 1st option of the menu 3\n";
			_getch();
			exit(0);
		}
		else if ( move == 13 && i == 20)
		{

			system("cls"); 			gotoxy(20, 20);

			
			cout << "\n You are in the 2nd option of the menu 3\n"; 	_getch();
			exit(0);
		}
		else if ( move == 13 && i == 22)
		{

			system("cls"); 			gotoxy(20, 20);

			
			cout << "\n You are in the 3rd option of the menu 3\n";
			_getch();
			exit(0);
		}
		else if (move == 13 && i == 24)
		{
			system("cls");
			break;

			
		}




	} while (move !=13);

}
void Menu::MenuMain(char* Option1, char* Option2, char* Option3,char* Option4)
{

	system("cls");
	char move;
	box3();
	DaewooStart();
	int row = 18, col = 50;
	int i = row;

	do


	{
		

		
		inMenu4(Option1, Option2, Option3,Option4);
		box3();
		DaewooStart();


		gotoxy(col - 4, i);

		cout << "=>";

		
		move = _getch();
		clr();

		if (move == 'P')
		{
			if (i == 24)
			{
				i = 16;
			}
			i += 2;
		}
		if (move == 'H')
		{
			if (i == 18)
			{
				i = 26;
			}
			i -= 2;
		}

		


		if ( move == 13 && i == 18) // For Guests
		{
			Menu7("1-) Buy Tickets", "2-) Add Amount", "3-) Account Settings", "4-) Schedule", "5-) Delete Account", "6-) My Account", "7-) Exit." );
		}
		else if ( move == 13 && i == 20)
		{
			system("cls");
			DaewooStart();
			gotoxy(10, 20);
			login();

			_getch();
			MenuMain("1-) Guest Mode", "2-) Login", "3-) Signup", "4-) Exit");
			exit(0);
		}
		else if (move == 13 && i == 22) //   Sign Up
		{

			system("cls");
			DaewooStart();
			 gotoxy(15, 15);
			 registerme();
			 _getch();
			MenuMain("1-) Guest Mode", "2-) Login", "3-) Signup", "4-) Exit");
		}

		else if (move == 13 && i == 24) //   Exit
		{

			system("cls");
			Sleep(500);
			exit(0);
		}




	} while (move !=13);

}

