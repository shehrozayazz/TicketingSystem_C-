#include <iostream>
#include <string>
#include <cstring>
#include <Windows.h>
#include <iomanip>
#include <fstream>
#include <conio.h>
#include "Schedule.h"
using namespace std;
string username;
class UsersInfo : public Schedule
{
protected:
	void Menu7Edit(char* Option1, char* Option2, char* Option3, char* Option4, char* Option5, char* Option6, char* Option7,string);
	void Menu_Schedule(char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*,string);
	void Menu_Booking(char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*,string);
	void DaewooStart();
	void box3();
	void inMenu4(char* Option1, char* Option2, char* Option3, char*);
	void inMenu_Schedule(char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*);
	void boxSchedule();
	void box7();
	void clr();
	void clrSchedule();
	void inMenu7(char* Option1, char* Option2, char* Option3, char* Option4, char* Option5, char* Option6, char* Option7);
	void Menu7Login(char* Option1, char* Option2, char* Option3, char* Option4, char* Option5, char* Option6, char* Option7, string);
	void login();
	void registerme();
	void registerpassword();
	void writetofile(string username, string password, string name, string cnic, string creditcard,string,string ,int);
	void AccountDetails(string);
};
void UsersInfo::DaewooStart()
{

	gotoxy(0, 0);
	cout << "\n\t\t\t\t\t\t ......................\n\t\t\t\t\t\t . DAEWOO APPLICATION .\n\t\t\t\t\t\t ......................\n\n";

	for (int i = 2; i < 117; i++)// upper --------
	{
		gotoxy(i, 5);
		cout << ".";
	}
	for (int i = 5; i < 37; i++)// left ||||
	{
		gotoxy(2, i);
		cout << ".";
	}
	for (int i = 2; i < 117; i++)// Lower --------
	{
		gotoxy(i, 37);
		cout << ".";
	}
	for (int i = 5; i <38; i++)// Right |||
	{
		gotoxy(117, i);
		cout << ".";


	}


}
void UsersInfo::inMenu7(char* Option1, char* Option2, char* Option3, char* Option4, char* Option5, char* Option6, char* Option7)
{
	int row = 18, col = 50;
	int i = row;

	gotoxy(col, row);
	cout << Option1;
	gotoxy(col, (row + 2));
	cout << Option2;
	gotoxy(col, (row + 4));
	cout << Option3;
	gotoxy(col, row + 6);
	cout << Option4;
	gotoxy(col, row + 8);
	cout << Option5;
	gotoxy(col, row + 10);
	cout << Option6;
	gotoxy(col, row + 12);
	cout << Option7;

}
void UsersInfo::Menu_Schedule(char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char*,string FileName)
{

	char move;
	boxSchedule();
	DaewooStart();
	int row = 14, col = 50;
	int i = row;

	do


	{
	

		inMenu_Schedule("1-) Lahore to Rawalpindi", "2-) Rawalpindi to Lahore", "3-) Lahore to Peshawar", "4-) Peshawar to Lahore", "5-) Lahore to Sargodha", "6-) Sargodha to Lahore", "7-) Lahore to Multan", "8-) Multan to Lahore", "9-) Lahore to Karachi", "10-) Karachi to Lahore", "11-) Exit");
		gotoxy(5, 9);
		cout << "\t\t\t\t\t         ......................\n\t\t\t\t\t..........       SCHEDULES    ........\n\t\t\t\t\t\t ......................";

		boxSchedule();
		DaewooStart();
		clrSchedule();


		gotoxy(col - 4, i);

		cout << "=>";


		move = _getch();

		if (move == 'P')
		{
			if (i == 34)
			{
				i = 12;
			}
			i += 2;
		}
		if (move == 'H')
		{
			if (i == 14)
			{
				i = 36;
			}
			i -= 2;
		}

		if (move == 'K') // Moving Back
		{
			system("cls");
			Menu7Login("1-) Buy Tickets", "2-) Add Cash", "3-) Account Settings", "4-) Schedule", "5-) Delete Account", "6-) My Account", "7-) Exit.", FileName);

		}


		if (move == 13 && i == 14) // lahore rawalpindi
		{
			system("cls");
			show_Lhr_Pindi();
			_getch();
			system("cls"); 
			Menu_Schedule("1-) Lahore to Rawalpindi", "2-) Rawalpindi to Lahore", "3-) Lahore to Peshawar", "4-) Peshawar to Lahore", "5-) Lahore to Multan", "6-) Multan to Lahore", "7-) Lahore to Sargodha", "8-) Sargodha to Lahore", "9-) Lahore to Karachi", "10-) Karachi to Lahore", "11-) Exit",FileName);

		}
		else if (move == 13 && i == 16) // Rawalpindi Lahore
		{
			system("cls");
			show_Pindi_Lhr();
			_getch();
			system("cls");
			Menu_Schedule("1-) Lahore to Rawalpindi", "2-) Rawalpindi to Lahore", "3-) Lahore to Peshawar", "4-) Peshawar to Lahore", "5-) Lahore to Multan", "6-) Multan to Lahore", "7-) Lahore to Sargodha", "8-) Sargodha to Lahore", "9-) Lahore to Karachi", "10-) Karachi to Lahore", "11-) Exit", FileName);


		}
		else if (move == 13 && i == 18) // Lahore to Peshawar
		{
			system("cls");
			Show_Lhr_Peshawar();
			_getch();
			system("cls");
			Menu_Schedule("1-) Lahore to Rawalpindi", "2-) Rawalpindi to Lahore", "3-) Lahore to Peshawar", "4-) Peshawar to Lahore", "5-) Lahore to Multan", "6-) Multan to Lahore", "7-) Lahore to Sargodha", "8-) Sargodha to Lahore", "9-) Lahore to Karachi", "10-) Karachi to Lahore", "11-) Exit", FileName);

		}
		else if (move == 13 && i == 20) // Peshawar to Lahore
		{

			system("cls");
			Show_Peshawar_Lhr();
			_getch();
			system("cls");
			Menu_Schedule("1-) Lahore to Rawalpindi", "2-) Rawalpindi to Lahore", "3-) Lahore to Peshawar", "4-) Peshawar to Lahore", "5-) Lahore to Multan", "6-) Multan to Lahore", "7-) Lahore to Sargodha", "8-) Sargodha to Lahore", "9-) Lahore to Karachi", "10-) Karachi to Lahore", "11-) Exit", FileName);

		}

		else if (move == 13 && i == 22) // Lahore Sargodha
		{
			system("cls");
			show_Lhr_Sargodha();
			_getch();
			system("cls");
			Menu_Schedule("1-) Lahore to Rawalpindi", "2-) Rawalpindi to Lahore", "3-) Lahore to Peshawar", "4-) Peshawar to Lahore", "5-) Lahore to Multan", "6-) Multan to Lahore", "7-) Lahore to Sargodha", "8-) Sargodha to Lahore", "9-) Lahore to Karachi", "10-) Karachi to Lahore", "11-) Exit", FileName);

		}

		else if (move == 13 && i == 24) // SArgodha Lahore
		{
			system("cls");
			show_Sargodha_Lhr();
			_getch();
			system("cls");
			Menu_Schedule("1-) Lahore to Rawalpindi", "2-) Rawalpindi to Lahore", "3-) Lahore to Peshawar", "4-) Peshawar to Lahore", "5-) Lahore to Multan", "6-) Multan to Lahore", "7-) Lahore to Sargodha", "8-) Sargodha to Lahore", "9-) Lahore to Karachi", "10-) Karachi to Lahore", "11-) Exit", FileName);

		}

		else if (move == 13 && i == 26)
		{
			system("cls");
			Show_Lhr_Multan();
			_getch();
			system("cls");
			Menu_Schedule("1-) Lahore to Rawalpindi", "2-) Rawalpindi to Lahore", "3-) Lahore to Peshawar", "4-) Peshawar to Lahore", "5-) Lahore to Multan", "6-) Multan to Lahore", "7-) Lahore to Sargodha", "8-) Sargodha to Lahore", "9-) Lahore to Karachi", "10-) Karachi to Lahore", "11-) Exit", FileName);


		}

		else if (move == 13 && i == 28)
		{
			system("cls");
			Show_Multan_Lhr();
			_getch();
			system("cls");
			Menu_Schedule("1-) Lahore to Rawalpindi", "2-) Rawalpindi to Lahore", "3-) Lahore to Peshawar", "4-) Peshawar to Lahore", "5-) Lahore to Multan", "6-) Multan to Lahore", "7-) Lahore to Sargodha", "8-) Sargodha to Lahore", "9-) Lahore to Karachi", "10-) Karachi to Lahore", "11-) Exit", FileName);

		}

		else if (move == 13 && i == 30)
		{

			system("cls");
			show_Lhr_Karachi();
			_getch();
			system("cls");
			Menu_Schedule("1-) Lahore to Rawalpindi", "2-) Rawalpindi to Lahore", "3-) Lahore to Peshawar", "4-) Peshawar to Lahore", "5-) Lahore to Multan", "6-) Multan to Lahore", "7-) Lahore to Sargodha", "8-) Sargodha to Lahore", "9-) Lahore to Karachi", "10-) Karachi to Lahore", "11-) Exit", FileName);

		}
		else if (move == 13 && i == 32)
		{

			system("cls");
			show_Karachi_Lhr();
			_getch();
			system("cls");
			Menu_Schedule("1-) Lahore to Rawalpindi", "2-) Rawalpindi to Lahore", "3-) Lahore to Peshawar", "4-) Peshawar to Lahore", "5-) Lahore to Multan", "6-) Multan to Lahore", "7-) Lahore to Sargodha", "8-) Sargodha to Lahore", "9-) Lahore to Karachi", "10-) Karachi to Lahore", "11-) Exit", FileName);

		}
		else if (move == 13 && i == 34)
		{


			exit(0);
		}







	} while (move != 13);



}
void UsersInfo::inMenu4(char* Option1, char* Option2, char* Option3, char* Option4)
{
	int row = 18, col = 50;
	int i = row;

	gotoxy(col, row);
	cout << Option1;
	gotoxy(col, (row + 2));
	cout << Option2;
	gotoxy(col, (row + 4));
	cout << Option3;
	gotoxy(col, (row + 6));
	cout << Option4;



}
void UsersInfo::inMenu_Schedule(char* Option1, char* Option2, char* Option3, char* Option4, char* Option5, char* Option6, char* Option7, char* Option8, char* Option9, char* Option10, char* Option11)
{
	int row = 14, col = 50;
	int i = row;

	gotoxy(col, row);
	cout << Option1;
	gotoxy(col, (row + 2));
	cout << Option2;
	gotoxy(col, (row + 4));
	cout << Option3;
	gotoxy(col, (row + 6));
	cout << Option4;

	gotoxy(col, (row + 8));
	cout << Option5;
	gotoxy(col, (row + 10));
	cout << Option6;
	gotoxy(col, (row + 12));
	cout << Option7;
	gotoxy(col, (row + 14));
	cout << Option8;
	gotoxy(col, (row + 16));
	cout << Option9;
	gotoxy(col, (row + 18));
	cout << Option10;
	gotoxy(col, (row + 20));
	cout << Option11;


}
void UsersInfo::box3()
{

	for (int i = 40; i <78; i++)// upper --------
	{
		gotoxy(i, 13);
		cout << ".";
	}
	for (int i = 13; i < 31; i++)// left ||||
	{
		gotoxy(40, i);
		cout << ".";
	}
	for (int i = 40; i < 78; i++)// Lower --------
	{
		gotoxy(i, 31);

		cout << ".";
	}
	for (int i = 13; i < 32; i++)// Right |||
	{
		gotoxy(78, i);
		cout << ".";


	}
}
void UsersInfo::box7()
{
	gotoxy(0, 0);
	for (int i = 40; i < 78; i++)// upper --------
	{
		gotoxy(i, 13);
		cout << ".";
	}
	for (int i = 12; i < 31; i++)// left ||||
	{
		gotoxy(40, i);
		cout << ".";
	}
	for (int i = 40; i < 78; i++)// Lower --------
	{
		gotoxy(i, 31);

		cout << ".";
	}
	for (int i = 13; i < 32; i++)// Right |||
	{
		gotoxy(78, i);
		cout << ".";


	}
}
void UsersInfo::boxSchedule()
{
	gotoxy(0, 0);
	for (int i = 40; i < 78; i++)// upper --------
	{
		gotoxy(i, 11);
		cout << ".";
	}
	for (int i = 10; i < 36; i++)// left ||||
	{
		gotoxy(40, i);
		cout << ".";
	}
	for (int i = 40; i < 78; i++)// Lower --------
	{
		gotoxy(i, 35);

		cout << ".";
	}
	for (int i = 10; i < 36; i++)// Right |||
	{
		gotoxy(78, i);
		cout << ".";


	}
}
void UsersInfo::clr()
{

	int row = 18, col = 50;

	gotoxy(col - 4, row);
	cout << "  ";
	gotoxy(col - 4, (row + 2));
	cout << "  ";
	gotoxy(col - 4, (row + 4));
	cout << "  ";
	gotoxy(col - 4, row + 6);
	cout << "  ";
	gotoxy(col - 4, row + 8);
	cout << "  ";
	gotoxy(col - 4, row + 10);
	cout << "  ";
	gotoxy(col - 4, row + 12);
	cout << "  ";

}
void UsersInfo::clrSchedule()
{

	int row = 14, col = 50;

	gotoxy(col - 4, row);
	cout << "  ";
	gotoxy(col - 4, (row + 2));
	cout << "  ";
	gotoxy(col - 4, (row + 4));
	cout << "  ";
	gotoxy(col - 4, row + 6);
	cout << "  ";
	gotoxy(col - 4, row + 8);
	cout << "  ";
	gotoxy(col - 4, row + 10);
	cout << "  ";
	gotoxy(col - 4, row + 12);
	cout << "  ";
	gotoxy(col - 4, row + 14);
	cout << "  ";
	gotoxy(col - 4, row + 16);
	cout << "  ";
	gotoxy(col - 4, row + 18);
	cout << "  ";
	gotoxy(col - 4, row + 20);
	cout << "  ";


}
void UsersInfo::writetofile(string username, string password,string name, string cnic, string creditcard,string email, string phone,int cash)
{
	
	ofstream writefile;
	string file = username + ".txt";
	writefile.open(file.c_str());
	writefile << setw(20) << left << username << endl; //00

	writefile << setw(20) << left << password << endl; //22
	writefile << setw(20) << left << cash << endl; //44
	writefile << setw(20) << left << name << endl; //66

	writefile << setw(20) << left << cnic << endl; //88
	writefile << setw(20) << left << creditcard << endl;  //110
	writefile << setw(20) << left << email << endl; //132
	writefile << setw(20) << left << phone << endl;  //154



	writefile.close();
	
}
void UsersInfo::login()
{
	system("cls");
	DaewooStart();
	string checkName;
	string checkPass;
	string user;
	gotoxy(20, 15);
	cout << "\n\t Enter username : ";
	
	getline(cin, user);
	string pass = "";

	char ch;
	gotoxy(20, 17);
	cout << "\n\t Please enter the password:" << endl;
	ch = _getch();
	gotoxy(37, 18);
	while (ch != 13)
	{
		
		
		if (ch == 8) {
		
			goto e;
		}

		else {
			pass.push_back(ch);

			cout << '*';
		}
		e:
		ch = _getch();
	}

	ifstream checkFile;
	string file = user + ".txt";
	string x = file.c_str();


	checkFile.open(x);
	if (checkFile)
	{
		checkFile.seekg(0);
		
		checkFile >> checkName;
		checkFile.seekg(22);
		checkFile >> checkPass;

		if (pass == checkPass)
		{
			checkFile.close();
			Menu7Login("1-) Buy Tickets", "2-) Add Cash", "3-) Account Settings", "4-) Schedule", "5-) Delete Account", "6-) My Account", "7-) Exit.", user);
		}
		else
			cout << "\n\n           The password is wrong \n";
		_getch();
		


		checkFile.close();
		
		

	}
	else
	{
		cout << "\n                This account doesn't exists.\n";
		_getch();
		
		
	}
	checkFile.close();
	

	
}
void UsersInfo::registerpassword()
{
	int cash = 0;
	string name;
	string password = "";
	string cnic = "";
	string creditcard = "";
	string PhoneNumber = "";
	string EmailAddress="";
	char ch;
	gotoxy(20, 15);
	cout << "Please enter the password:" << endl;
	gotoxy(50, 15);
	ch = _getch();
	while (ch != 13)
	{


		if (ch == 8) {
			
			goto e;
		}

		else {
			password.push_back(ch);

			cout << '*';
		}
	e:
		ch = _getch();
	}
	gotoxy(20, 17);
	cout << " Enter your Full Name : ";
	
	getline(cin, name);

	gotoxy(20, 19);
		cout << " Enter your C.N.I.C number : ";
	cin >> cnic;
	gotoxy(20, 21);
	cout << " Enter your credit card number : ";
	
	cin >> creditcard;
	gotoxy(20, 23);
	cout << " Enter the amount you want to put in your wallet : ";

	cin >> cash;

	gotoxy(20, 25);
	cout << " Enter your email address : ";

	cin >> EmailAddress;
	gotoxy(20, 27);
	cout << " Enter your phone number : ";

	cin >> PhoneNumber;




	cin.clear();
	cin.ignore(10000, '\n');
	
	writetofile(username, password,name,cnic,creditcard,EmailAddress,PhoneNumber,cash);
	cout << "\n  Your account has been created\n";

}
void UsersInfo::registerme()
{ 
	system("cls");
	DaewooStart();
	gotoxy(20, 13);
	cout << "Please enter your username: " << endl;
	
	gotoxy(50, 13);
	getline(cin, username);
	string file = username + ".txt";
	string x = file.c_str();
	fstream dataFile;
	dataFile.open(x, ios::in);
	if (dataFile.fail() != 1)
	{
		gotoxy(20,15);
		cout << " This username already exits. Please try an other one.";
		_getch();
		dataFile.close();
		registerme();
	}
	
	registerpassword();

}
void UsersInfo::AccountDetails(string username)
{
	ifstream checkFile;
	string file = username + ".txt";
	string x = file.c_str();



	string checkName;
	string checkPass;
	string checkCash;
	string checkNameFull;
	string checkCNIC;
	string checkCreditcard;
	string checkEmailAddress;
	string checkPhoneNumber;
	checkFile.open(x);
	
		checkFile.seekg(0);
		checkFile >> checkName;
		checkFile.seekg(22);
		checkFile >> checkPass;
		checkFile.seekg(44);
		checkFile >> checkCash;

		checkFile.seekg(66);
		
		getline(checkFile,checkNameFull);
		checkFile.seekg(88);
		checkFile >> checkCNIC;
		checkFile.seekg(110);
		checkFile >> checkCreditcard;
		checkFile.seekg(132);
		checkFile >> checkEmailAddress;
		checkFile.seekg(154);
		
		checkFile >> checkPhoneNumber;
		

		gotoxy(15, 15);
		cout << " => Userame          :  " <<setw(20)<<left<< checkName << endl;
		gotoxy(15, 17);
		cout << " => Full Name        :  " << setw(20) << left << checkNameFull << endl;
		gotoxy(15, 19);
		cout << " => Account Balance  :  " << setw(20) << left << checkCash << endl;
		gotoxy(15, 21);
		cout << " => C.N.I.C number   :  " << setw(20) << left << checkCNIC << endl;
		gotoxy(15, 23);
		cout << " => Credit card number :" << setw(20) << left << checkCreditcard << endl;
		gotoxy(15, 25);
		cout << " => Email Address    :  " << setw(20) << left << checkEmailAddress << endl;

		gotoxy(15, 27);
		cout << " => Phone number     :  " << setw(20) << left << checkPhoneNumber << endl;

		checkFile.close();
}
void UsersInfo::Menu7Login(char* Option1, char* Option2, char* Option3, char* Option4, char* Option5, char* Option6, char* Option7,string fileName)
{
	

	system("cls");
	char move;

	int row = 18, col = 50;
	int i = row;

	  box7();
	  DaewooStart();
	do


	{
		

	  clr();
	  inMenu7(Option1, Option2, Option3, Option4, Option5, Option6, Option7);  gotoxy(5, 10);
		cout << "\t\t\t\t\t         ......................\n\t\t\t\t\t..........       MAIN MENU    ........\n\t\t\t\t\t\t ......................";
		gotoxy(col - 4, i);

		cout << "=>";

	
		move = _getch();


		if (move == 'P')
		{
			if (i == 30)
			{
				i = 16;
			}
			i += 2;
		}
		if (move == 'H')
		{
			if (i == 18)
			{
				i = 32;
			}
			i -= 2;
		}



		if (move == 13 && i == 18) // 1   Booking
		{
			system("cls");
			DaewooStart();
		   Menu_Booking("1-) Lahore to Rawalpindi", "2-) Rawalpindi to Lahore", "3-) Lahore to Peshawar", "4-) Peshawar to Lahore", "5-) Lahore to Multan", "6-) Multan to Lahore", "7-) Lahore to Sargodha", "8-) Sargodha to Lahore", "9-) Lahore to Karachi", "10-) Karachi to Lahore", "11-) Exit" , fileName);
		   Menu7Login("1-) Buy Tickets", "2-) Add Cash", "3-) Account Settings", "4-) Schedule", "5-) Delete Account", "6-) My Account", "7-) Exit.", fileName);

		}
		
		else if (move == 13 && i == 20) // 2 Add Cash
		{
			int newAmount;
			int oldAmount;
			system("cls");
			DaewooStart();
			fstream f;

			string file = fileName + ".txt";
			string x = file.c_str();

			f.open(x, ios::in | ios::out);
			gotoxy(8, 13);
			cout << "  Enter the amount ( You want to add in your account ) : ";
			
				cin >> newAmount;
				while (newAmount < 0)
			{
					system("cls");
					DaewooStart();

					gotoxy(8, 11);
					cout << "  You've entered the amount in negative. : ";
					gotoxy(8, 13);
					cout << "  Kindly, Enter the amount again : ";
					cin >> newAmount;
			}
			f.seekg(44);
			f >> oldAmount;
			newAmount += oldAmount;
			f.seekp(44);
			f << left << setw(20) << newAmount << endl;
			system("cls");
			DaewooStart();

			gotoxy(8, 13);
			cout << "=>  Your new account balance is \"Rs." << newAmount<<"\""; _getch();

			f.close();
			Menu7Login("1-) Buy Tickets", "2-) Add Cash", "3-) Account Settings", "4-) Schedule", "5-) Delete Account", "6-) My Account", "7-) Exit.", fileName);

		}
		else if (move == 13 && i == 22) // 3   Account Settings
		{
			system("cls");
			  DaewooStart();
  
			  gotoxy(20, 13);
			  cout << "=> This mode requires your password ";
			  string checkPass;
			 
			  string pass = "";

			  char ch;
			  gotoxy(20, 17);
			  cout << "\n\t Please enter your password:" << endl;
			  ch = _getch();
			  gotoxy(37, 18);
			  while (ch != 13)
			  {

				  pass.push_back(ch);

				  cout << '*';
				  ch = _getch();
			  }

			  ifstream checkFile;
			  string file = fileName + ".txt";
			  string x = file.c_str();


			  checkFile.open(x);
			  
				  
				  checkFile.seekg(22);
				  checkFile >> checkPass;
				  checkFile.close();
				  if (pass == checkPass)
				  {
					  system("cls");
					  Menu7Edit("1) Change Phone Number ", "2) Change Email Address ", "3) Change Credit Card Number ", "4) Change Username ", "5) Change Password ", "6) Delete Account ", "7) Go Back ",fileName);
					  Menu7Login("1-) Buy Tickets", "2-) Add Cash", "3-) Account Settings", "4-) Schedule", "5-) Delete Account", "6-) My Account", "7-) Exit.", fileName);
				  }
				  else
				  {
					  cout << "\n\n            The password you entered is wrong \n"; _getch();
					  Menu7Login("1-) Buy Tickets", "2-) Add Cash", "3-) Account Settings", "4-) Schedule", "5-) Delete Account", "6-) My Account", "7-) Exit.", fileName);
				  }

				  checkFile.close();
			 
		}
		else if (move == 13 && i == 24) // 4  Schedule
		{
			system("cls");
			  Menu_Schedule("1-) Lahore to Rawalpindi", "2-) Rawalpindi to Lahore", "3-) Lahore to Peshawar", "4-) Peshawar to Lahore", "5-) Lahore to Multan", "6-) Multan to Lahore", "7-) Lahore to Sargodha", "8-) Sargodha to Lahore", "9-) Lahore to Karachi", "10-) Karachi to Lahore", "11-) Exit",fileName);
			  Menu7Login("1-) Buy Tickets", "2-) Add Cash", "3-) Account Settings", "4-) Schedule", "5-) Delete Account", "6-) My Account", "7-) Exit.", fileName);


		}
		else if (move == 13 && i == 26) // 5   Delete Account
		{
			system("cls");
			DaewooStart();
		
			string checkPass;

			string pass = "";

			char ch;
			gotoxy(20, 15);
			cout << "\n\t  Enter your password:" << endl;
			ch = _getch();
			gotoxy(37, 18);
			while (ch != 13)
			{

				pass.push_back(ch);

				cout << '*';
				ch = _getch();
			}

			ifstream checkFile;
			string file = fileName + ".txt";
			string x = file.c_str();
			checkFile.open(x);
			checkFile.seekg(22);
			checkFile >> checkPass;
			checkFile.close();

			if (pass == checkPass)
			{
				system("cls");
				DaewooStart();
				gotoxy(20, 22);
				gotoxy(20, 13);
				cout << "  Are you sure you want to delete this Account ? (Y/N) ";
				char choice;
				cin >> choice;
				if (choice == 'y' || choice == 'Y') {
					if (remove(file.c_str()) == 0)
					{
						gotoxy(20, 15);

						cout << "  This account has been deleted ";
						_getch();

						exit(0);
					}
					else
					{
						cout << "\n  No, Its not deleted\n";
						_getch();
					}
				}
				else
				{
					system("cls");
					break;
				}

			}
			else
			{
				gotoxy(20, 22);
				cout << "\n\n            The password you entered is wrong \n"; 	_getch();
			}


			Menu7Login("1-) Buy Tickets", "2-) Add Cash", "3-) Account Settings", "4-) Schedule", "5-) Delete Account", "6-) My Account", "7-) Exit.", fileName);


		}
		else if (move == 13 && i == 28) // 6
		{
			system("cls");
			  DaewooStart();
			AccountDetails(fileName);
			_getch();
			Menu7Login("1-) Buy Tickets", "2-) Add Cash", "3-) Account Settings", "4-) Schedule", "5-) Delete Account", "6-) My Account", "7-) Exit.", fileName);

		}
		else if (move == 13 && i == 30)
		{
			system("cls");
			gotoxy(30, 10);
			cout << "\n\t Good Bye\n";
			Sleep(1000);
			exit(0);

		}



	} while (move != 13);

}
void UsersInfo::Menu7Edit(char* Option1, char* Option2, char* Option3, char* Option4, char* Option5, char* Option6, char* Option7,string filename)
{


	char move;

	int row = 18, col = 50;
	int i = row;
	system("cls");
	box7();
	DaewooStart();
	do


	{
		

		clr();



		inMenu7(Option1, Option2, Option3, Option4, Option5, Option6, Option7); 
		gotoxy(5, 10);
		cout << "\t\t\t\t\t         ......................\n\t\t\t\t\t..........   Account Settings  ........\n\t\t\t\t\t\t ......................";
		gotoxy(col - 4, i);

		cout << "=>";

		
		move = _getch();


		if (move == 'P')
		{
			if (i == 30)
			{
				i = 16;
			}
			i += 2;
		}
		if (move == 'H')
		{
			if (i == 18)
			{
				i = 32;
			}
			i -= 2;
		}



		if (move == 13 && i == 18) // 1   phone
		{
			string newNumber;
			string oldNumber;
			system("cls");
			DaewooStart();
			fstream f;
		
			string file = filename + ".txt";
			string x = file.c_str();

			f.open(x, ios::in | ios::out);
			gotoxy(8, 13);
			cout << "  Enter your new Phone Number : ";
			cin >> newNumber;
			//===========
			gotoxy(8, 15);
			cout << "  Are you sure you want change your number ? (Y/N) ";
			char choice;
			cin >> choice;
			if (choice == 'y' || choice == 'Y')
			{
				f.seekp(154);
				f << left << setw(20) << newNumber << endl;

				gotoxy(8, 17);
				cout << "  Your new phone number is  : \"" << newNumber << "\"";
				
			}
				else
				{
					cout << "\n Your number is not changed\n";
					_getch();
				}
			

			//===========
			
			_getch();
			f.close();
				
		}

		else if (move == 13 && i == 20) // 2   Email Address
		{
			string newNumber;
			
			system("cls");
			DaewooStart();
			fstream f;

			string file = filename + ".txt";
			string x = file.c_str();

			f.open(x, ios::in | ios::out);
			gotoxy(8, 13);
			cout << "  Enter your new Email Address : ";
			cin >> newNumber;

			f.seekp(132);
			f << left << setw(20) << newNumber << endl;
			gotoxy(8, 15);
			cout << "  Your new Email address is  : \"" << newNumber << "\"";
			_getch();

			f.close();
		}
		else if (move == 13 && i == 22) // 3 Credit Card Number
		{
			string newNumber;
			
			system("cls");
			DaewooStart();
			fstream f;

			string file = filename + ".txt";
			string x = file.c_str();

			f.open(x, ios::in | ios::out);
			gotoxy(8, 13);
			cout << "  Enter your new Credit Card Number : ";
			cin >> newNumber;

			f.seekp(110);
			f << left << setw(20) << newNumber << endl;
			gotoxy(8, 15);
			cout << "  Your new Credit Card number is : \"" << newNumber << "\"";
			_getch();

			f.close();

		}
		else if (move == 13 && i == 24) // 4  change username
		{
			string newUserName;
			string oldUserName;
			system("cls");
			DaewooStart();
			fstream f;

			string file = filename + ".txt";
			string FN = file.c_str();

			f.open(FN, ios::in | ios::out);
			gotoxy(8, 13);
			cout << "  Enter your new username  : ";
			cin >> newUserName;

	string filess = newUserName + ".txt";
	string x = filess.c_str();
	fstream dataFile;
	dataFile.open(x, ios::in);


	if (dataFile.fail() != 1)
	{
		gotoxy(20,15);
		cout << " This username already exits. Please try an other one.";
		_getch();
		dataFile.close();
		f.close();
		Menu7Edit("1) Change Phone Number ", "2) Change Email Address ", "3) Change Credit Card Number ", "4) Change Username ", "5) Change Password ", "6) Delete Account ", "7) Go Back ", filename);

	}
	else
	
	{
		f.seekg(0);
		f >> oldUserName;
		string filex = oldUserName + ".txt";
		string x = filex.c_str();

		rename(filex.c_str(), filess.c_str());  // rename function
		f.seekp(0);
		f << setw(20) << left << newUserName;

		f.close();

		gotoxy(8, 15);
		cout << " Your username has been changed to \""<<newUserName<<"\"";
		_getch();


	}
			

		}
		//*****************************************
		else if (move == 13 && i == 26) // 5      Password
		{
			system("cls");
			DaewooStart();
				
			string checkPass;

			string pass = "";

			char ch;
			gotoxy(20, 15);
			cout << "\n\t  enter your old password:" << endl;
			ch = _getch();
			gotoxy(37, 18);
			while (ch != 13)
			{

				pass.push_back(ch);

				cout << '*';
				ch = _getch();
			}

			ifstream checkFile;
			string file = filename + ".txt";
			string x = file.c_str();


			checkFile.open(x);


			checkFile.seekg(22);
			checkFile >> checkPass;
			
			if (pass == checkPass)
			{
				system("cls");
				DaewooStart();

				string checkPass;

				string pass = "";
				char ch;
				gotoxy(20, 15);
				
				cout << "\n\t  Enter your new password:" << endl;
				ch = _getch();
				gotoxy(37, 18);
				while (ch != 13)
				{

					pass.push_back(ch);

					cout << '*';
					ch = _getch();
				}

				fstream f;

				string file = filename + ".txt";
				string x = file.c_str();

				f.open(x, ios::in | ios::out);
				f.seekp(22);
				f << setw(20) << left << pass;
				f.close();
			}
			else
			{
				gotoxy(20, 22);
				cout << "\n\n            The password you entered is wrong \n";
				_getch();
			}

			checkFile.close();



		}
		else if (move == 13 && i == 28) // 6  delete Account
		{

			system("cls");
			DaewooStart();
			string checkPass;
			string pass = "";
			char ch;
			gotoxy(20, 15);
			cout << "\n\t  Enter your password:" << endl;
			ch = _getch();
			gotoxy(37, 18);
			while (ch != 13)
			{
				pass.push_back(ch);
				cout << '*';
				ch = _getch();
			}
			ifstream checkFile;
			string file = filename + ".txt";
			string x = file.c_str();
			const char *cstr = file.c_str();
			checkFile.open(x);
			checkFile.seekg(22);
			checkFile >> checkPass;
			checkFile.close();		
			if (pass == checkPass)
			{
				system("cls");
				DaewooStart();
				
				gotoxy(20, 13);
				cout << "  Are you sure you want to delete this Account ? (Y/N) ";
				char choice;
				cin >> choice;
				if (choice == 'y' || choice == 'Y') 
				{
					if (remove(file.c_str()) == 0)
					{
						gotoxy(20, 15);

						cout << "  This account has been deleted ";
						_getch();

						exit(0);
					}
					else
					{
						cout << "\n  No, Its not deleted\n";
						_getch();
					}
				}
				else
				{
					system("cls");
					break;
				}

			}
			else
			{
				gotoxy(20, 22);
				cout << "\n\n            The password you entered is wrong \n";
			}


		}

			

		
		else if (move == 13 && i == 30) // 7 Go Back
		{
			system("cls");
			break;

		}



	} while (move != 13);

}
void UsersInfo::Menu_Booking(char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char*,string filename)
{
    system("cls");
	char move;
	boxSchedule();
	DaewooStart();
	int row = 14, col = 50;
	int i = row;

	do


	{
	

		inMenu_Schedule("1-) Lahore to Rawalpindi", "2-) Rawalpindi to Lahore", "3-) Lahore to Peshawar", "4-) Peshawar to Lahore", "5-) Lahore to Multan", "6-) Multan to Lahore", "7-) Lahore to Sargodha", "8-) Sargodha to Lahore", "9-) Lahore to Karachi", "10-) Karachi to Lahore", "11-) Exit");
		gotoxy(5, 9);
		cout << "\t\t\t\t\t         ......................\n\t\t\t\t\t..........       SCHEDULES    ........\n\t\t\t\t\t\t ......................";

		boxSchedule();
		DaewooStart();
		clrSchedule();


		gotoxy(col - 4, i);

		cout << "=>";


		move = _getch();

		if (move == 'P')
		{
			if (i == 34)
			{
				i = 12;
			}
			i += 2;
		}
		if (move == 'H')
		{
			if (i == 14)
			{
				i = 36;
			}
			i -= 2;
		}

		if (move == 'K')
		{
			Menu7Login("1-) Buy Tickets", "2-) Add Cash", "3-) Account Settings", "4-) Schedule", "5-) Delete Account", "6-) My Account", "7-) Exit.", filename);

		}


		if (move == 13 && i == 14) // Lahore to Pindi
		{
			int ticket = 1180;

		
			int oldAmount;
			system("cls");
			DaewooStart();
			gotoxy(8, 13);
			cout << "  Are you sure you want to but this ticket worth \"Rs.1180\" ? (Y/N)  ";
			char choice;
			cin >> choice;
			if (choice == 'y' || choice == 'Y') {
				fstream f;

				string file = filename + ".txt";
				string x = file.c_str();

				f.open(x, ios::in | ios::out);
				

				f.seekg(44);
				f >> oldAmount;
				if (oldAmount >= 1180)
				{

					oldAmount -= ticket;
					f.seekp(44);
					f << left << setw(20) << oldAmount << endl;
					gotoxy(8, 15);
					cout << " Rs.1180 has been deducted from your account. ";
					gotoxy(8, 17);
					cout << " Your new account balance is : " << oldAmount << endl;
					
					f.close();
					_getch();
					Menu_Booking("1-) Lahore to Rawalpindi", "2-) Rawalpindi to Lahore", "3-) Lahore to Peshawar", "4-) Peshawar to Lahore", "5-) Lahore to Multan", "6-) Multan to Lahore", "7-) Lahore to Sargodha", "8-) Sargodha to Lahore", "9-) Lahore to Karachi", "10-) Karachi to Lahore", "11-) Exit", filename);
				}
				else
				{
					gotoxy(8, 15);
					cout << " Your Account balance is low (i.e below Rs.1180 .Kindly recharge your balance and try again! ";
					gotoxy(8, 17);
					cout << "  Your current balance is : " << oldAmount << endl;
					_getch();
				}

				f.close();
			}
			else
			{
				Menu_Booking("1-) Lahore to Rawalpindi", "2-) Rawalpindi to Lahore", "3-) Lahore to Peshawar", "4-) Peshawar to Lahore", "5-) Lahore to Multan", "6-) Multan to Lahore", "7-) Lahore to Sargodha", "8-) Sargodha to Lahore", "9-) Lahore to Karachi", "10-) Karachi to Lahore", "11-) Exit", filename);
			}
			
		}
		else if (move == 13 && i == 16) // pindi to lahore
		{
			int ticket = 1180;

			
			int oldAmount;
			system("cls");
			DaewooStart();
			gotoxy(8, 13);
			cout << "  Are you sure you want to but this ticket worth \"Rs.1180\" ? (Y/N)  ";
			char choice;
			cin >> choice;
			if (choice == 'y' || choice == 'Y') {
				fstream f;

				string file = filename + ".txt";
				string x = file.c_str();

				f.open(x, ios::in | ios::out);


				f.seekg(44);
				f >> oldAmount;
				if (oldAmount >= 1180)
				{

					oldAmount -= ticket;
					f.seekp(44);
					f << left << setw(20) << oldAmount << endl;
					gotoxy(8, 15);
					cout << " Rs.1180 has been deducted from your account. ";
					gotoxy(8, 17);
					cout << " Your new account balance is : " << oldAmount << endl;

					f.close();
					_getch();
					Menu_Booking("1-) Lahore to Rawalpindi", "2-) Rawalpindi to Lahore", "3-) Lahore to Peshawar", "4-) Peshawar to Lahore", "5-) Lahore to Multan", "6-) Multan to Lahore", "7-) Lahore to Sargodha", "8-) Sargodha to Lahore", "9-) Lahore to Karachi", "10-) Karachi to Lahore", "11-) Exit", filename);
				}
				else
				{
					gotoxy(8, 15);
					cout << " Your Account balance is low (i.e below Rs.1180 .Kindly recharge your balance and try again! ";
					gotoxy(8, 17);
					cout << "  Your current balance is : " << oldAmount << endl;
					_getch();
				}

				f.close();
			}
			else
			{
				Menu_Booking("1-) Lahore to Rawalpindi", "2-) Rawalpindi to Lahore", "3-) Lahore to Peshawar", "4-) Peshawar to Lahore", "5-) Lahore to Multan", "6-) Multan to Lahore", "7-) Lahore to Sargodha", "8-) Sargodha to Lahore", "9-) Lahore to Karachi", "10-) Karachi to Lahore", "11-) Exit", filename);
			}



		}
		else if (move == 13 && i == 18) // lahore to peshawer
		{
			int ticket = 1050;

		
			int oldAmount;
			system("cls");
			DaewooStart();
			gotoxy(8, 13);
			cout << "  Are you sure you want to but this ticket worth \"Rs.1050\" ? (Y/N)  ";
			char choice;
			cin >> choice;
			if (choice == 'y' || choice == 'Y') {
				fstream f;

				string file = filename + ".txt";
				string x = file.c_str();

				f.open(x, ios::in | ios::out);


				f.seekg(44);
				f >> oldAmount;
				if (oldAmount >= 1050)
				{

					oldAmount -= ticket;
					f.seekp(44);
					f << left << setw(20) << oldAmount << endl;
					gotoxy(8, 15);
					cout << " Rs.1050 has been deducted from your account. ";
					gotoxy(8, 17);
					cout << " Your new account balance is : " << oldAmount << endl;

					f.close();
					_getch();
					Menu_Booking("1-) Lahore to Rawalpindi", "2-) Rawalpindi to Lahore", "3-) Lahore to Peshawar", "4-) Peshawar to Lahore", "5-) Lahore to Multan", "6-) Multan to Lahore", "7-) Lahore to Sargodha", "8-) Sargodha to Lahore", "9-) Lahore to Karachi", "10-) Karachi to Lahore", "11-) Exit", filename);
				}
				else
				{
					gotoxy(8, 15);
					cout << " Your Account balance is low (i.e below Rs.1050 .Kindly recharge your balance and try again! ";
					gotoxy(8, 17);
					cout << "  Your current balance is : " << oldAmount << endl;
					_getch();
				}

				f.close();
			}
			else
			{
				Menu_Booking("1-) Lahore to Rawalpindi", "2-) Rawalpindi to Lahore", "3-) Lahore to Peshawar", "4-) Peshawar to Lahore", "5-) Lahore to Multan", "6-) Multan to Lahore", "7-) Lahore to Sargodha", "8-) Sargodha to Lahore", "9-) Lahore to Karachi", "10-) Karachi to Lahore", "11-) Exit", filename);
			}



		}
		else if (move == 13 && i == 20) // Peshawar to Lahore
		{
			int ticket = 1050;

		
			int oldAmount;
			system("cls");
			DaewooStart();
			gotoxy(8, 13);
			cout << "  Are you sure you want to but this ticket worth \"Rs.1050\" ? (Y/N)  ";
			char choice;
			cin >> choice;
			if (choice == 'y' || choice == 'Y') {
				fstream f;

				string file = filename + ".txt";
				string x = file.c_str();

				f.open(x, ios::in | ios::out);


				f.seekg(44);
				f >> oldAmount;
				if (oldAmount >= 1050)
				{

					oldAmount -= ticket;
					f.seekp(44);
					f << left << setw(20) << oldAmount << endl;
					gotoxy(8, 15);
					cout << " Rs.1050 has been deducted from your account. ";
					gotoxy(8, 17);
					cout << " Your new account balance is : " << oldAmount << endl;

					f.close();
					_getch();
					Menu_Booking("1-) Lahore to Rawalpindi", "2-) Rawalpindi to Lahore", "3-) Lahore to Peshawar", "4-) Peshawar to Lahore", "5-) Lahore to Multan", "6-) Multan to Lahore", "7-) Lahore to Sargodha", "8-) Sargodha to Lahore", "9-) Lahore to Karachi", "10-) Karachi to Lahore", "11-) Exit", filename);
				}
				else
				{
					gotoxy(8, 15);
					cout << " Your Account balance is low (i.e below Rs.1050 .Kindly recharge your balance and try again! ";
					gotoxy(8, 17);
					cout << "  Your current balance is : " << oldAmount << endl;
					_getch();
				}

				f.close();
			}
			else
			{
				Menu_Booking("1-) Lahore to Rawalpindi", "2-) Rawalpindi to Lahore", "3-) Lahore to Peshawar", "4-) Peshawar to Lahore", "5-) Lahore to Multan", "6-) Multan to Lahore", "7-) Lahore to Sargodha", "8-) Sargodha to Lahore", "9-) Lahore to Karachi", "10-) Karachi to Lahore", "11-) Exit", filename);
			}


		}

		else if (move == 13 && i == 22) // Lahore to Sargodha
		{
			int ticket = 400;

			int oldAmount;
			system("cls");
			DaewooStart();
			gotoxy(8, 13);
			cout << "  Are you sure you want to but this ticket worth \"Rs.400\" ? (Y/N)  ";
			char choice;
			cin >> choice;
			if (choice == 'y' || choice == 'Y') {
				fstream f;

				string file = filename + ".txt";
				string x = file.c_str();

				f.open(x, ios::in | ios::out);


				f.seekg(44);
				f >> oldAmount;
				if (oldAmount >= 400)
				{

					oldAmount -= ticket;
					f.seekp(44);
					f << left << setw(20) << oldAmount << endl;
					gotoxy(8, 15);
					cout << " Rs.400 has been deducted from your account. ";
					gotoxy(8, 17);
					cout << " Your new account balance is : " << oldAmount << endl;

					f.close();
					_getch();
					Menu_Booking("1-) Lahore to Rawalpindi", "2-) Rawalpindi to Lahore", "3-) Lahore to Peshawar", "4-) Peshawar to Lahore", "5-) Lahore to Multan", "6-) Multan to Lahore", "7-) Lahore to Sargodha", "8-) Sargodha to Lahore", "9-) Lahore to Karachi", "10-) Karachi to Lahore", "11-) Exit", filename);
				}
				else
				{
					gotoxy(8, 15);
					cout << " Your Account balance is low (i.e below Rs.1180 .Kindly recharge your balance and try again! ";
					gotoxy(8, 17);
					cout << "  Your current balance is : " << oldAmount << endl;
					_getch();
				}

				f.close();
			}
			else
			{
				Menu_Booking("1-) Lahore to Rawalpindi", "2-) Rawalpindi to Lahore", "3-) Lahore to Peshawar", "4-) Peshawar to Lahore", "5-) Lahore to Multan", "6-) Multan to Lahore", "7-) Lahore to Sargodha", "8-) Sargodha to Lahore", "9-) Lahore to Karachi", "10-) Karachi to Lahore", "11-) Exit", filename);
			}



		}

		else if (move == 13 && i == 24) // Sargodha to Lahore
		{
			int ticket = 400;

			int oldAmount;
			system("cls");
			DaewooStart();
			gotoxy(8, 13);
			cout << "  Are you sure you want to but this ticket worth \"Rs.400\" ? (Y/N)  ";
			char choice;
			cin >> choice;
			if (choice == 'y' || choice == 'Y') {
				fstream f;

				string file = filename + ".txt";
				string x = file.c_str();

				f.open(x, ios::in | ios::out);


				f.seekg(44);
				f >> oldAmount;
				if (oldAmount >= 400)
				{

					oldAmount -= ticket;
					f.seekp(44);
					f << left << setw(20) << oldAmount << endl;
					gotoxy(8, 15);
					cout << " Rs.400 has been deducted from your account. ";
					gotoxy(8, 17);
					cout << " Your new account balance is : " << oldAmount << endl;

					f.close();
					_getch();
					Menu_Booking("1-) Lahore to Rawalpindi", "2-) Rawalpindi to Lahore", "3-) Lahore to Peshawar", "4-) Peshawar to Lahore", "5-) Lahore to Multan", "6-) Multan to Lahore", "7-) Lahore to Sargodha", "8-) Sargodha to Lahore", "9-) Lahore to Karachi", "10-) Karachi to Lahore", "11-) Exit", filename);
				}
				else
				{
					gotoxy(8, 15);
					cout << " Your Account balance is low (i.e below Rs.400 .Kindly recharge your balance and try again! ";
					gotoxy(8, 17);
					cout << "  Your current balance is : " << oldAmount << endl;
					_getch();
				}

				f.close();
			}
			else
			{
				Menu_Booking("1-) Lahore to Rawalpindi", "2-) Rawalpindi to Lahore", "3-) Lahore to Peshawar", "4-) Peshawar to Lahore", "5-) Lahore to Multan", "6-) Multan to Lahore", "7-) Lahore to Sargodha", "8-) Sargodha to Lahore", "9-) Lahore to Karachi", "10-) Karachi to Lahore", "11-) Exit", filename);
			}


		}

		else if (move == 13 && i == 26) // Lahore to Multan
		{
			int ticket = 800;
			int oldAmount;
			system("cls");
			DaewooStart();
			gotoxy(8, 13);
			cout << "  Are you sure you want to but this ticket worth \"Rs.800\" ? (Y/N)  ";
			char choice;
			cin >> choice;
			if (choice == 'y' || choice == 'Y') {
				fstream f;

				string file = filename + ".txt";
				string x = file.c_str();

				f.open(x, ios::in | ios::out);


				f.seekg(44);
				f >> oldAmount;
				if (oldAmount >= 800)
				{

					oldAmount -= ticket;
					f.seekp(44);
					f << left << setw(20) << oldAmount << endl;
					gotoxy(8, 15);
					cout << " Rs.800 has been deducted from your account. ";
					gotoxy(8, 17);
					cout << " Your new account balance is : " << oldAmount << endl;

					f.close();
					_getch();
					Menu_Booking("1-) Lahore to Rawalpindi", "2-) Rawalpindi to Lahore", "3-) Lahore to Peshawar", "4-) Peshawar to Lahore", "5-) Lahore to Multan", "6-) Multan to Lahore", "7-) Lahore to Sargodha", "8-) Sargodha to Lahore", "9-) Lahore to Karachi", "10-) Karachi to Lahore", "11-) Exit", filename);
				}
				else
				{
					gotoxy(8, 15);
					cout << " Your Account balance is low (i.e below Rs.800 .Kindly recharge your balance and try again! ";
					gotoxy(8, 17);
					cout << "  Your current balance is : " << oldAmount << endl;
					_getch();
				}

				f.close();
			}
			else
			{
				Menu_Booking("1-) Lahore to Rawalpindi", "2-) Rawalpindi to Lahore", "3-) Lahore to Peshawar", "4-) Peshawar to Lahore", "5-) Lahore to Multan", "6-) Multan to Lahore", "7-) Lahore to Sargodha", "8-) Sargodha to Lahore", "9-) Lahore to Karachi", "10-) Karachi to Lahore", "11-) Exit", filename);
			}




		}

		else if (move == 13 && i == 28) // Multan to Lahore
		{
			int ticket = 800;
			int oldAmount;
			system("cls");
			DaewooStart();
			gotoxy(8, 13);
			cout << "  Are you sure you want to but this ticket worth \"Rs.800\" ? (Y/N)  ";
			char choice;
			cin >> choice;
			if (choice == 'y' || choice == 'Y') {
				fstream f;

				string file = filename + ".txt";
				string x = file.c_str();

				f.open(x, ios::in | ios::out);


				f.seekg(44);
				f >> oldAmount;
				if (oldAmount >= 800)
				{

					oldAmount -= ticket;
					f.seekp(44);
					f << left << setw(20) << oldAmount << endl;
					gotoxy(8, 15);
					cout << " Rs.800 has been deducted from your account. ";
					gotoxy(8, 17);
					cout << " Your new account balance is : " << oldAmount << endl;

					f.close();
					_getch();
					Menu_Booking("1-) Lahore to Rawalpindi", "2-) Rawalpindi to Lahore", "3-) Lahore to Peshawar", "4-) Peshawar to Lahore", "5-) Lahore to Multan", "6-) Multan to Lahore", "7-) Lahore to Sargodha", "8-) Sargodha to Lahore", "9-) Lahore to Karachi", "10-) Karachi to Lahore", "11-) Exit", filename);
				}
				else
				{
					gotoxy(8, 15);
					cout << " Your Account balance is low (i.e below Rs.800 .Kindly recharge your balance and try again! ";
					gotoxy(8, 17);
					cout << "  Your current balance is : " << oldAmount << endl;
					_getch();
				}

				f.close();
			}
			else
			{
				Menu_Booking("1-) Lahore to Rawalpindi", "2-) Rawalpindi to Lahore", "3-) Lahore to Peshawar", "4-) Peshawar to Lahore", "5-) Lahore to Multan", "6-) Multan to Lahore", "7-) Lahore to Sargodha", "8-) Sargodha to Lahore", "9-) Lahore to Karachi", "10-) Karachi to Lahore", "11-) Exit", filename);
			}

		}

		else if (move == 13 && i == 30) // Lahore to Karachi 
		{
			int ticket = 4180;
			int oldAmount;
			system("cls");
			DaewooStart();
			gotoxy(8, 13);
			cout << "  Are you sure you want to but this ticket worth \"Rs.4180\" ? (Y/N)  ";
			char choice;
			cin >> choice;
			if (choice == 'y' || choice == 'Y') {
				fstream f;

				string file = filename + ".txt";
				string x = file.c_str();

				f.open(x, ios::in | ios::out);


				f.seekg(44);
				f >> oldAmount;
				if (oldAmount >= 4180)
				{

					oldAmount -= ticket;
					f.seekp(44);
					f << left << setw(20) << oldAmount << endl;
					gotoxy(8, 15);
					cout << " Rs.4180 has been deducted from your account. ";
					gotoxy(8, 17);
					cout << " Your new account balance is : " << oldAmount << endl;

					f.close();
					_getch();
					Menu_Booking("1-) Lahore to Rawalpindi", "2-) Rawalpindi to Lahore", "3-) Lahore to Peshawar", "4-) Peshawar to Lahore", "5-) Lahore to Multan", "6-) Multan to Lahore", "7-) Lahore to Sargodha", "8-) Sargodha to Lahore", "9-) Lahore to Karachi", "10-) Karachi to Lahore", "11-) Exit", filename);
				}
				else
				{
					gotoxy(8, 15);
					cout << " Your Account balance is low (i.e below Rs.4180 .Kindly recharge your balance and try again! ";
					gotoxy(8, 17);
					cout << "  Your current balance is : " << oldAmount << endl;
					_getch();
				}

				f.close();
			}
			else
			{
				Menu_Booking("1-) Lahore to Rawalpindi", "2-) Rawalpindi to Lahore", "3-) Lahore to Peshawar", "4-) Peshawar to Lahore", "5-) Lahore to Multan", "6-) Multan to Lahore", "7-) Lahore to Sargodha", "8-) Sargodha to Lahore", "9-) Lahore to Karachi", "10-) Karachi to Lahore", "11-) Exit", filename);
			}





		}
		else if (move == 13 && i == 32) // Karachi to ALhore
		{

			int ticket = 4180;

			int oldAmount;
			system("cls");
			DaewooStart();
			gotoxy(8, 13);
			cout << "  Are you sure you want to but this ticket worth \"Rs.4180\" ? (Y/N)  ";
			char choice;
			cin >> choice;
			if (choice == 'y' || choice == 'Y') {
				fstream f;

				string file = filename + ".txt";
				string x = file.c_str();

				f.open(x, ios::in | ios::out);


				f.seekg(44);
				f >> oldAmount;
				if (oldAmount >= 4180)
				{

					oldAmount -= ticket;
					f.seekp(44);
					f << left << setw(20) << oldAmount << endl;
					gotoxy(8, 15);
					cout << " Rs.4180 has been deducted from your account. ";
					gotoxy(8, 17);
					cout << " Your new account balance is : " << oldAmount << endl;

					f.close();
					_getch();
					Menu_Booking("1-) Lahore to Rawalpindi", "2-) Rawalpindi to Lahore", "3-) Lahore to Peshawar", "4-) Peshawar to Lahore", "5-) Lahore to Multan", "6-) Multan to Lahore", "7-) Lahore to Sargodha", "8-) Sargodha to Lahore", "9-) Lahore to Karachi", "10-) Karachi to Lahore", "11-) Exit", filename);
				}
				else
				{
					gotoxy(8, 15);
					cout << " Your Account balance is low (i.e below Rs.4180 .Kindly recharge your balance and try again! ";
					gotoxy(8, 17);
					cout << "  Your current balance is : " << oldAmount << endl;
					_getch();
				}

				f.close();
			}
			else
			{
				Menu_Booking("1-) Lahore to Rawalpindi", "2-) Rawalpindi to Lahore", "3-) Lahore to Peshawar", "4-) Peshawar to Lahore", "5-) Lahore to Multan", "6-) Multan to Lahore", "7-) Lahore to Sargodha", "8-) Sargodha to Lahore", "9-) Lahore to Karachi", "10-) Karachi to Lahore", "11-) Exit", filename);
			}
		}
		else if (move == 13 && i == 34)
		{


			exit(0);
		}

	} while (move != 13);



}
