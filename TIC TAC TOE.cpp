#include<iostream>
using namespace std;
char A1 = '1', A2 = '2', A3 = '3', A4 = '4', A5 = '5', A6 = '6', A7 = '7', A8 = '8', A9 = '9';
char input;
int x = 0;
char turn = 'X';
bool draw = false;
void display()
{
	system("cls");
	cout << "\t\t WELCOME TO TIC TAC TOE GAME" << endl;
	cout << "PLAYER 1  ==> X" << endl;
	cout << "PLAYER 2  ==> O" << endl;
	cout << "\t\t     |  " << "  |     " << endl;
	cout << "\t\t   " << A1 << " |  " << A2 << " |  " << A3 << endl;
	cout << "\t\t_____|___" << "_|_____" << endl;
	cout << "\t\t     |  " << "  |     " << endl;
	cout << "\t\t   " << A4 << " |  " << A5 << " |  " << A6 << endl;
	cout << "\t\t_____|___" << "_|_____" << endl;
	cout << "\t\t     |  " << "  |     " << endl;
	cout << "\t\t   " << A7 << " |  " << A8 << " |  " << A9 << endl;
	cout << "\t\t     |  " << "  |     " << endl;
}

void Turn()
{
	if (turn == 'X')
	{
		cout << "PLAYER 1 TURN ";
	}
	else if (turn == 'O')
	{
		cout << "PLAYER 2 TURN ";
	}
	else
	{
		cout << "ERROR";
	}

	cin >> input;

	if (turn == 'X')
	{

		if (input == '1' && A1 != 'X' && A1 != 'Y')
		{
			A1 = 'X';
		}
		else if (input == '2' && A2 != 'X' && A2 != 'Y')
		{
			A2 = 'X';
		}
		else if (input == '3' && A3 != 'X' && A3 != 'Y')
		{
			A3 = 'X';
		}
		else if (input == '4' && A4 != 'X' && A4 != 'Y')
		{
			A4 = 'X';
		}
		else if (input == '5' && A5 != 'X' && A5 != 'Y')
		{
			A5 = 'X';
		}
		else if (input == '6' && A6 != 'X' && A6 != 'Y')
		{
			A6 = 'X';
		}
		else if (input == '7' && A7 != 'X' && A7 != 'Y')
		{
			A7 = 'X';
		}
		else if (input == '8' && A8 != 'X' && A8 != 'Y')
		{
			A8 = 'X';
		}
		else if (input == '9' && A9 != 'X' && A9 != 'Y')
		{
			A9 = 'X';
		}
		else
		{
			cout << "Invalid Entry!" << endl;
		}
		turn = 'O';

	}

	else if (turn == 'O')
	{

		if (input == '1' && A1 != 'X' && A1 != 'Y')
		{
			A1 = 'O';
		}
		else if (input == '2' && A2 != 'X' && A2 != 'Y')
		{
			A2 = 'O';
		}
		else if (input == '3' && A3 != 'X' && A3 != 'Y')
		{
			A3 = 'O';
		}
		else if (input == '4' && A4 != 'X' && A4 != 'Y')
		{
			A4 = 'O';
		}
		else if (input == '5' && A5 != 'X' && A5 != 'Y')
		{
			A5 = 'O';
		}
		else if (input == '6' && A6 != 'X' && A6 != 'Y')
		{
			A6 = 'O';
		}
		else if (input == '7' && A7 != 'X' && A7 != 'Y')
		{
			A7 = 'O';
		}
		else if (input == '8' && A8 != 'X' && A8 != 'Y')
		{
			A8 = 'O';
		}
		else if (input == '9' && A9 != 'X' && A9 != 'Y')
		{
			A9 = 'O';
		}
		else
		{
			cout << "Invalid Input" << endl;
		}
		turn = 'X';
	}
	display();
}
bool Over()
{

	if ((A1 == A2 && A2 == A3) || (A1 == A4 && A4 == A7) || (A7 == A8 && A8 == A9) || (A3 == A6 && A6 == A9) || (A1 == A5 && A5 == A9) || (A3 == A5 && A5 == A7))
	{
		return false;
	}

	if ((A1 == 'X' || A1 == 'O') && (A2 == 'X' || A2 == 'O') && (A3 == 'X' || A3 == 'O') && (A4 == 'X' || A4 == 'O') && (A5 == 'X' || A5 == 'O') && (A6 == 'X' || A6 == 'O') && (A7 == 'X' || A7 == 'O') && (A8 == 'X' || A8 == 'O') && (A9 == 'X' || A9 == 'O'))
	{
		x = 1;
		return false;
	}

	if ((A1 != 'X' && A2 != 'X' && A3 != 'X' && A4 != 'X' && A5 != 'X' && A6 != 'X' && A7 != 'X' && A8 != 'X' && A9 != 'X') && (A1 != 'O' && A2 != 'O' && A3 != 'O' && A4 != 'O' && A5 != 'O' && A6 != 'O' && A7 != 'O' && A8 != 'O' && A9 != 'O'))
	{
		return true;
	}
}

int main()
{

	while (Over())
	{
		display();
		Turn();
		Over();
	}

	if (turn == 'X' && x == 0)
	{

		cout << "CONGRATULATIONS !" << endl << endl;
		cout << "PLAYER 2 WINS" << endl << endl;
	}

	else if (turn == 'O' && x == 0)
	{

		cout << "CONGRATULATIONS !" << endl << endl;
		cout << "PLAYER 1 WINS" << endl << endl;
	}

	else
	{
		cout << "GAME DRAW!" << endl << endl;
	}

}