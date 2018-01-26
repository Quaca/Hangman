#include <iostream>
#include <fstream>
#include <cstring>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <stdio.h>

using namespace std;

void getUserData(ofstream &user);

void getRandomWord(string &word);

void playGame(string word);

void startingGraph();
void firstMistake();
void secondMistake();
void thirdMistake();
void fourthMistake();
void fifthMistake();
void sixthMistake();
void seventhMistake();
void eighthMistake();

int main() {

    srand((unsigned int) time(NULL));
    ofstream userData;
    getUserData(userData);

    int gametime = 0;
    cout<<"Enter how many times you want to play: "; cin>>gametime;

    string word;
    for (int i = 0; i < gametime; ++i) {
        getRandomWord(word);
        playGame(word);
    }

}

void playGame(string word) {

    int misses = 0;
    int guess = 0;
    string output = word;
    for (int i = 0; i < output.length(); ++i) {
        output[i] = '-';
    }

    startingGraph();

    do{
        cout<<"Enter a letter: "<<output<<" : "<<endl;
        char userInput;
        cin >> userInput;

        bool goodGuess = false;
        for (int i = 0; i < word.length(); ++i) {
            if(userInput == word[i]){
                output[i] = word[i];
                guess += 1;
                goodGuess = true;
            }
        }

        if(!goodGuess){
            misses += 1;
            cout<<"Wrong letter, try again!";
            system("CLS");
        }

        switch(misses){
            case 1: firstMistake(); break;
            case 2: secondMistake(); break;
            case 3: thirdMistake(); break;
            case 4: fourthMistake(); break;
            case 5: fifthMistake(); break;
            case 6: sixthMistake(); break;
            case 7: seventhMistake(); break;
            case 8: eighthMistake(); break;
            default:break;
        }

        if(misses == 8){
            break;
        }

    }while(guess < word.length());

    ofstream data("log.txt", ofstream::app);

    data << "-----------------------------------------------" <<endl;

    if(guess == word.length()){
        cout<<"Congrats! You won!"<<endl;
        data << "The user has won this session\n"
             << "and has missed " << misses << " times.\n"
             << "The word was '" << word << "'\n";
    }else{
        cout<<"You lost! Better luck next time!\n";
        data << "The user has lost this session\n"
             << "The word was '" << word << "'\n";
    }
}

void getRandomWord(string &word) {

    vector<string> words;
    ifstream fileWord("words.txt");
    string randomWord;

    while(!fileWord.eof()){
        fileWord >> randomWord;
        words.push_back(randomWord);
    }

    word = words[rand()% + 20];

}

void getUserData(ofstream &user) {

    user.open("log.txt");
    string userName;
    cout<<"Please enter user name: "; cin >> userName;
    user << "USERNAME: " << userName <<"\n";
    system("CLS");
    user.close();
}

void startingGraph(){

    cout << "|----------" << endl;
    cout << "|         |" << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;


}

void firstMistake(){

    cout << "|----------" << endl;
    cout << "|         |" << endl;
    cout << "|         -" << endl;
    cout << "|        / \\" << endl;
    cout << "|       |   |" << endl;
    cout << "|        \\ /" << endl;
    cout << "|         -" << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;


}

void secondMistake(){

    cout << "|----------" << endl;
    cout << "|         |" << endl;
    cout << "|         -" << endl;
    cout << "|        / \\" << endl;
    cout << "|       |   |" << endl;
    cout << "|        \\ /" << endl;
    cout << "|         -" << endl;
    cout << "|         |" << endl;
    cout << "|         |" << endl;
    cout << "|         |" << endl;
    cout << "|         |" << endl;
    cout << "|         |" << endl;
    cout << "|         |" << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;


}

void thirdMistake(){

    cout << "|----------" << endl;
    cout << "|         |" << endl;
    cout << "|         -" << endl;
    cout << "|        / \\" << endl;
    cout << "|       |   |" << endl;
    cout << "|        \\ /" << endl;
    cout << "|         -" << endl;
    cout << "|         |" << endl;
    cout << "|      -------" << endl;
    cout << "|      |  |" << endl;
    cout << "|      |  |" << endl;
    cout << "|         |" << endl;
    cout << "|         |" << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;


}

void fourthMistake(){

    cout << "|----------" << endl;
    cout << "|         |" << endl;
    cout << "|         -" << endl;
    cout << "|        / \\" << endl;
    cout << "|       |   |" << endl;
    cout << "|        \\ /" << endl;
    cout << "|         -" << endl;
    cout << "|         |" << endl;
    cout << "|      -------" << endl;
    cout << "|      |  |  |" << endl;
    cout << "|      |  |  |" << endl;
    cout << "|         |" << endl;
    cout << "|         |" << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;


}

void fifthMistake(){

    cout << "|----------" << endl;
    cout << "|         |" << endl;
    cout << "|         -" << endl;
    cout << "|        / \\" << endl;
    cout << "|       |   |" << endl;
    cout << "|        \\ /" << endl;
    cout << "|         -" << endl;
    cout << "|         |" << endl;
    cout << "|      -------" << endl;
    cout << "|      |  |  |" << endl;
    cout << "|      |  |  |" << endl;
    cout << "|         |" << endl;
    cout << "|         |" << endl;
    cout << "|      -------" << endl;
    cout << "|      |   " << endl;
    cout << "|      |   " << endl;
    cout << "|      |   " << endl;
    cout << "|      |   " << endl;


}

void sixthMistake(){

    cout << "|----------" << endl;
    cout << "|         |" << endl;
    cout << "|         -" << endl;
    cout << "|        / \\" << endl;
    cout << "|       |   |" << endl;
    cout << "|        \\ /" << endl;
    cout << "|         -" << endl;
    cout << "|         |" << endl;
    cout << "|      -------" << endl;
    cout << "|      |  |  |" << endl;
    cout << "|      |  |  |" << endl;
    cout << "|         |" << endl;
    cout << "|         |" << endl;
    cout << "|      -------" << endl;
    cout << "|      |     |" << endl;
    cout << "|      |     |" << endl;
    cout << "|      |     |" << endl;
    cout << "|      |     |" << endl;


}

void seventhMistake(){

    cout << "|----------" << endl;
    cout << "|         |" << endl;
    cout << "|         -" << endl;
    cout << "|        / \\" << endl;
    cout << "|       |   |" << endl;
    cout << "|        \\ /" << endl;
    cout << "|         -" << endl;
    cout << "|         |" << endl;
    cout << "|      -------" << endl;
    cout << "|      |  |  |" << endl;
    cout << "|      |  |  |" << endl;
    cout << "|         |" << endl;
    cout << "|         |" << endl;
    cout << "|      -------" << endl;
    cout << "|      |     |" << endl;
    cout << "|      |     |" << endl;
    cout << "|      |     |" << endl;
    cout << "|    --|     |" << endl;
}

void eighthMistake(){

    cout << "|----------" << endl;
    cout << "|         |" << endl;
    cout << "|         -" << endl;
    cout << "|        / \\" << endl;
    cout << "|       |   |" << endl;
    cout << "|        \\ /" << endl;
    cout << "|         -" << endl;
    cout << "|         |" << endl;
    cout << "|      -------" << endl;
    cout << "|      |  |  |" << endl;
    cout << "|      |  |  |" << endl;
    cout << "|         |" << endl;
    cout << "|         |" << endl;
    cout << "|      -------" << endl;
    cout << "|      |     |" << endl;
    cout << "|      |     |" << endl;
    cout << "|      |     |" << endl;
    cout << "|    --|     |--" << endl;

    cout<<"Game Over! Goodbye!"<<endl;
}
