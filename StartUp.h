#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;
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
void LoopingWords(char a, char b, char c, char d, char e, char f, char g, char h, char i, char j, char k, char l, char m, char n, int row, int col)
{


	for (int i = 65; i < 91; i += 9)
	{
		for (int j = 65; j < 91; j += 17)
		{
			gotoxy(col, row);

			cout << char(j) << endl;
			Sleep(30);
		}
		gotoxy(col, row);
		cout << char(i) << endl;
		Sleep(30);
	}
	gotoxy(col, row);
	cout << a;
	col++;
	for (int i = 65; i < 91; i += 13)
	{
		for (int j = 65; j < 91; j += 23)
		{
			gotoxy(col, row);

			cout << char(j) << endl;
			Sleep(30);;
		}
		gotoxy(col, row);
		cout << char(i) << endl;
		Sleep(30);;
	}
	gotoxy(col, row);
	cout << b;
	col++;
	for (int i = 65; i < 91; i += 17)
	{
		for (int j = 65; j < 91; j += 19)
		{
			gotoxy(col, row);

			cout << char(j) << endl;
			Sleep(30);
		}
		gotoxy(col, row);
		cout << char(i) << endl;
		Sleep(30);
	}
	gotoxy(col, row);
	cout << c;
	col++;
	for (int i = 65; i < 91; i += 17)
	{
		for (int j = 65; j < 91; j += 19)
		{
			gotoxy(col, row);

			cout << char(j) << endl;
			Sleep(30);
		}
		gotoxy(col, row);
		cout << char(i) << endl;
		Sleep(30);
	}
	gotoxy(col, row);
	cout << d;
	col++;
	//---------------------------------------------
	for (int i = 65; i < 91; i += 17)
	{
		for (int j = 65; j < 91; j += 19)
		{
			gotoxy(col, row);

			cout << char(j) << endl;
			Sleep(30);
		}
		gotoxy(col, row);
		cout << char(i) << endl;
		Sleep(30);
	}
	gotoxy(col, row);
	cout << e; col++;
	for (int i = 65; i < 91; i += 17)
	{
		for (int j = 65; j < 91; j += 19)
		{
			gotoxy(col, row);

			cout << char(j) << endl;
			Sleep(30);
		}
		gotoxy(col, row);
		cout << char(i) << endl;
		Sleep(30);
	}
	gotoxy(col, row);
	cout << f;
	col++;
	for (int i = 65; i < 91; i += 17)
	{
		for (int j = 65; j < 91; j += 19)
		{
			gotoxy(col, row);

			cout << char(j) << endl;
			Sleep(30);
		}
		gotoxy(col, row);
		cout << char(i) << endl;
		Sleep(30);
	}
	gotoxy(col, row);
	cout << g; col++;
	for (int i = 65; i < 91; i += 17)
	{
		for (int j = 65; j < 91; j += 19)
		{
			gotoxy(col, row);

			cout << char(j) << endl;
			Sleep(30);
		}
		gotoxy(col, row);
		cout << char(i) << endl;
		Sleep(30);
	}
	gotoxy(col, row);
	cout << h; col++;

	//-----------------------------------------------------------------
	for (int i = 65; i < 91; i += 17)
	{
		for (int j = 65; j < 91; j += 19)
		{
			gotoxy(col, row);

			cout << char(j) << endl;
			Sleep(30);
		}
		gotoxy(col, row);
		cout << char(i) << endl;
		Sleep(30);
	}
	gotoxy(col, row);
	cout << i;   col++;
	for (int i = 65; i < 91; i += 17)
	{
		for (int j = 65; j < 91; j += 19)
		{
			gotoxy(col, row);

			cout << char(j) << endl;
			Sleep(30);
		}
		gotoxy(col, row);
		cout << char(i) << endl;
		Sleep(30);
	}
	gotoxy(col, row);
	cout << j;   col++;

	for (int i = 65; i < 91; i += 17)
	{
		for (int j = 65; j < 91; j += 19)
		{
			gotoxy(col, row);

			cout << char(j) << endl;
			Sleep(30);
		}
		gotoxy(col, row);
		cout << char(i) << endl;
		Sleep(30);
	}
	gotoxy(col, row);
	cout << k;  col++;
	for (int i = 65; i < 91; i += 17)
	{
		for (int j = 65; j < 91; j += 19)
		{
			gotoxy(col, row);

			cout << char(j) << endl;
			Sleep(30);
		}
		gotoxy(col, row);
		cout << char(i) << endl;
		Sleep(30);
	}
	gotoxy(col, row);
	cout << l;   col++;

	for (int i = 65; i < 91; i += 17)
	{
		for (int j = 65; j < 91; j += 19)
		{
			gotoxy(col, row);

			cout << char(j) << endl;
			Sleep(30);
		}
		gotoxy(col, row);
		cout << char(i) << endl;
		Sleep(30);
	}
	gotoxy(col, row);
	cout << m;  col++;
	for (int i = 65; i < 91; i += 17)
	{
		for (int j = 65; j < 91; j += 19)
		{
			gotoxy(col, row);

			cout << char(j) << endl;
			Sleep(30);
		}
		gotoxy(col, row);
		cout << char(i) << endl;
		Sleep(30);
	}
	gotoxy(col, row);
	cout << n;




}
void rotate(char alphabet, int x, int x1, int y1)
{
	if (x <= (int)alphabet) 
	{
		gotoxy(x1, y1);
		cout << (char)x;

	}
}
void rotate_string(char *str, int horizontal, int y_pos)
{

	int length = strlen(str);
	for (int x = 65; x <= 92; x++)
	{

		int x_pos = horizontal - (length / 2);
		Sleep(120);
		for (int i = 0; i < length; i++, x_pos++)
		{
			rotate(str[i], x, x_pos, y_pos);
		}
	}
}
void startUp()
{
	gotoxy(1,1);

	cout << "\n\n\t\t\t\t\t\t ......................\n\t\t\t\t\t\t . DAEWOO APPLICATION .\n\t\t\t\t\t\t ......................\n\n\n By:\n----";






	gotoxy(30, 15);
	cout << "Names:";
	gotoxy(30, 16); cout << "------";
	
	gotoxy(21, 18);
	cout << "=>";

	
	//LoopingWords('S', 'H', 'E', 'H', 'R', 'O', 'Z', ' ', ' ', 'A', 'Y', 'A', 'Z', ' ', 18, 30);
	rotate_string("SHEHROZ AYAZ", 30, 18);
	gotoxy(48, 15);
	cout << "Roll no:";
	gotoxy(48, 16);
	cout << "--------";


	gotoxy(48, 18);
	cout << "2016-CS-641";


	gotoxy(26, 21);
	cout << "=>";

	
	rotate_string("RIMSHA FATIMA", 30, 21);
	gotoxy(48, 21);
	cout << "2016-CS-604";


	gotoxy(26, 24);
	cout << "=>";
	rotate_string("HOORIA SULEMAN", 30, 24);
	gotoxy(48, 24);
	cout << "2016-CS-601";


	gotoxy(26, 27);
	cout << "=>";
	rotate_string("MUKARRAM JAVAID", 30, 27);
	gotoxy(48, 27);
	cout << "2016-CS-628";


	
}
