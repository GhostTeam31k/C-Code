#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int main2()
{
	int PlayerX = 1;
	int PlayerY = 1;
	char PlayerShape = 'P';
	bool bIsRunning = true;

	while (bIsRunning)
	{


		int Key = _getch();



		if (Key == 'a' || Key == 'A')
		{
			//cout << "����" << endl;
			PlayerX--;
		}
		else if (Key == 'w' || Key == 'W')
		{
			//cout << "��" << endl;
			PlayerY--;
		}
		else if (Key == 's' || Key == 'S')
		{
			// << "�Ʒ�" << endl;
			PlayerY++;
		}
		else if (Key == 'd' || Key == 'D')
		{
			//cout << "������" << endl;
			PlayerX++;
		}
		else if (Key == 'q' || Key == 'Q')
		{
			cout << "����" << endl;
			bIsRunning = false;
		}
		else if (Key == 'r' || Key == 'R')
		{
			system("cls");

		}
		//cout << PlayerX << ", " << PlayerY << endl;

		//x, y ��ǥ ����
		COORD pos = { PlayerX, PlayerY };
		//Ŀ�� �̵�
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		cout << PlayerShape;
	}

	return 0;
}