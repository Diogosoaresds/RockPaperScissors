#include <iostream>
#include <ctime>

char getPlayerChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    char player;
    char computer;
    char answer = 'Y';

    while (answer == 'Y' || answer == 'y') {
        std::cout << "Do You Want to Play? (Y/N) \n";
        std::cin >> answer;

        if (answer != 'Y' && answer != 'y')
            break; // Sai do loop se a resposta não for 'Y' ou 'y'

        player = getPlayerChoice();
        std::cout<< "You Chose: \n";
        showChoice(player);
        computer = getComputerChoice(); 
        std::cout<< "Computer Chose: \n";
        showChoice(computer);

       chooseWinner(player, computer);
    }
    return 0;
}

char getPlayerChoice(){
    char player;
    std::cout<< "Rock-Paper-Scissors Game!\n";
    std::cout<< "*************************\n";
    do{
        std::cout<< "Choose One of The Following:\n";
        std::cout<< "****************************\n";
        std::cout<< "'R' for Rock\n";
        std::cout<< "'P' for Paper\n";
        std::cout<< "'S' for Scissors\n";
        std::cin>> player;

    }while(player != 'r' && player != 'R' && player != 'p' && player != 'P' && player != 's' && player != 'S');

    return player;
}

char getComputerChoice(){

    srand(time_t(0));
    int num = (rand() % 3) + 1;

    switch(num){
        case 1:return 'r';
        case 2:return 'p';
        case 3:return 's';
    }

    return 0;
}

void showChoice(char choice){

    switch(choice){
        case 'r':
            std::cout<<"Rock\n";
            break;
        case 'R':
            std::cout<<"Rock\n";
            break;
        case 'p':
            std::cout<<"Paper\n";
            break;
        case 'P':
            std::cout<<"Paper\n";
            break;
        case 's':
            std::cout<<"Scissors\n";
            break;
        case 'S':
            std::cout<<"Scissors";
            break;
    }

}

void chooseWinner(char player, char computer){

    switch(player){
        case 'r': if(computer == 'r'){
                        std::cout<<"**************\n";
                        std::cout<<"Its a Tie!\n";
                        std::cout<<"**************\n";
                    } 
                    else if(computer == 's'){
                        std::cout<<"**************\n";
                        std::cout<<"You Won!\n";
                        std::cout<<"**************\n";
                    }
                    else if(computer == 'p'){
                        std::cout<<"**************\n";
                        std::cout<<"You Lost!\n";
                        std::cout<<"**************\n";
                    }
                    break;
        case 'R': if(computer == 'r'){
                        std::cout<<"**************\n";
                        std::cout<<"Its a Tie!\n";
                        std::cout<<"**************\n";
                    } 
                    else if(computer == 's'){
                        std::cout<<"**************\n";
                        std::cout<<"You Won!\n";
                        std::cout<<"**************\n";
                    }
                    else if(computer == 'p'){
                        std::cout<<"**************\n";
                        std::cout<<"You Lost!\n";
                        std::cout<<"**************\n";
                    }
                    break;
        case 's': if(computer == 'r'){
                        std::cout<<"**************\n";
                        std::cout<<"You Lost!\n";
                        std::cout<<"**************\n";
                    } 
                    else if(computer == 's'){
                        std::cout<<"**************\n";
                        std::cout<<"Its a Tie!\n";
                        std::cout<<"**************\n";
                    }
                    else if(computer == 'p'){
                        std::cout<<"**************\n";
                        std::cout<<"You Won!\n";
                        std::cout<<"**************\n";
                    }
                    break;
        case 'S': if(computer == 'r'){
                        std::cout<<"**************\n";
                        std::cout<<"You Lost!\n";
                        std::cout<<"**************\n";
                    } 
                    else if(computer == 's'){
                        std::cout<<"**************\n";
                        std::cout<<"Its a Tie!\n";
                        std::cout<<"**************\n";
                    }
                    else if(computer == 'p'){
                        std::cout<<"**************\n";
                        std::cout<<"You Won!\n";
                        std::cout<<"**************\n";
                    }
                    break;
        case 'p': if(computer == 'r'){
                        std::cout<<"**************\n";
                        std::cout<<"You Won!\n";
                        std::cout<<"**************\n";
                    } 
                    else if(computer == 's'){
                        std::cout<<"**************\n";
                        std::cout<<"You Lost!\n";
                        std::cout<<"**************\n";
                    }
                    else if(computer == 'p'){
                        std::cout<<"**************\n";
                        std::cout<<"Its a Tie!\n";
                        std::cout<<"**************\n";
                    }
                    break;
        case 'P': if(computer == 'r'){
                        std::cout<<"**************\n";
                        std::cout<<"You Won!\n";
                        std::cout<<"**************\n";
                    } 
                    else if(computer == 's'){
                        std::cout<<"**************\n";
                        std::cout<<"You Lost!\n";
                        std::cout<<"**************\n";
                    }
                    else if(computer == 'p'){
                        std::cout<<"**************\n";
                        std::cout<<"Its a Tie!\n";
                        std::cout<<"**************\n";
                    }
                    break;
    }
}
