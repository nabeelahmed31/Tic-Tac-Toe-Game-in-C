#include <stdio.h>
#include <stdlib.h>
char p[10]={'0','1','2','3','4','5','6','7','8','9'}; //This array represents game-board.
void display();           //This function displays the game-board.
void mark(int p1,int p2); //This function assigns X or O to the given input position.
int checkWin();           //This function checks if a player has won or not.
int checkPos(int pos);    //This function checks the input position.
main()
{
	int i,p1,p2;
	display();
	GAME:
	for(i=0;i<5;i++)
	{
		PLAYER_1:
		printf("Enter position, Player 1:\n");
		scanf("%d",&p1);
		if(checkPos(p1)==1)
		{
			printf("Invalid Entry, try again.\n");
			goto PLAYER_1;
		}
		mark(p1,p2);
		if(checkWin()==1)
		{
			printf("Player 1 Wins!!!");
			break;
		}
		if(i==4)
		{
			printf("It's a tie");
			break;
		}
		PLAYER_2:
	    printf("Enter position, Player 2:\n");
		scanf("%d",&p2);
		if(checkPos(p2)==1)
		{
			printf("Invalid entry, try again.\n");
			goto PLAYER_2;
		}
		mark(p1,p2);
		if(checkWin()==2)
		{
			printf("Player 2 Wins!!!");
			break;
		}
    }
}


void display()
{
	printf("\n\tTic Tac Toe\n\n");
	printf("Player 1 (X) - Player 2 (O)\n\n\n");
	printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n",p[1],p[2],p[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n",p[4],p[5],p[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n",p[7],p[8],p[9]);
    printf("     |     |     \n\n");
}


void mark(int p1,int p2)
{
	switch(p1)
		{
			case 1:
				p[1]='X';
				break;
			case 2:
				p[2]='X';
				break;
			case 3:
				p[3]='X';
				break;
			case 4:
				p[4]='X';
				break;
			case 5:
				p[5]='X';
				break;
			case 6:
				p[6]='X';
				break;
			case 7:
				p[7]='X';
				break;
			case 8:
				p[8]='X';
				break;
			case 9:
				p[9]='X';
				break;
		}
	switch(p2)
		{
			case 1:
				p[1]='O';
				break;
			case 2:
				p[2]='O';
				break;
			case 3:
				p[3]='O';
				break;
			case 4:
				p[4]='O';
				break;
			case 5:
				p[5]='O';
				break;
			case 6:
				p[6]='O';
				break;
			case 7:
				p[7]='O';
				break;
			case 8:
				p[8]='O';
				break;
			case 9:
				p[9]='O';
				break;
		}
	system("cls");  //To refresh the output window.
	display();      //To display the game-board again with X and O.
}


int checkWin()
{
	int returnValue=0;
	
	//If any row,column or diagonal contains same character returnValue=1 
	
	if(p[1]=='X'&&p[2]=='X'&&p[3]=='X')
	    returnValue=1;
	else if(p[4]=='X'&&p[5]=='X'&&p[6]=='X')
	    returnValue=1;
	else if(p[7]=='X'&&p[8]=='X'&&p[9]=='X')
	    returnValue=1;
	else if(p[1]=='X'&&p[4]=='X'&&p[7]=='X')
	    returnValue=1;
	else if(p[2]=='X'&&p[5]=='X'&&p[8]=='X')
	    returnValue=1;
	else if(p[3]=='X'&&p[6]=='X'&&p[9]=='X')
	    returnValue=1;
	else if(p[1]=='X'&&p[5]=='X'&&p[9]=='X')
	    returnValue=1;
	else if(p[3]=='X'&&p[5]=='X'&&p[7]=='X')
	    returnValue=1;
//---------------------------------------------
    else if(p[1]=='O'&&p[2]=='O'&&p[3]=='O')
	    returnValue=2;
	else if(p[4]=='O'&&p[5]=='O'&&p[6]=='O')
	    returnValue=2;
	else if(p[7]=='O'&&p[8]=='O'&&p[9]=='O')
	    returnValue=2;
	else if(p[1]=='O'&&p[4]=='O'&&p[7]=='O')
	    returnValue=2;
	else if(p[2]=='O'&&p[5]=='O'&&p[8]=='O')
	    returnValue=2;
	else if(p[3]=='O'&&p[6]=='O'&&p[9]=='O')
	    returnValue=2;
	else if(p[1]=='O'&&p[5]=='O'&&p[9]=='O')
	    returnValue=2;
	else if(p[3]=='O'&&p[5]=='O'&&p[7]=='O')
	    returnValue=2;
	return returnValue;
}


int checkPos(int pos)
{
	int returnValue=0;
	switch(pos)              //switch checks if input position is re-entered.
	{
		case 1:
			if(p[1]!='1')
			returnValue=1;
			break;
		case 2:
			if(p[2]!='2')
			returnValue=1;
			break;
		case 3:
			if(p[3]!='3')
			returnValue=1;
			break;
		case 4:
			if(p[4]!='4')
			returnValue=1;
			break;
		case 5:
			if(p[5]!='5')
			returnValue=1;
			break;
		case 6:
			if(p[6]!='6')
			returnValue=1;
			break;
		case 7:
			if(p[7]!='7')
			returnValue=1;
			break;
		case 8:
			if(p[8]!='8')
			returnValue=1;
			break;
		case 9:
			if(p[9]!='9')
			returnValue=1;
			break;
		default:           //defult checks if the input position is less then 1 or greater than 9.
			returnValue=1;
	}
	return returnValue;
}
