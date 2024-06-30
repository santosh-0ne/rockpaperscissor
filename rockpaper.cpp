#include <iostream>
#include <ctime>
#include<cstdlib>
using namespace std;
//function 1
char getuserchoice();
//function 2
char getcomputerchoice();
//function 3
void showchoice(char choice);
//function 4
void choosewinner(char player,char computer);
//main 
int main()
{
	char player;
	char computer;
	
	player = getuserchoice();
	cout<<"your choice:";
	showchoice(player);
	computer = getcomputerchoice();
		cout<<"computer choice:";
		showchoice(computer);
		choosewinner(player,computer);
	     return (0);
}


// function 1 takes user choice
	char getuserchoice(){
		char player;
		cout<<"Rock-Papaer-Scissors Game! \n";
		do{
		
			cout<<"***********************\n";
				cout<<"'r' for Rock\n";
					cout<<"'p' for Paper\n";
						cout<<"'s' for Scissors\n";
						cin>>player;
						}
						while(player!='r'&&player!='p'&&player!='s');
						return player;
						
		
	};
	
	
	
	
	// function 2 takes computer choice
 char getcomputerchoice(){
	
	srand(time(0));
	int num = rand() %3 + 1;
		switch(num){
		//rock
		case 1: 
		return 'r';
	     case 2: 
		return 'p';
		case 3: 
		return 's';
}
	
};




//function 3 shows choice of user
void showchoice(char choice){
	
	switch(choice)
	{
		//rock
		case'r':
			cout<<"Rock\n";
			break;
			//paper
			case'p':
			cout<<"Paper\n";
			break;
			case's':
			cout<<"Scissor\n";
			break;
		}
	
};




// function 4 chooses winner
void choosewinner(char player,char computer){
	switch(player)
	{ 
	//player choosed rock
	case 'r':
	if (computer=='r')
	{
	cout<<"tie!\n";
	}
		else if (computer=='p')
	{
	cout<<"you lose!\n";
	}
	else
	{cout<<"you win!";
	}
	break;
		 //player chhose paper
	case 'p':
	if (computer=='r')
	{cout<<"you win\n";
	}
		else if (computer=='p')
	{
	cout<<"tie!\n";
	}
	else
	{cout<<"you loose!";
	}
	break;
		//playerchoosed scissor	 
	case 's':
	if (computer=='r')
	{cout<<"you loose!\n";
	}
		else if (computer=='p')
	{cout<<"you win!\n";
	}
	else
	{cout<<"tie!";
	}
	break;
	
	}
};
	

