#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <conio.h>
#include <MMSystem.h>
#pragma comment (lib, "winmm")

using namespace std;

enum ConsoleColor {
	Black, Blue, Green, Cyan, Red, Magenta, Brown, LightGray, DarkGray,
	LightBlue, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White
};

void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}


void GotoXY(int X, int Y)
{
	HANDLE hConsole;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord = { X, Y };
	SetConsoleCursorPosition(hStdOut, coord);
}
void print(int key)
{
	switch (key)
	{
	case 1:
	{
		GotoXY(3, 1); cout << "               000" << endl;
		GotoXY(3, 2); cout << "          000        000" << endl;
		GotoXY(3, 3); cout << "     000                 000" << endl;
		GotoXY(3, 4); cout << "  000           $           000" << endl;
		GotoXY(3, 5); cout << "  00   000             000   00" << endl;
		GotoXY(3, 6); cout << "  00       000    000        00" << endl;
		GotoXY(3, 7); cout << "  00   $       000        $  00" << endl;
		GotoXY(3, 8); cout << "  00       $   000     $     00" << endl;
		GotoXY(3, 9); cout << "  00   $       000  $        00" << endl;
		GotoXY(3, 10); cout << "  00       $   000           00" << endl;
		GotoXY(3, 11); cout << "     00        000       00" << endl;
		GotoXY(3, 12); cout << "          00   000   00" << endl;
		GotoXY(3, 13); cout << "               000" << endl;
	}

	break;

	case 2:
	{
		GotoXY(40, 10); cout << "               000" << endl;
		GotoXY(40, 11); cout << "          000        000" << endl;
		GotoXY(40, 12); cout << "     000        $        000" << endl;
		GotoXY(40, 13); cout << "  000      $          $     000" << endl;
		GotoXY(40, 14); cout << "  00   000      $       000  00" << endl;
		GotoXY(40, 15); cout << "  00       000     000       00" << endl;
		GotoXY(40, 16); cout << "  00           000           00" << endl;
		GotoXY(40, 17); cout << "  00     $     000        $  00" << endl;
		GotoXY(40, 18); cout << "  00           000   $       00" << endl;
		GotoXY(40, 19);  cout << "  00           000           00" << endl;
		GotoXY(40, 20);  cout << "     00        000       00" << endl;
		GotoXY(40, 21);  cout << "          00   000   00" << endl;
		GotoXY(40, 22);  cout << "               000" << endl;
		Sleep(400);
	}


	break;

	case 3:
	{
		GotoXY(40, 1); cout << "               000" << endl;
		GotoXY(40, 2); cout << "          000        000" << endl;
		GotoXY(40, 3); cout << "     000                 000" << endl;
		GotoXY(40, 4); cout << "  000           $           000" << endl;
		GotoXY(40, 5); cout << "  00   000             000   00" << endl;
		GotoXY(40, 6); cout << "  00       000    000        00" << endl;
		GotoXY(40, 7); cout << "  00   $       000        $  00" << endl;
		GotoXY(40, 8); cout << "  00       $   000     $     00" << endl;
		GotoXY(40, 9); cout << "  00   $       000  $        00" << endl;
		GotoXY(40, 10); cout << "  00       $   000           00" << endl;
		GotoXY(40, 11); cout << "     00        000       00" << endl;
		GotoXY(40, 12); cout << "          00   000   00" << endl;
		GotoXY(40, 13); cout << "               000" << endl;
	}

	break;

	case 4:
	{
		GotoXY(3, 10); cout << "               000" << endl;
		GotoXY(3, 11); cout << "          000        000" << endl;
		GotoXY(3, 12); cout << "     000        $        000" << endl;
		GotoXY(3, 13); cout << "  000      $          $     000" << endl;
		GotoXY(3, 14); cout << "  00   000      $       000  00" << endl;
		GotoXY(3, 15); cout << "  00       000     000       00" << endl;
		GotoXY(3, 16); cout << "  00           000           00" << endl;
		GotoXY(3, 17); cout << "  00     $     000        $  00" << endl;
		GotoXY(3, 18); cout << "  00           000   $       00" << endl;
		GotoXY(3, 19); cout << "  00           000           00" << endl;
		GotoXY(3, 20); cout << "     00        000       00" << endl;
		GotoXY(3, 21); cout << "          00   000   00" << endl;
		GotoXY(3, 22); cout << "               000" << endl;
		Sleep(400);
	}
	break;
	case 5:
	{
		GotoXY(30, 5); cout << "  $$ $$ $$" << endl;
		GotoXY(30, 6); cout << "           $$" << endl;
		GotoXY(30, 7); cout << "            $$" << endl;
		GotoXY(30, 8); cout << "            $$" << endl;
		GotoXY(30, 9); cout << "           $$" << endl;
		GotoXY(30, 10); cout << "         $$" << endl;
		GotoXY(30, 11); cout << "      $$" << endl;
		GotoXY(30, 12); cout << "      $$" << endl;
		GotoXY(30, 13); cout << "        " << endl;
		GotoXY(30, 14); cout << "        " << endl;
		GotoXY(30, 15); cout << "      $$" << endl;
		GotoXY(30, 16); cout << "      $$" << endl;
		GotoXY(30, 17); cout << "        " << endl;
		GotoXY(30, 18); cout << "        " << endl;
		Sleep(500);
	}

	break;

	case 6:
	{
		GotoXY(30, 5); cout << "          $$ " << endl;
		GotoXY(30, 6); cout << "          $$ " << endl;
		GotoXY(30, 7); cout << "             " << endl;
		GotoXY(30, 8); cout << "          $$ " << endl;
		GotoXY(30, 9); cout << "          $$ " << endl;
		GotoXY(30, 10); cout << "        $$  " << endl;
		GotoXY(30, 11); cout << "    $$ " << endl;
		GotoXY(30, 12); cout << "  $$ " << endl;
		GotoXY(30, 13); cout << " $$ " << endl;
		GotoXY(30, 14); cout << "$$ " << endl;
		GotoXY(30, 15); cout << "$$ " << endl;
		GotoXY(30, 16); cout << " $$ " << endl;
		GotoXY(30, 17); cout << "  $$   " << endl;
		GotoXY(30, 18); cout << "     $$ $$ $$" << endl;
		Sleep(500);
	}
	break;
	}
}

int random(int* f, int i)
{
	return f[i] = rand() % 6 + 1;
}
int summa(int* f, int* f1, int* f2, int i)
{
	return f[i] = f1[i] + f2[i];
}


void print_points(int* f, int _size)
{
	for (int i = 0; i < _size; i++)
	{
		cout << f[i] << " ";
	}
	cout << endl << endl;
}
void compare_results(int a, int b)
{
	if (a == b)
	{
		SetColor(White, Black);
		GotoXY(31, 10); cout << "Nobody wins" << endl;
		PlaySound(TEXT("funny.wav"), NULL, SND_ASYNC | SND_LOOP);
		Sleep(5000);

	}
	else if (a > b)
	{
		SetColor(Yellow, Black);
		GotoXY(30, 10); cout << "Computer wins!" << endl;
		PlaySound(TEXT("regret.wav"), NULL, SND_ASYNC | SND_LOOP);
		Sleep(2500);

	}
	else
	{
		SetColor(LightMagenta, Black);
		GotoXY(33, 10); cout << "You win!!" << endl;
		PlaySound(TEXT("bugle.wav"), NULL, SND_ASYNC | SND_LOOP);
		Sleep(7000);

	}
}
int sum_tot(int* f, int _size)
{
	int sum = 0;
	for (int i = 0; i < _size; i++)
	{
		sum += f[i];
	}
	return sum;
}
void print_2_dice(ConsoleColor textColor1, ConsoleColor bgColor1, int die1,
	ConsoleColor textColor2, ConsoleColor bgColor2, int die2)
{
	system("cls");
	SetColor(textColor1, bgColor1);
	print(die1);
	SetColor(textColor2, bgColor2);
	print(die2);
}
void print_question(ConsoleColor textColor1, ConsoleColor bgColor1, int _type)
{
	SetColor(textColor1, bgColor1);
	print(_type);
	system("cls");
}
void main()
{

	srand(time(NULL));
	int size = 3;
	int* comp_dice1 = new int[size];
	int* comp_dice2 = new int[size];
	int* gamer_dice1 = new int[size];
	int* gamer_dice2 = new int[size];
	int* summa_comp = new int[size];
	int* summa_gamer = new int[size];
	int summa_comp_total = 0;
	int summa_gamer_total = 0;



	setlocale(LC_ALL, "ru");
	bool key_1;
	do
	{
		system("cls");
		SetColor(Green, Black);
		GotoXY(30, 8); cout << " Choose who plays first!";
		GotoXY(31, 10); cout << " 1 - "; SetColor(White, Black); cout << "computer,"; SetColor(Green, Black); cout << " 2 - "; SetColor(White, Black); cout << "you" << endl;
		short key;
		cout << endl;
		SetColor(Green, Black);
		GotoXY(40, 13); cin >> key;
		cout << endl;

		switch (key)
		{
		case 1:
		{

			for (int i = 0; i < size; i++)
			{
				system("cls");

				SetColor(Red, Black);
				PlaySound(TEXT("gong.wav"), NULL, SND_ASYNC | SND_LOOP);
				GotoXY(36, 10); cout << "ROUND " << i + 1 << endl; Sleep(6000);
				PlaySound(0, 0, SND_PURGE);
				system("cls");
				random(comp_dice1, i);
				random(comp_dice2, i);
				summa(summa_comp, comp_dice1, comp_dice2, i);
				SetColor(Yellow, Black);
				GotoXY(30, 10); cout << "Computer is playing" << endl; Sleep(2000);
				system("cls");
				PlaySound(TEXT("funny.wav"), NULL, SND_ASYNC | SND_LOOP);
				for (int j = 0; j < 2; j++)
				{
					print_2_dice(LightBlue, Black, 1, Magenta, Black, 2);
					system("cls");
					print_2_dice(LightGreen, Black, 3, Yellow, Black, 4);
					system("cls");
					print_2_dice(Red, Black, 1, Green, Black, 2);
					system("cls");
					print_2_dice(Magenta, Black, 3, Blue, Black, 4);
					system("cls");
					print_2_dice(Green, Black, 1, LightBlue, Black, 2);
					system("cls");
					print_2_dice(Yellow, Black, 3, Red, Black, 4);
					system("cls");
				}
				PlaySound(0, 0, SND_PURGE);
				SetColor(Yellow, Black);
				GotoXY(30, 10); cout << "Computer result: "; SetColor(White, Black); cout << summa_comp[i] << endl << endl; Sleep(3000);

				system("cls");
				SetColor(LightMagenta, Black);
				GotoXY(26, 10); cout << "Your turn to roll the dice!";
				GotoXY(31, 13); cout << "Press the button!!";
				GotoXY(37, 15); _getch();
				PlaySound(TEXT("button.wav"), NULL, SND_ASYNC | SND_LOOP);
				Sleep(800);
				PlaySound(0, 0, SND_PURGE);
				system("cls");
				PlaySound(TEXT("funny.wav"), NULL, SND_ASYNC | SND_LOOP);
				for (int j = 0; j < 2; j++)
				{
					print_2_dice(LightBlue, Black, 1, Magenta, Black, 2);
					system("cls");
					print_2_dice(LightGreen, Black, 3, Yellow, Black, 4);
					system("cls");
					print_2_dice(Red, Black, 1, Green, Black, 2);
					system("cls");
					print_2_dice(Magenta, Black, 3, Blue, Black, 4);
					system("cls");
					print_2_dice(Green, Black, 1, LightBlue, Black, 2);
					system("cls");
					print_2_dice(Yellow, Black, 3, Red, Black, 4);
					system("cls");
				}
				PlaySound(0, 0, SND_PURGE);
				SetColor(White, Black);
				random(gamer_dice1, i);
				random(gamer_dice2, i);
				summa(summa_gamer, gamer_dice1, gamer_dice2, i);
				SetColor(LightMagenta, Black);
				GotoXY(30, 10); cout << "Your result: "; SetColor(White, Black); cout << summa_gamer[i] << endl;
				Sleep(3000);
			}
			system("cls");
			summa_comp_total = sum_tot(summa_comp, size);
			summa_gamer_total = sum_tot(summa_gamer, size);
			cout << endl << endl;
			SetColor(Red, Black);
			GotoXY(30, 2); cout << "!!!FINAL SCORES!!!" << endl << endl;
			SetColor(Yellow, Black);
			GotoXY(0, 6); cout << "Computer: ";
			SetColor(White, Black);
			print_points(summa_comp, size);
			SetColor(LightMagenta, Black);
			GotoXY(0, 8);
			cout << "You: ";
			SetColor(White, Black);
			print_points(summa_gamer, size);
			Sleep(2000);
			system("cls");

			PlaySound(TEXT("funny.wav"), NULL, SND_ASYNC | SND_LOOP);
			for (int j = 0; j < 2; j++)
			{
				print_question(LightBlue, Black, 5);
				print_question(Magenta, Black, 6);
				print_question(LightGreen, Black, 5);
				print_question(Yellow, Black, 6);
				print_question(Red, Black, 5);
				print_question(Green, Black, 6);
			}
			PlaySound(0, 0, SND_PURGE);
			system("cls");
			Sleep(1000);
			compare_results(summa_comp_total, summa_gamer_total);
			PlaySound(0, 0, SND_PURGE);
			system("cls");
			SetColor(Yellow, Black);
			GotoXY(28, 2); cout << "Computer total is: "; SetColor(White, Black); cout << summa_comp_total << endl << endl;
			SetColor(LightMagenta, Black);
			GotoXY(30, 4); cout << "Your total is: "; SetColor(White, Black); cout << summa_gamer_total << endl << endl;
		}
		break;

		case 2:
		{
			for (int i = 0; i < size; i++)
			{
				system("cls");
				SetColor(Red, Black);
				PlaySound(TEXT("gong.wav"), NULL, SND_ASYNC | SND_LOOP);
				GotoXY(36, 10); cout << "ROUND " << i + 1 << endl; Sleep(6000);
				PlaySound(0, 0, SND_PURGE);
				system("cls");
				SetColor(LightMagenta, Black);
				GotoXY(26, 10); cout << "Your turn to roll the dice!";
				GotoXY(31, 13); cout << "Press the button!!";
				GotoXY(37, 15); _getch();
				PlaySound(TEXT("button.wav"), NULL, SND_ASYNC | SND_LOOP);
				Sleep(800);
				PlaySound(0, 0, SND_PURGE);
				system("cls");
				PlaySound(TEXT("funny.wav"), NULL, SND_ASYNC | SND_LOOP);
				for (int j = 0; j < 2; j++)
				{

					print_2_dice(LightBlue, Black, 1, Magenta, Black, 2);
					system("cls");
					print_2_dice(LightGreen, Black, 3, Yellow, Black, 4);
					system("cls");
					print_2_dice(Red, Black, 1, Green, Black, 2);
					system("cls");
					print_2_dice(Magenta, Black, 3, Blue, Black, 4);
					system("cls");
					print_2_dice(Green, Black, 1, LightBlue, Black, 2);
					system("cls");
					print_2_dice(Yellow, Black, 3, Red, Black, 4);
					system("cls");
				}
				PlaySound(0, 0, SND_PURGE);
				SetColor(White, Black);
				random(gamer_dice1, i);
				random(gamer_dice2, i);
				summa(summa_gamer, gamer_dice1, gamer_dice2, i);
				SetColor(LightMagenta, Black);
				GotoXY(30, 10); cout << "Your result: "; SetColor(White, Black); cout << summa_gamer[i] << endl;
				Sleep(3000);
				system("cls");
				random(comp_dice1, i);
				random(comp_dice2, i);
				summa(summa_comp, comp_dice1, comp_dice2, i);
				SetColor(Yellow, Black);
				GotoXY(30, 10); cout << "Computer is playing" << endl; Sleep(2000);
				system("cls");
				PlaySound(TEXT("funny.wav"), NULL, SND_ASYNC | SND_LOOP);
				for (int j = 0; j < 2; j++)
				{

					print_2_dice(LightBlue, Black, 1, Magenta, Black, 2);
					system("cls");
					print_2_dice(LightGreen, Black, 3, Yellow, Black, 4);
					system("cls");
					print_2_dice(Red, Black, 1, Green, Black, 2);
					system("cls");
					print_2_dice(Magenta, Black, 3, Blue, Black, 4);
					system("cls");
					print_2_dice(Green, Black, 1, LightBlue, Black, 2);
					system("cls");
					print_2_dice(Yellow, Black, 3, Red, Black, 4);
					system("cls");
				}
				PlaySound(0, 0, SND_PURGE);
				SetColor(Yellow, Black);
				GotoXY(30, 10); cout << "Computer result: "; SetColor(White, Black); cout << summa_comp[i] << endl << endl;
				Sleep(3000);
			}
			system("cls");
			summa_comp_total = sum_tot(summa_comp, size);
			summa_gamer_total = sum_tot(summa_gamer, size);
			cout << endl << endl;
			SetColor(Red, Black);
			GotoXY(30, 2); cout << "!!!FINAL SCORES!!!" << endl << endl;
			SetColor(Yellow, Black);
			GotoXY(0, 6); cout << "Computer: ";
			SetColor(White, Black);
			print_points(summa_comp, size);
			SetColor(LightMagenta, Black);
			GotoXY(0, 8);
			cout << "You: ";
			SetColor(White, Black);
			print_points(summa_gamer, size);
			Sleep(2000);
			system("cls");

			PlaySound(TEXT("funny.wav"), NULL, SND_ASYNC | SND_LOOP);
			for (int j = 0; j < 2; j++)
			{

				print_question(LightBlue, Black, 5);
				print_question(Magenta, Black, 6);
				print_question(LightGreen, Black, 5);
				print_question(Yellow, Black, 6);
				print_question(Red, Black, 5);
				print_question(Green, Black, 6);
			}
			PlaySound(0, 0, SND_PURGE);
			system("cls");
			Sleep(1000);
			compare_results(summa_comp_total, summa_gamer_total);
			PlaySound(0, 0, SND_PURGE);
			system("cls");
			SetColor(Yellow, Black);
			GotoXY(28, 2); cout << "Computer total is: "; SetColor(White, Black); cout << summa_comp_total << endl << endl;
			SetColor(LightMagenta, Black);
			GotoXY(30, 4); cout << "Your total is: "; SetColor(White, Black); cout << summa_gamer_total << endl << endl;
		}
		break;
		}
		cout << "  " << endl;
		GotoXY(25, 10); cout << "Play once more? 1 - yes, 0 - no" << endl;
		cout << endl;
		GotoXY(38, 12); cin >> key_1;
	} while (key_1);
	cout << endl;
	system("cls");
	SetColor(Red, Black);
	GotoXY(30, 2); cout << "Game over" << endl;
	SetColor(White, Black);

}

