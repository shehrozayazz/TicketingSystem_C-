#pragma once
#include <fstream>
#include <Windows.h>
#include <conio.h>
#include <iostream>
#include <iomanip>

using namespace std;

class Schedule 
{
protected:
	void gotoxy(int column, int line)
	{
		COORD coord;
		coord.X = column;
		coord.Y = line;
		SetConsoleCursorPosition(
			GetStdHandle(STD_OUTPUT_HANDLE),
			coord
		);
	}
	void written_Multan_Lhr()
	{
		fstream f;
		f.open("Multan_Lhr.txt", ios::in | ios::out);

		f.seekg(0);
		f << setw(100) << left << "                                        =>   Multan to Lahore " << endl;
		f.seekg(102);
		f << setw(100) << left << "                                             ===================== " << endl;
		f.seekg(204);
		f << setw(40) << left << "                    DEPARTURE   " << setw(20) << left << "     ARRIVAL   " << setw(20) << left << "      FARE " << setw(20) << "   BUS  " << endl;
		f.seekg(306);
		f << setw(40) << left << "                    ==========   " << setw(20) << left << "     ========   " << setw(20) << left << "      ======= " << setw(20) << "   ====  " << endl;
		f.seekg(408);
		f << setw(40) << left << "               =>  06:00 AM   " << setw(20) << left << "     11:15 PM  " << setw(20) << left << "      Rs.800/- " << setw(20) << " Super Luxary  " << endl;
		f.seekg(510);
		f << setw(40) << left << "               =>  07:00 AM   " << setw(20) << left << "     12:15 PM  " << setw(20) << left << "      Rs.800/- " << setw(20) << " Super Luxary  " << endl;
		f.seekg(612);
		f << setw(40) << left << "               =>  09:00 AM   " << setw(20) << left << "     02:15 PM  " << setw(20) << left << "      Rs.800/- " << setw(20) << " Super Luxary  " << endl;
		f.seekg(714);
		f << setw(40) << left << "               =>  10:00 AM   " << setw(20) << left << "     03:15 PM  " << setw(20) << left << "      Rs.1000/- " << setw(20) << "   Premium  " << endl;
		f.seekg(816);
		f << setw(40) << left << "               =>  11:00 AM   " << setw(20) << left << "     04:30 PM  " << setw(20) << left << "      Rs.800/- " << setw(20) << " Super Luxary  " << endl;
		f.seekg(918);
		f << setw(40) << left << "               =>  01:00 PM   " << setw(20) << left << "     06:15 PM  " << setw(20) << left << "      Rs.800/- " << setw(20) << " Super Luxary  " << endl;
		f.seekg(1020);
		f << setw(40) << left << "               =>  04:00 PM   " << setw(20) << left << "     09:15 PM  " << setw(20) << left << "      Rs.1000/- " << setw(20) << "   Premium  " << endl;
		f.seekg(1122);
		f << setw(40) << left << "               =>  05:00 PM   " << setw(20) << left << "     10:30 PM  " << setw(20) << left << "      Rs.800/- " << setw(20) << " Super Luxary  " << endl;
		f.seekg(1224);
		f << setw(40) << left << "               =>  09:00 PM   " << setw(20) << left << "     02:15 AM  " << setw(20) << left << "      Rs.800/- " << setw(20) << " Siper Luxary  " << endl;

		f.close();
	}
	void written_Lhr_Multan()
	{
		fstream f;
		f.open("Lhr_Multan.txt", ios::in | ios::out);

		f.seekg(0);
		f << setw(100) << left << "                                        =>   Lahore to Multan " << endl;
		f.seekg(102);
		f << setw(100) << left << "                                             ===================== " << endl;
		f.seekg(204);
		f << setw(40) << left << "                    DEPARTURE   " << setw(20) << left << "     ARRIVAL   " << setw(20) << left << "      FARE " << setw(20) << "   BUS  " << endl;
		f.seekg(306);
		f << setw(40) << left << "                    ==========   " << setw(20) << left << "     ========   " << setw(20) << left << "      ======= " << setw(20) << "   ====  " << endl;
		f.seekg(408);
		f << setw(40) << left << "               =>  06:00 AM   " << setw(20) << left << "     11:15 PM  " << setw(20) << left << "      Rs.800/- " << setw(20) << " Super Luxary  " << endl;
		f.seekg(510);
		f << setw(40) << left << "               =>  07:00 AM   " << setw(20) << left << "     12:15 PM  " << setw(20) << left << "      Rs.800/- " << setw(20) << " Super Luxary  " << endl;
		f.seekg(612);
		f << setw(40) << left << "               =>  09:00 AM   " << setw(20) << left << "     02:15 PM  " << setw(20) << left << "      Rs.800/- " << setw(20) << " Super Luxary  " << endl;
		f.seekg(714);
		f << setw(40) << left << "               =>  10:00 AM   " << setw(20) << left << "     03:15 PM  " << setw(20) << left << "      Rs.1000/- " << setw(20) << "   Premium  " << endl;
		f.seekg(816);
		f << setw(40) << left << "               =>  11:00 AM   " << setw(20) << left << "     04:30 PM  " << setw(20) << left << "      Rs.800/- " << setw(20) << " Super Luxary  " << endl;
		f.seekg(918);
		f << setw(40) << left << "               =>  01:00 PM   " << setw(20) << left << "     06:15 PM  " << setw(20) << left << "      Rs.800/- " << setw(20) << " Super Luxary  " << endl;
		f.seekg(1020);
		f << setw(40) << left << "               =>  04:00 PM   " << setw(20) << left << "     09:15 PM  " << setw(20) << left << "      Rs.1000/- " << setw(20) << "   Premium  " << endl;
		f.seekg(1122);
		f << setw(40) << left << "               =>  05:00 PM   " << setw(20) << left << "     10:30 PM  " << setw(20) << left << "      Rs.800/- " << setw(20) << " Super Luxary  " << endl;
		f.seekg(1224);
		f << setw(40) << left << "               =>  09:00 PM   " << setw(20) << left << "     02:15 AM  " << setw(20) << left << "      Rs.800/- " << setw(20) << " Siper Luxary  " << endl;
		f.close();

	}
	void written_Peshawar_Lhr()
	{
		fstream f;
		f.open("Peshawar_Lhr.txt", ios::in | ios::out);

		f.seekg(0);
		f << setw(100) << left << "                                        =>   Peshawar to Lahore " << endl;
		f.seekg(102);
		f << setw(100) << left << "                                             ===================== " << endl;
		f.seekg(204);
		f << setw(40) << left << "                    DEPARTURE   " << setw(20) << left << "     ARRIVAL   " << setw(20) << left << "      FARE " << setw(20) << "   BUS  " << endl;
		f.seekg(306);
		f << setw(40) << left << "                    ==========   " << setw(20) << left << "     ========   " << setw(20) << left << "      ======= " << setw(20) << "   ====  " << endl;
		f.seekg(408);
		f << setw(40) << left << "               =>  06:00 AM   " << setw(20) << left << "     12:15 PM  " << setw(20) << left << "      Rs.1050/- " << setw(20) << " Super Luxary  " << endl;
		f.seekg(510);
		f << setw(40) << left << "               =>  07:00 AM   " << setw(20) << left << "     01:15 PM  " << setw(20) << left << "      Rs.1050/- " << setw(20) << " Super Luxary  " << endl;
		f.seekg(612);
		f << setw(40) << left << "               =>  09:00 AM   " << setw(20) << left << "     03:15 PM  " << setw(20) << left << "      Rs.1050/- " << setw(20) << " Super Luxary  " << endl;
		f.seekg(714);
		f << setw(40) << left << "               =>  10:00 AM   " << setw(20) << left << "     04:15 PM  " << setw(20) << left << "      Rs.1250/- " << setw(20) << "   Premium  " << endl;
		f.seekg(816);
		f << setw(40) << left << "               =>  11:00 AM   " << setw(20) << left << "     05:30 PM  " << setw(20) << left << "      Rs.1050/- " << setw(20) << " Super Luxary  " << endl;
		f.seekg(918);
		f << setw(40) << left << "               =>  01:00 PM   " << setw(20) << left << "     07:15 PM  " << setw(20) << left << "      Rs.1050/- " << setw(20) << " Super Luxary  " << endl;
		f.seekg(1020);
		f << setw(40) << left << "               =>  04:00 PM   " << setw(20) << left << "     10:15 PM  " << setw(20) << left << "      Rs.1250/- " << setw(20) << "   Premium  " << endl;
		f.seekg(1122);
		f << setw(40) << left << "               =>  05:00 PM   " << setw(20) << left << "     11:30 PM  " << setw(20) << left << "      Rs.1050/- " << setw(20) << " Super Luxary  " << endl;
		f.seekg(1224);
		f << setw(40) << left << "               =>  09:00 PM   " << setw(20) << left << "     03:15 AM  " << setw(20) << left << "      Rs.1050/- " << setw(20) << " Siper Luxary  " << endl;
		f.close();

	}
	void written_Lhr_Peshawar()
	{
		fstream f;
		f.open("Lhr_Peshawar.txt", ios::in | ios::out);

		f.seekg(0);
		f << setw(100) << left << "                                        =>   Lahore to Peshawar " << endl;
		f.seekg(102);
		f << setw(100) << left << "                                             ===================== " << endl;
		f.seekg(204);
		f << setw(40) << left << "                    DEPARTURE   " << setw(20) << left << "     ARRIVAL   " << setw(20) << left << "      FARE " << setw(20) << "   BUS  " << endl;
		f.seekg(306);
		f << setw(40) << left << "                    ==========   " << setw(20) << left << "     ========   " << setw(20) << left << "      ======= " << setw(20) << "   ====  " << endl;
		f.seekg(408);
		f << setw(40) << left << "               =>  06:00 AM   " << setw(20) << left << "     12:15 PM  " << setw(20) << left << "      Rs.1050/- " << setw(20) << " Super Luxary  " << endl;
		f.seekg(510);
		f << setw(40) << left << "               =>  07:00 AM   " << setw(20) << left << "     01:15 PM  " << setw(20) << left << "      Rs.1050/- " << setw(20) << " Super Luxary  " << endl;
		f.seekg(612);
		f << setw(40) << left << "               =>  09:00 AM   " << setw(20) << left << "     03:15 PM  " << setw(20) << left << "      Rs.1050/- " << setw(20) << " Super Luxary  " << endl;
		f.seekg(714);
		f << setw(40) << left << "               =>  10:00 AM   " << setw(20) << left << "     04:15 PM  " << setw(20) << left << "      Rs.1250/- " << setw(20) << "   Premium  " << endl;
		f.seekg(816);
		f << setw(40) << left << "               =>  11:00 AM   " << setw(20) << left << "     05:30 PM  " << setw(20) << left << "      Rs.1050/- " << setw(20) << " Super Luxary  " << endl;
		f.seekg(918);
		f << setw(40) << left << "               =>  01:00 PM   " << setw(20) << left << "     07:15 PM  " << setw(20) << left << "      Rs.1050/- " << setw(20) << " Super Luxary  " << endl;
		f.seekg(1020);
		f << setw(40) << left << "               =>  04:00 PM   " << setw(20) << left << "     10:15 PM  " << setw(20) << left << "      Rs.1250/- " << setw(20) << "   Premium  " << endl;
		f.seekg(1122);
		f << setw(40) << left << "               =>  05:00 PM   " << setw(20) << left << "     11:30 PM  " << setw(20) << left << "      Rs.1050/- " << setw(20) << " Super Luxary  " << endl;
		f.seekg(1224);
		f << setw(40) << left << "               =>  09:00 PM   " << setw(20) << left << "     03:15 AM  " << setw(20) << left << "      Rs.1050/- " << setw(20) << " Siper Luxary  " << endl;
		f.close();

	}
	void written_Lhr_Sargodha()
	{
		fstream f;
		f.open("Lhr_Sargodha.txt", ios::in | ios::out);

		f.seekg(0);
		f << setw(100) << left << "                                        =>   Lahore to Sargodha " << endl;
		f.seekg(102);
		f << setw(100) << left << "                                             ===================== " << endl;
		f.seekg(204);
		f << setw(40) << left << "                    DEPARTURE   " << setw(20) << left << "     ARRIVAL   " << setw(20) << left << "      FARE " << setw(20) << "   BUS  " << endl;
		f.seekg(306);
		f << setw(40) << left << "                    ==========   " << setw(20) << left << "     ========   " << setw(20) << left << "      ======= " << setw(20) << "   ====  " << endl;
		f.seekg(408);
		f << setw(40) << left << "               =>  06:00 AM   " << setw(20) << left << "     8:15 AM  " << setw(20) << left << "      Rs.400/- " << setw(20) << " Super Luxary  " << endl;
		f.seekg(510);
		f << setw(40) << left << "               =>  06:45 AM   " << setw(20) << left << "     09:00 AM  " << setw(20) << left << "      Rs.400/- " << setw(20) << " Super Luxary  " << endl;
		f.seekg(612);
		f << setw(40) << left << "               =>  7:45 PM   " << setw(20) << left << "     10:00 AM  " << setw(20) << left << "      Rs.400/- " << setw(20) << " Super Luxary  " << endl;
		f.seekg(714);
		f << setw(40) << left << "               =>  08:30 AM   " << setw(20) << left << "     10:45 AM  " << setw(20) << left << "      Rs500/- " << setw(20) << "   Premium  " << endl;
		f.seekg(816);
		f << setw(40) << left << "               =>  09:45 AM   " << setw(20) << left << "     12:00 NOON  " << setw(20) << left << "      Rs.400/- " << setw(20) << " Super Luxary  " << endl;
		f.seekg(918);
		f << setw(40) << left << "               =>  01:30 PM   " << setw(20) << left << "     3:45 PM  " << setw(20) << left << "      Rs.400/- " << setw(20) << " Super Luxary  " << endl;
		f.seekg(1020);
		f << setw(40) << left << "               =>  05:00 PM   " << setw(20) << left << "     07:30 PM  " << setw(20) << left << "      Rs.500/- " << setw(20) << "   Premium  " << endl;
		f.seekg(1122);
		f << setw(40) << left << "               =>  07:00 PM   " << setw(20) << left << "     09:30 PM  " << setw(20) << left << "      Rs.400/- " << setw(20) << " Super Luxary  " << endl;
		f.seekg(1224);
		f << setw(40) << left << "               =>  09:00 PM   " << setw(20) << left << "     10:15 pm  " << setw(20) << left << "      Rs.400/- " << setw(20) << " Siper Luxary  " << endl;
		f.close();

	}
	void written_Sargodha_Lhr()
	{
		fstream f;
		f.open("Sargodha_Lhr.txt", ios::in | ios::out);

		f.seekg(0);
		f << setw(100) << left << "                                        =>   Sargodha to Lahore " << endl;
		f.seekg(102);
		f << setw(100) << left << "                                             ===================== " << endl;
		f.seekg(204);
		f << setw(40) << left << "                    DEPARTURE   " << setw(20) << left << "     ARRIVAL   " << setw(20) << left << "      FARE " << setw(20) << "   BUS  " << endl;
		f.seekg(306);
		f << setw(40) << left << "                    ==========   " << setw(20) << left << "     ========   " << setw(20) << left << "      ======= " << setw(20) << "   ====  " << endl;
		f.seekg(408);
		f << setw(40) << left << "               =>  06:00 AM   " << setw(20) << left << "     8:15 AM  " << setw(20) << left << "      Rs.400/- " << setw(20) << " Super Luxary  " << endl;
		f.seekg(510);
		f << setw(40) << left << "               =>  06:45 AM   " << setw(20) << left << "     09:00 AM  " << setw(20) << left << "      Rs.400/- " << setw(20) << " Super Luxary  " << endl;
		f.seekg(612);
		f << setw(40) << left << "               =>  7:45 PM   " << setw(20) << left << "     10:00 AM  " << setw(20) << left << "      Rs.400/- " << setw(20) << " Super Luxary  " << endl;
		f.seekg(714);
		f << setw(40) << left << "               =>  08:30 AM   " << setw(20) << left << "     10:45 AM  " << setw(20) << left << "      Rs500/- " << setw(20) << "   Premium  " << endl;
		f.seekg(816);
		f << setw(40) << left << "               =>  09:45 AM   " << setw(20) << left << "     12:00 NOON  " << setw(20) << left << "      Rs.400/- " << setw(20) << " Super Luxary  " << endl;
		f.seekg(918);
		f << setw(40) << left << "               =>  01:30 PM   " << setw(20) << left << "     3:45 PM  " << setw(20) << left << "      Rs.400/- " << setw(20) << " Super Luxary  " << endl;
		f.seekg(1020);
		f << setw(40) << left << "               =>  05:00 PM   " << setw(20) << left << "     07:30 PM  " << setw(20) << left << "      Rs.500/- " << setw(20) << "   Premium  " << endl;
		f.seekg(1122);
		f << setw(40) << left << "               =>  07:00 PM   " << setw(20) << left << "     09:30 PM  " << setw(20) << left << "      Rs.400/- " << setw(20) << " Super Luxary  " << endl;
		f.seekg(1224);
		f << setw(40) << left << "               =>  09:00 PM   " << setw(20) << left << "     10:15 pm  " << setw(20) << left << "      Rs.400/- " << setw(20) << " Siper Luxary  " << endl;
		f.close();

	}
	void writtenFileFull()
	{

		fstream f;
		f.open("Full_Schedule.txt", ios::in | ios::out);

		f.seekg(0);
		f << setw(100) << left << "                                        =>   Lahore to Rawalpindi " << endl;
		f.seekg(102);
		f << setw(100) << left << "                                             ===================== " << endl;
		f.seekg(204);
		f << setw(40) << left << "                    DEPARTURE   "<<setw(20)<<left<<"     ARRIVAL   "<<setw(20)<<left<<"      FARE "<<setw(20)<<"   BUS  "<<endl;
		f.seekg(306);
		f << setw(40) << left <<"                    ==========   " << setw(20) << left << "     ========   " << setw(20) << left << "      ======= " << setw(20) << "   ====  " << endl;
		f.seekg(408);
		f << setw(40) << left << "               =>  00:00 PM   " << setw(20) << left << "     04:30 PM  " << setw(20) << left << "      Rs.1180/- " << setw(20) << "   Luxary  " << endl;
		f.seekg(510);
		f << setw(40) << left << "               =>  00:45 PM   " << setw(20) << left << "     05:15 PM  " << setw(20) << left << "      Rs.1180/- " << setw(20) <<"   Luxary  " << endl;
		f.seekg(612);
		f << setw(40) << left << "               =>  01:00 PM   " << setw(20) << left << "     05:30 PM  " << setw(20) << left << "      Rs.1180/- " << setw(20) << "   Luxary  " << endl;
		f.seekg(714);
		f << setw(40) << left << "               =>  01:30 PM   " << setw(20) << left << "     06:00 PM  " << setw(20) << left << "      Rs.1480/- " << setw(20) << "   Premium  " << endl;
		f.seekg(816);
		f << setw(40) << left << "               =>  02:00 PM   " << setw(20) << left << "     06:30 PM  " << setw(20) << left << "      Rs.1180/- " << setw(20) << "   Luxary  " << endl;
		f.seekg(918);
		f << setw(40) << left << "               =>  04:30 PM   " << setw(20) << left << "     09:00 PM  " << setw(20) << left << "      Rs.1180/- " << setw(20) << "   Luxary  " << endl;


		f.seekg(1020);
		f << setw(40) << left << "               =>  05:00 PM   " << setw(20) << left << "     09:30 PM  " << setw(20) << left << "      Rs.1480/- " << setw(20) << "   Premium  " << endl;
		f.seekg(1122);
		f << setw(40) << left << "               =>  07:00 PM   " << setw(20) << left << "     11:30 PM  " << setw(20) << left << "      Rs.1180/- " << setw(20) << "   Luxary  " << endl;
		f.seekg(1224);
		f << setw(40) << left << "               =>  09:00 PM   " << setw(20) << left << "     01:30 AM  " << setw(20) << left << "      Rs.1180/- " << setw(20) << "   Luxary  " << endl;
//============================== RAWALPINDI TO LAHORE=========================

		f.seekg(1326);
		f << setw(100) << left << "                                        =>   Rawalpindi to Lahore " << endl;
		f.seekg(1428);
		f << setw(100) << left << "                                             ===================== " << endl;

		f.seekg(1530);
		f << setw(40) << left << "               =>  00:00 PM   " << setw(20) << left << "     04:30 PM  " << setw(20) << left << "      Rs.1180/- " << setw(20) << "   Luxary  " << endl;
		f.seekg(1632);
		f << setw(40) << left << "               =>  00:45 PM   " << setw(20) << left << "     05:15 PM  " << setw(20) << left << "      Rs.1180/- " << setw(20) << "   Luxary  " << endl;
		f.seekg(1734);
		f << setw(40) << left << "               =>  01:00 PM   " << setw(20) << left << "     05:30 PM  " << setw(20) << left << "      Rs.1180/- " << setw(20) << "   Luxary  " << endl;
		f.seekg(1836);
		f << setw(40) << left << "               =>  01:30 PM   " << setw(20) << left << "     06:00 PM  " << setw(20) << left << "      Rs.1480/- " << setw(20) << "   Premium  " << endl;
		f.seekg(1938);
		f << setw(40) << left << "               =>  02:00 PM   " << setw(20) << left << "     06:30 PM  " << setw(20) << left << "      Rs.1180/- " << setw(20) << "   Luxary  " << endl;
		f.seekg(2040);
		f << setw(40) << left << "               =>  04:30 PM   " << setw(20) << left << "     09:00 PM  " << setw(20) << left << "      Rs.1180/- " << setw(20) << "   Luxary  " << endl;
		f.seekg(2142);
		f << setw(40) << left << "               =>  05:00 PM   " << setw(20) << left << "     09:30 PM  " << setw(20) << left << "      Rs.1480/- " << setw(20) << "   Premium  " << endl;
		f.seekg(2244);
		f << setw(40) << left << "               =>  07:00 PM   " << setw(20) << left << "     11:30 PM  " << setw(20) << left << "      Rs.1180/- " << setw(20) << "   Luxary  " << endl;
		f.seekg(2346);
		f << setw(40) << left << "               =>  09:00 PM   " << setw(20) << left << "     01:30 AM  " << setw(20) << left << "      Rs.1180/- " << setw(20) << "   Luxary  " << endl;
		f.close();
	}
	void written_Lhr_Karachi()
	{
		fstream f;
		f.open("Lhr_Karachi.txt", ios::in | ios::out);

		f.seekg(0);
		f << setw(100) << left << "                                        =>   Lahore to Karachi " << endl;
		f.seekg(102);
		f << setw(100) << left << "                                             ===================== " << endl;
		f.seekg(204);
		f << setw(40) << left << "                    DEPARTURE   " << setw(20) << left << "     ARRIVAL   " << setw(20) << left << "      FARE " << setw(20) << "   BUS  " << endl;
		f.seekg(306);
		f << setw(40) << left << "                    ==========   " << setw(20) << left << "     ========   " << setw(20) << left << "      ======= " << setw(20) << "   ====  " << endl;
		f.seekg(408);
		f << setw(40) << left << "               =>  00:00 PM   " << setw(20) << left << "     10:00 AM  " << setw(20) << left << "      Rs.4180/- " << setw(20) << "   Luxary  " << endl;
		f.seekg(510);
		f << setw(40) << left << "               =>  00:45 PM   " << setw(20) << left << "     10:45 AM  " << setw(20) << left << "      Rs.4180/- " << setw(20) << "   Luxary  " << endl;
		f.seekg(612);
		f << setw(40) << left << "               =>  01:00 PM   " << setw(20) << left << "     11:15 AM  " << setw(20) << left << "      Rs.4180/- " << setw(20) << "   Luxary  " << endl;
		f.seekg(714);
		f << setw(40) << left << "               =>  01:30 PM   " << setw(20) << left << "     12:45 PM  " << setw(20) << left << "      Rs4980/- " << setw(20) << "   Premium  " << endl;
		f.seekg(816);
		f << setw(40) << left << "               =>  02:00 PM   " << setw(20) << left << "     01:00 PM  " << setw(20) << left << "      Rs.4180/- " << setw(20) << "   Luxary  " << endl;
		f.seekg(918);
		f << setw(40) << left << "               =>  04:30 PM   " << setw(20) << left << "     3:00 PM  " << setw(20) << left << "      Rs.4180/- " << setw(20) << "   Luxary  " << endl;


		f.seekg(1020);
		f << setw(40) << left << "               =>  05:00 PM   " << setw(20) << left << "     03:30 PM  " << setw(20) << left << "      Rs.4980/- " << setw(20) << "   Premium  " << endl;
		f.seekg(1122);
		f << setw(40) << left << "               =>  07:00 PM   " << setw(20) << left << "     06:30 PM  " << setw(20) << left << "      Rs.4180/- " << setw(20) << "   Luxary  " << endl;
		f.seekg(1224);
		f << setw(40) << left << "               =>  09:00 PM   " << setw(20) << left << "     08:00 pm  " << setw(20) << left << "      Rs.4180/- " << setw(20) << "   Luxary  " << endl;
		f.close();

	}
	void written_Krachi_Lahore()
	{
		fstream f;
		f.open("Karachi_Lhr.txt", ios::in | ios::out);

		f.seekg(0);
		f << setw(100) << left << "                                        =>   Karachi to Lahore " << endl;
		f.seekg(102);
		f << setw(100) << left << "                                             ===================== " << endl;
		f.seekg(204);
		f << setw(40) << left << "                    DEPARTURE   " << setw(20) << left << "     ARRIVAL   " << setw(20) << left << "      FARE " << setw(20) << "   BUS  " << endl;
		f.seekg(306);
		f << setw(40) << left << "                    ==========   " << setw(20) << left << "     ========   " << setw(20) << left << "      ======= " << setw(20) << "   ====  " << endl;
		f.seekg(408);
		f << setw(40) << left << "               =>  00:00 PM   " << setw(20) << left << "     10:00 AM  " << setw(20) << left << "      Rs.4180/- " << setw(20) << "   Luxary  " << endl;
		f.seekg(510);
		f << setw(40) << left << "               =>  00:45 PM   " << setw(20) << left << "     10:45 AM  " << setw(20) << left << "      Rs.4180/- " << setw(20) << "   Luxary  " << endl;
		f.seekg(612);
		f << setw(40) << left << "               =>  01:00 PM   " << setw(20) << left << "     11:15 AM  " << setw(20) << left << "      Rs.4180/- " << setw(20) << "   Luxary  " << endl;
		f.seekg(714);
		f << setw(40) << left << "               =>  01:30 PM   " << setw(20) << left << "     12:45 PM  " << setw(20) << left << "      Rs4980/- " << setw(20) << "   Premium  " << endl;
		f.seekg(816);
		f << setw(40) << left << "               =>  02:00 PM   " << setw(20) << left << "     01:00 PM  " << setw(20) << left << "      Rs.4180/- " << setw(20) << "   Luxary  " << endl;
		f.seekg(918);
		f << setw(40) << left << "               =>  04:30 PM   " << setw(20) << left << "     3:00 PM  " << setw(20) << left << "      Rs.4180/- " << setw(20) << "   Luxary  " << endl;


		f.seekg(1020);
		f << setw(40) << left << "               =>  05:00 PM   " << setw(20) << left << "     03:30 PM  " << setw(20) << left << "      Rs.4980/- " << setw(20) << "   Premium  " << endl;
		f.seekg(1122);
		f << setw(40) << left << "               =>  07:00 PM   " << setw(20) << left << "     06:30 PM  " << setw(20) << left << "      Rs.4180/- " << setw(20) << "   Luxary  " << endl;
		f.seekg(1224);
		f << setw(40) << left << "               =>  09:00 PM   " << setw(20) << left << "     08:00 pm  " << setw(20) << left << "      Rs.4180/- " << setw(20) << "   Luxary  " << endl;

		f.close();
	}
	void written_Lhr_Pindi()
	{
		fstream f;
		f.open("Lhr_Pindi.txt", ios::in | ios::out);

		f.seekg(0);
		f << setw(100) << left << "                                        =>   Lahore to Rawalpindi " << endl;
		f.seekg(102);
		f << setw(100) << left << "                                             ===================== " << endl;
		f.seekg(204);
		f << setw(40) << left << "                    DEPARTURE   " << setw(20) << left << "     ARRIVAL   " << setw(20) << left << "      FARE " << setw(20) << "   BUS  " << endl;
		f.seekg(306);
		f << setw(40) << left << "                    ==========   " << setw(20) << left << "     ========   " << setw(20) << left << "      ======= " << setw(20) << "   ====  " << endl;
		f.seekg(408);
		f << setw(40) << left << "               =>  00:00 PM   " << setw(20) << left << "     04:30 PM  " << setw(20) << left << "      Rs.1180/- " << setw(20) << "   Luxary  " << endl;
		f.seekg(510);
		f << setw(40) << left << "               =>  00:45 PM   " << setw(20) << left << "     05:15 PM  " << setw(20) << left << "      Rs.1180/- " << setw(20) << "   Luxary  " << endl;
		f.seekg(612);
		f << setw(40) << left << "               =>  01:00 PM   " << setw(20) << left << "     05:30 PM  " << setw(20) << left << "      Rs.1180/- " << setw(20) << "   Luxary  " << endl;
		f.seekg(714);
		f << setw(40) << left << "               =>  01:30 PM   " << setw(20) << left << "     06:00 PM  " << setw(20) << left << "      Rs.1480/- " << setw(20) << "   Premium  " << endl;
		f.seekg(816);
		f << setw(40) << left << "               =>  02:00 PM   " << setw(20) << left << "     06:30 PM  " << setw(20) << left << "      Rs.1180/- " << setw(20) << "   Luxary  " << endl;
		f.seekg(918);
		f << setw(40) << left << "               =>  04:30 PM   " << setw(20) << left << "     09:00 PM  " << setw(20) << left << "      Rs.1180/- " << setw(20) << "   Luxary  " << endl;


		f.seekg(1020);
		f << setw(40) << left << "               =>  05:00 PM   " << setw(20) << left << "     09:30 PM  " << setw(20) << left << "      Rs.1480/- " << setw(20) << "   Premium  " << endl;
		f.seekg(1122);
		f << setw(40) << left << "               =>  07:00 PM   " << setw(20) << left << "     11:30 PM  " << setw(20) << left << "      Rs.1180/- " << setw(20) << "   Luxary  " << endl;
		f.seekg(1224);
		f << setw(40) << left << "               =>  09:00 PM   " << setw(20) << left << "     01:30 AM  " << setw(20) << left << "      Rs.1180/- " << setw(20) << "   Luxary  " << endl;
		f.close();
	}
	void show_Lhr_Pindi()
	{
		
		fstream f;
		f.open("Lhr_Pindi.txt", ios::in | ios::out);
		gotoxy(0, 0);
		cout << "\n\t\t\t\t\t\t ......................\n\t\t\t\t\t\t . DAEWOO APPLICATION .\n\t\t\t\t\t\t ......................\n\n";
		char L[1300];
		gotoxy(0, 8);
		for (int i = 0; i <= 1224; i += 102)
		{

			f.seekg(i);
			f.getline(L, 1225);
			cout << L << endl << endl;

		}
		cout << "\n   *****************************************************************************************************************\n";
		gotoxy(0, 4);
		cout << "\n   *****************************************************************************************************************\n";
		for (int i = 5; i < 35; i++)
		{
			gotoxy(3, i);
			cout << "*";
		}
		for (int i = 5; i < 35; i++)
		{
			gotoxy(115, i);
			cout << "*";
		}
		f.close();
	}
	void written_Pindi_Lhr()
	{
		fstream f;
		f.open("Pindi_Lhr.txt", ios::in | ios::out);

		f.seekg(0);
		f << setw(100) << left << "                                        =>   Rawalpindi to Lahore " << endl;
		f.seekg(102);
		f << setw(100) << left << "                                             ===================== " << endl;
		f.seekg(204);
		f << setw(40) << left << "                    DEPARTURE   " << setw(20) << left << "     ARRIVAL   " << setw(20) << left << "      FARE " << setw(20) << "   BUS  " << endl;
		f.seekg(306);
		f << setw(40) << left << "                    ==========   " << setw(20) << left << "     ========   " << setw(20) << left << "      ======= " << setw(20) << "   ====  " << endl;
		f.seekg(408);
		f << setw(40) << left << "               =>  00:00 PM   " << setw(20) << left << "     04:30 PM  " << setw(20) << left << "      Rs.1180/- " << setw(20) << "   Luxary  " << endl;
		f.seekg(510);
		f << setw(40) << left << "               =>  00:45 PM   " << setw(20) << left << "     05:15 PM  " << setw(20) << left << "      Rs.1180/- " << setw(20) << "   Luxary  " << endl;
		f.seekg(612);
		f << setw(40) << left << "               =>  01:00 PM   " << setw(20) << left << "     05:30 PM  " << setw(20) << left << "      Rs.1180/- " << setw(20) << "   Luxary  " << endl;
		f.seekg(714);
		f << setw(40) << left << "               =>  01:30 PM   " << setw(20) << left << "     06:00 PM  " << setw(20) << left << "      Rs.1480/- " << setw(20) << "   Premium  " << endl;
		f.seekg(816);
		f << setw(40) << left << "               =>  02:00 PM   " << setw(20) << left << "     06:30 PM  " << setw(20) << left << "      Rs.1180/- " << setw(20) << "   Luxary  " << endl;
		f.seekg(918);
		f << setw(40) << left << "               =>  04:30 PM   " << setw(20) << left << "     09:00 PM  " << setw(20) << left << "      Rs.1180/- " << setw(20) << "   Luxary  " << endl;


		f.seekg(1020);
		f << setw(40) << left << "               =>  05:00 PM   " << setw(20) << left << "     09:30 PM  " << setw(20) << left << "      Rs.1480/- " << setw(20) << "   Premium  " << endl;
		f.seekg(1122);
		f << setw(40) << left << "               =>  07:00 PM   " << setw(20) << left << "     11:30 PM  " << setw(20) << left << "      Rs.1180/- " << setw(20) << "   Luxary  " << endl;
		f.seekg(1224);
		f << setw(40) << left << "               =>  09:00 PM   " << setw(20) << left << "     01:30 AM  " << setw(20) << left << "      Rs.1180/- " << setw(20) << "   Luxary  " << endl;
		f.close();

	}
	void show_Pindi_Lhr()
	{

		fstream f;
		f.open("Pindi_Lhr.txt", ios::in | ios::out);
		gotoxy(0, 0);
		cout << "\n\t\t\t\t\t\t ......................\n\t\t\t\t\t\t . DAEWOO APPLICATION .\n\t\t\t\t\t\t ......................\n\n";
		char L[1300];
		gotoxy(0, 8);
		for (int i = 0; i <= 1224; i += 102)
		{

			f.seekg(i);
			f.getline(L, 1225);
			cout << L << endl << endl;

		}
		cout << "\n   *****************************************************************************************************************\n";
		gotoxy(0, 4);
		cout << "\n   *****************************************************************************************************************\n";
		for (int i = 5; i < 35; i++)
		{
			gotoxy(3, i);
			cout << "*";
		}
		for (int i = 5; i < 35; i++)
		{
			gotoxy(115, i);
			cout << "*";
		}
		f.close();
	}
	void show_Lhr_Karachi()
	{


		fstream f;
		f.open("Lhr_Karachi.txt", ios::in | ios::out);
		gotoxy(0, 0);
		cout << "\n\t\t\t\t\t\t ......................\n\t\t\t\t\t\t . DAEWOO APPLICATION .\n\t\t\t\t\t\t ......................\n\n";
		char L[1300];
		gotoxy(0, 8);
		for (int i = 0; i <= 1224; i += 102)
		{

			f.seekg(i);
			f.getline(L, 1225);
			cout << L << endl << endl;

		}
		cout << "\n   *****************************************************************************************************************\n";
		gotoxy(0, 4);
		cout << "\n   *****************************************************************************************************************\n";
		for (int i = 5; i < 35; i++)
		{
			gotoxy(3, i);
			cout << "*";
		}
		for (int i = 5; i < 35; i++)
		{
			gotoxy(115, i);
			cout << "*";
		}
		f.close();

}
	void show_Karachi_Lhr()
	{


		fstream f;
		f.open("Karachi_Lhr.txt", ios::in | ios::out);
		gotoxy(0, 0);
		cout << "\n\t\t\t\t\t\t ......................\n\t\t\t\t\t\t . DAEWOO APPLICATION .\n\t\t\t\t\t\t ......................\n\n";
		char L[1300];
		gotoxy(0, 8);
		for (int i = 0; i <= 1224; i += 102)
		{

			f.seekg(i);
			f.getline(L, 1225);
			cout << L << endl << endl;

		}
		cout << "\n   *****************************************************************************************************************\n";
		gotoxy(0, 4);
		cout << "\n   *****************************************************************************************************************\n";
		for (int i = 5; i < 35; i++)
		{
			gotoxy(3, i);
			cout << "*";
		}
		for (int i = 5; i < 35; i++)
		{
			gotoxy(115, i);
			cout << "*";
		}
		f.close();

	}
	void show_Sargodha_Lhr()
	{

		fstream f;
		f.open("Sargodha_Lhr.txt", ios::in | ios::out);
		gotoxy(0, 0);
		cout << "\n\t\t\t\t\t\t ......................\n\t\t\t\t\t\t . DAEWOO APPLICATION .\n\t\t\t\t\t\t ......................\n\n";
		char L[1300];
		gotoxy(0, 8);
		for (int i = 0; i <= 1224; i += 102)
		{

			f.seekg(i);
			f.getline(L, 1225);
			cout << L << endl << endl;

		}
		cout << "\n   *****************************************************************************************************************\n";
		gotoxy(0, 4);
		cout << "\n   *****************************************************************************************************************\n";
		for (int i = 5; i < 35; i++)
		{
			gotoxy(3, i);
			cout << "*";
		}
		for (int i = 5; i < 35; i++)
		{
			gotoxy(115, i);
			cout << "*";
		}
		f.close();

}
	void show_Lhr_Sargodha()
	{

		fstream f;
		f.open("Lhr_Sargodha.txt", ios::in | ios::out);
		gotoxy(0, 0);
		cout << "\n\t\t\t\t\t\t ......................\n\t\t\t\t\t\t . DAEWOO APPLICATION .\n\t\t\t\t\t\t ......................\n\n";
		char L[1300];
		gotoxy(0, 8);
		for (int i = 0; i <= 1224; i += 102)
		{

			f.seekg(i);
			f.getline(L, 1225);
			cout << L << endl << endl;

		}
		cout << "\n   *****************************************************************************************************************\n";
		gotoxy(0, 4);
		cout << "\n   *****************************************************************************************************************\n";
		for (int i = 5; i < 35; i++)
		{
			gotoxy(3, i);
			cout << "*";
		}
		for (int i = 5; i < 35; i++)
		{
			gotoxy(115, i);
			cout << "*";
		}
		f.close();
	}
	void Show_Lhr_Peshawar()
	{

		fstream f;
		f.open("Lhr_Peshawar.txt", ios::in | ios::out);
		gotoxy(0, 0);
		cout << "\n\t\t\t\t\t\t ......................\n\t\t\t\t\t\t . DAEWOO APPLICATION .\n\t\t\t\t\t\t ......................\n\n";
		char L[1300];
		gotoxy(0, 8);
		for (int i = 0; i <= 1224; i += 102)
		{

			f.seekg(i);
			f.getline(L, 1225);
			cout << L << endl << endl;

		}
		cout << "\n   *****************************************************************************************************************\n";
		gotoxy(0, 4);
		cout << "\n   *****************************************************************************************************************\n";
		for (int i = 5; i < 35; i++)
		{
			gotoxy(3, i);
			cout << "*";
		}
		for (int i = 5; i < 35; i++)
		{
			gotoxy(115, i);
			cout << "*";
		}
		f.close();
	}
	void Show_Peshawar_Lhr()
	{

		fstream f;
		f.open("Peshawar_Lhr.txt", ios::in | ios::out);
		gotoxy(0, 0);
		cout << "\n\t\t\t\t\t\t ......................\n\t\t\t\t\t\t . DAEWOO APPLICATION .\n\t\t\t\t\t\t ......................\n\n";
		char L[1300];
		gotoxy(0, 8);
		for (int i = 0; i <= 1224; i += 102)
		{

			f.seekg(i);
			f.getline(L, 1225);
			cout << L << endl << endl;

		}
		cout << "\n   *****************************************************************************************************************\n";
		gotoxy(0, 4);
		cout << "\n   *****************************************************************************************************************\n";
		for (int i = 5; i < 35; i++)
		{
			gotoxy(3, i);
			cout << "*";
		}
		for (int i = 5; i < 35; i++)
		{
			gotoxy(115, i);
			cout << "*";
		}
		f.close();
	}
	void Show_Lhr_Multan()
	{

		fstream f;
		f.open("Lhr_Multan.txt", ios::in | ios::out);
		gotoxy(0, 0);
		cout << "\n\t\t\t\t\t\t ......................\n\t\t\t\t\t\t . DAEWOO APPLICATION .\n\t\t\t\t\t\t ......................\n\n";
		char L[1300];
		gotoxy(0, 8);
		for (int i = 0; i <= 1224; i += 102)
		{

			f.seekg(i);
			f.getline(L, 1225);
			cout << L << endl << endl;

		}
		cout << "\n   *****************************************************************************************************************\n";
		gotoxy(0, 4);
		cout << "\n   *****************************************************************************************************************\n";
		for (int i = 5; i < 35; i++)
		{
			gotoxy(3, i);
			cout << "*";
		}
		for (int i = 5; i < 35; i++)
		{
			gotoxy(115, i);
			cout << "*";
		}
		f.close();
	}
	void Show_Multan_Lhr()
	{

		fstream f;
		f.open("Multan_Lhr.txt", ios::in | ios::out);
		gotoxy(0, 0);
		cout << "\n\t\t\t\t\t\t ......................\n\t\t\t\t\t\t . DAEWOO APPLICATION .\n\t\t\t\t\t\t ......................\n\n";
		char L[1300];
		gotoxy(0, 8);
		for (int i = 0; i <= 1224; i += 102)
		{

			f.seekg(i);
			f.getline(L, 1225);
			cout << L << endl << endl;

		}
		cout << "\n   *****************************************************************************************************************\n";
		gotoxy(0, 4);
		cout << "\n   *****************************************************************************************************************\n";
		for (int i = 5; i < 35; i++)
		{
			gotoxy(3, i);
			cout << "*";
		}
		for (int i = 5; i < 35; i++)
		{
			gotoxy(115, i);
			cout << "*";
		}
		f.close();
	}

};

