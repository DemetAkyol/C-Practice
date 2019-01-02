#include<stdio.h>
#include<stdlib.h>
/*

birinci matris:(3x2)
**
**
**
ikinci matris:(2x4)
****
****
sonuc matris(3x4)
****
****
****
*/
int ONE[3][2],TWO[2][4],RESULT[3][4];
void InputElmentsONE()
{
	//Input to Matrix Elements
	puts("\n Input to Matrix ONE  \n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++) {
			printf("[%d][%d] :", i + 1, j + 1);
			scanf("%d", &ONE[i][j]);


		}
	}
	//Display Matrix
	puts("\n Display to Matrix ONE  \n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++) {
			printf("| %d |", ONE[i][j]);

		}
		printf("\n");
	}

}
void InputElmentsTWO()
{
	//Input to Matrix Elements
	puts("\n Input to Matrix ONE : \n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++) {
			printf("[%d][%d] :", i + 1, j + 1);
			scanf("%d", &TWO[i][j]);


		}
	}
	//Display Matrix
	puts("\n Display to Matrix ONE : \n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++) {
			printf("| %d |", TWO[i][j]);

		}
		printf("\n");
	}

}
void ONExTWO()
{

	for (int i = 0; i < 3; i++) 
	{

		for (int j = 0; j < 4; j++) 
		{

			for (int k = 0; k < 2; k++)
			{
				RESULT[i][j] += ONE[i][k] * TWO[k][j];
			}
		}
	}
}
main() {

	InputElmentsONE();
	InputElmentsTWO();
	ONExTWO();

	puts("\n Display to Matrix RESULT : \n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++) {
			printf("| %d |", RESULT[i][j]);

		}
		printf("\n");
	}

	getch();
	return 0;
}
