#include<iostream>
using namespace std;

 class ti_tac_toe{


public:
	void draw();
	void togglePlayer(char player);
	
	void Input(char player);
	char winControl();
	char board[3][3];

};

 int  main()
{
	ti_tac_toe game;
	char player = 'X';
	game.draw();
	while (1){
		game.Input(player);
		game.draw();
		game.winControl();
		if (game.winControl() == 'X')
		{
			cout << "X wins!";
			break;
		}
		if (game.winControl() == 'O')
		{
			cout << "O wins!";
			break;
		}
		game.togglePlayer(player);

	}




	system("PAUSE");
	return 0;
}

void ti_tac_toe::draw(){
	
	char board[3][3] = { '1','2','3','4','5','6','7','8','9' };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			
			cout << board[i][j] << "     ";
		}
		cout << endl;
	}

}
void  ti_tac_toe::Input(char player){
	int a;
	cout << "press the number of the field";
	cin >> a;
	if (a == 1)
		board[0][0] = player;
	if (a == 2)
		board[0][1] = player;

	if (a == 3)
		board[0][2] = player;

	if (a == 4)
		board[1][0] = player;

	if (a == 5)
		board[1][1] = player;

	if (a == 6)
		board[1][2] = player;

	if (a == 7)
		board[2][0] = player;

	if (a == 8)
		board[2][1] = player;

	if (a == 9)
		board[2][2] = player;

}
void ti_tac_toe::togglePlayer(char player){
	if (player == 'X'){
		player = 'O';
	}
	else
		player == 'X';

}
char  ti_tac_toe::winControl(){
	if (board[0][0] == board[0][1] == board[0][2] == 'X'){
		return 'X';
	}
	if (board[1][0] == board[1][1] == board[1][2] == 'X'){
		return 'X';
	}
	if (board[2][0] == board[2][1] == board[2][2] == 'X'){
		return 'X';
	}
	if (board[0][0] == board[1][0] == board[2][0] == 'X'){
		return 'X';
	}
	if (board[0][2] == board[1][1] == board[2][0] == 'X'){
		return 'X';
		
	}
	if (board[0][0] == board[1][1] == board[2][2] == 'X'){
		return 'X';
	}
	if (board[0][2] == board[1][2] == board[2][2] == 'X'){
		return 'X';
	}
								if (board[0][1] == board[1][1] == board[2][1] == 'O'){
									return 'O';

								}
								if (board[0][0] == board[0][1] == board[0][2] == 'O'){
									return 'O';
								}
								if (board[1][0] == board[1][1] == board[1][2] == 'O'){
									return 'O';
								}
								if (board[2][0] == board[2][1] == board[2][2] == 'O'){
									return 'O';
								}
								if (board[0][0] == board[1][0] == board[2][0] == 'O'){
									return 'O';
								}
								if (board[0][2] == board[1][1] == board[2][0] == 'O'){
									return 'O';
								}
								if (board[0][0] == board[1][1] == board[2][2] == 'O'){
									return 'O';
								}
								if (board[0][2] == board[1][2] == board[2][2] == 'O'){
									return 'O';
								}
								if (board[0][1] == board[1][1] == board[2][1] == 'O'){
									return 'O';
				
								}
								
							}


