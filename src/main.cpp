#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

#include "Board.hpp"

#define START   0
#define EXIT   -1
#define REFRESH 1

int state = START;
Board board;

void welcome(){
	system("clear");
	cout << "Welcome to ChessGameCpp! Press INTRO to continue...";
	getchar();
}

void setup(){
	welcome();
}

int draw(){
	system("clear");
	board.show();
	cout << "\nType \"q\" to quit or INTRO to refresh screen: ";
	char input = getchar();
	return (input=='q' or input=='Q') ? EXIT : REFRESH;
}

void goodbye(){
	cout << "Bye!" << endl;
}

int main(int argc,char** argv){
	setup();
	while(state!=EXIT){
		state = draw();
		cout << endl;
	}
	goodbye();
	return 0;
}
