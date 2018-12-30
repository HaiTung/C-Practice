#include <iostream>
using namespace std;


char Matrix[3][3] = {'1','2','3','4','5','6','7','8','9'};
char play1[20], play2[20];

int mode;

int checkWin()
{
	for (int i = 0; i < 3; i++)
	{
		//hang ngan
		if (Matrix[i][0] == Matrix[i][1] && Matrix[i][1] == Matrix[i][2]) 
		{
			if (Matrix[i][0]=='X')
			{
				return 1; 
			}
			else
			{
				return 2;
			}
		}
		//hang doc
		if(Matrix[0][i] == Matrix[1][i] && Matrix[1][i] == Matrix[2][i])
		{
			if (Matrix[0][i] == 'X')
			{
				return 1;
			}
			else
			{
				return 2;
			}
		}//duong cheo 1

		if (Matrix[0][0] == Matrix[1][1] && Matrix[1][1] == Matrix[2][2])
		{
			if (Matrix[0][0] == 'X')
			{
				return 1;
			}
			else
			{
				return 2;
			}
		}
		//duong cheo 2
		 if (Matrix[0][2] == Matrix[1][1] && Matrix[1][1] == Matrix[2][0])
		{
			if (Matrix[0][2] == 'X')
			{
				return 1;
			}
			else
			{
				return 2;
			}
		}
	}
}

void choice()
{
	system("cls");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << " | " << Matrix[i][j];
		cout << "\n ------------\n";
	}
}

int main()
{
	int i, j;
	system("cls");
	cout << "\n\n\tTic Tac Toe\n\n";
	cout << "Welcome To Tic-tac-toe game! Play with your way!\nIf you find any problem, please contact john.nguyen@gameloft.com";

	cout << "\n\nSELECT YOUR MODE (1 - PLAY GAME, OTHERS - EXIT GAME):\n\n"; cin >> mode;

	if (mode == 1)
	{
		cout << "\nPlay 1: "; cin >> play1;
		cout << "\nPlay 2: "; cin >> play2;
		cout << endl;
		choice();
		int dem = 0, s, n;
		do
		{
			if (dem % 2 == 0)
			{
				
				
				do
				{
					
					s = 'X';
					cout << "\n\nPlay: " << play1 << " ,Enter a number : ";
					cin >> n;

					 i = n / 10 - 1;  j = n % 10 - 1;

					 if (Matrix[i][j] != 'X'&& Matrix[i][j] != 'O')
					 {
						 Matrix[i][j] = s;
						 choice();
						 dem++;

					 }
				
				} while (n < 11); 
				
				if (checkWin() == 1)
				{
					cout << "\n\nPlay: " << play1 << " Win "; break;

				}
				if (checkWin() == 2)
				{
					cout << "\n\nPlay: " << play2 << " Win "; break;
				}
					
				

			}
			else
			{
				
				do
				{

					s = 'O';
					cout << "\n\nPlay: " << play2 << " ,Enter a number : ";
					cin >> n;

					i = n / 10 - 1;  j = n % 10 - 1;

					if (Matrix[i][j] != 'X'&& Matrix[i][j] != 'O')
					{
						Matrix[i][j] = s;
						choice();
						dem++;

					}
					
				} while (n < 11);

				int i = n / 10 - 1; int j = n % 10 - 1;


				if (checkWin() == 1)
				{
					cout << "\n\nPlay: " << play1 << " Win"; break;

				}
				if (checkWin() == 2)
				{
					cout << "\n\nPlay: " << play2 << " Win"; break;
				}

				
			}
		} while (true);

	}
	system("pause");
	return 0;
}
