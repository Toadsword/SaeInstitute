// Exercice 7.1 : Tic tac toe
// Definition : Play a game of tic tac toe on the windows console with a friend
// Author : Duncan Bourquard
// Date : 30.09.17

#include <iostream>
#include <string.h>

const int NUM_COLUMNS = 3;
const int NUM_ROWS = 3;

//	Description :
//		Fills the array with "_"
//	Param : 
//		char* gameMap : Array to fill to prepare the game
void generateMap(char* gameMap[][NUM_COLUMNS])
{
	for (int i_column = 0; i_column < NUM_COLUMNS; i_column++) {
		for (int i_row = 0; i_row < NUM_ROWS; i_row++)
		{
			gameMap[i_column][i_row] = "_";
		}
	}
}

//	Description :
//		Display the current game state on the screen
//	Param : 
//		char* gameMap : Data of the game
void showMap(char* gameMap[][NUM_COLUMNS])
{
	system("cls");
	std::cout << "\n\t---------------\n";

	for (int i_column = 0; i_column < NUM_COLUMNS; i_column++) {
		std::cout << "\t";
		for (int i_row = 0; i_row < NUM_ROWS; i_row++)
		{
			std::cout << "| " << gameMap[i_column][i_row] << " |";
		}
		std::cout << "\n\t---------------\n";
	}
}

//	Description :
//		Asks the player for a free emplacement, output an error if it is not valid 
//		and continuously asks for a valid one.
//	Param : 
//		char* gameMap : Data of the game
//		char* currentPlayer : Takes the char of the current player
void setNewPosition(char* gameMap[][NUM_COLUMNS], char* currentPlayer)
{
	int row = 0;
	int column = 0;
	bool notValid = true;

	do 
	{
		std::cout << "Player " << currentPlayer << ", which row? (1-"<< NUM_ROWS << ") : ";
		std::cin >> row;

		std::cout << "Player " << currentPlayer << ", which column? (1-" << NUM_COLUMNS  <<") : ";
		std::cin >> column;
		
		if (!column >= 1 && !column <= NUM_COLUMNS && !row >= 1 && !row <= NUM_ROWS)
			std::cout << "Please select an existing row/column.\n";
		else if(gameMap[row-1][column-1] != "_")
			std::cout << "Please select a free place.\n";
		else
			notValid = false;

	} while (notValid);

	gameMap[row-1][column-1] = currentPlayer;
}

//	Description :
//		Check if one player has won
//	Param : 
//		char* gameMap[][] : Data of the game
//		char* c(urrent)Player : Char of the currently checked player
//	Return :
//		true if the currentPlayer has a valid, else false
bool checkWin(char* gameMap[][NUM_COLUMNS], char* cPlayer)
{
	for (int i_row = 0; i_row < NUM_ROWS; i_row++) {
		if (cPlayer == gameMap[i_row][0] && cPlayer == gameMap[i_row][1] && cPlayer == gameMap[i_row][2])
			return true;
	}

	for (int i_column = 0; i_column < NUM_COLUMNS; i_column++) {
		if (cPlayer == gameMap[0][i_column] && cPlayer == gameMap[1][i_column] && cPlayer == gameMap[2][i_column])
			return true;
	}

	if( (cPlayer == gameMap[0][0] && cPlayer == gameMap[1][1] && cPlayer == gameMap[2][2]) ||
		(cPlayer == gameMap[0][2] && cPlayer == gameMap[1][1] && cPlayer == gameMap[2][0]) )
		return true;

	return false;
}

//	Description :
//		Main game process
//	Param : 
//		gameMap : Data of the game
void playGame(char* gameMap[][NUM_COLUMNS])
{
	char* player1 = "X";
	char* player2 = "O";
	char* currentPlayer = player1;
	bool isPlayer1Active = true;
	bool hasWon = false;

	for (int i = 1; i <= NUM_COLUMNS*NUM_ROWS; i++)
	{
		showMap(gameMap);
		setNewPosition(gameMap, currentPlayer);
		if (checkWin(gameMap, currentPlayer))
		{
			hasWon = true;
			break;
		}
		else 
		{
			if (currentPlayer == player1)
			{
				currentPlayer = player2;
				isPlayer1Active = false;
			}
			else
			{
				currentPlayer = player1;
				isPlayer1Active = true;
			}
		}
	}
	
	showMap(gameMap);
	if(hasWon)
		std::cout << "GG " << currentPlayer << " !\n";
	else
		std::cout << "Draw ! You're both bad !\n";
}

int main()
{
	char* gameMap[NUM_ROWS][NUM_COLUMNS];
	generateMap(gameMap);

	playGame(gameMap);

	system("pause");
    return EXIT_SUCCESS;
}