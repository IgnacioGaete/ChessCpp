#include "Board.hpp"

Board::Board():scoreW(0),scoreB(0){
	int squareColor;
	int pieceColor;
	string pieceName;
	for(int y=0;y<8;y++){
	pieceColor = (y==0 or y==1) ? Piece::WHITE : (y==6 or y==7) ? Piece::BLACK : Piece::NONE;
		for(int x=0;x<8;x++){
			squareColor = ((x+y)%2==0) ? Square::WHITE : Square::BLACK;
			if(y==0 or y==7)
				switch(x){
					case 0:
						pieceName = "Rook";
						break;
					case 1:
						pieceName = "Knight";
						break;
					case 2:
						pieceName = "Bishop";
						break;
					case 3:
						pieceName = (y==0) ? "Queen" : "King" ;
						break;
					case 4:
						pieceName = (y==0) ? "King" : "Queen" ;
						break;
					case 5:
						pieceName = "Bishop";
						break;
					case 6:
						pieceName = "Knight";
						break;
					case 7:
						pieceName = "Rook";
						break;
				}
			else
				pieceName = (y==1 or y==6) ? "Pawn" : "*";
			this->grid[x][y].setPiece(pieceName,pieceColor);
			this->grid[x][y].setColor(squareColor);
		}
	}
}

Board::~Board(){}

void Board::show(){
	cout << "Board showing..." << endl;
	for(int y=0;y<8;y++){
		for(int x=0;x<8;x++){
			cout << this->grid[x][7-y].getPieceName() << '\t';
		}
		cout << endl;
	}
	cout << endl << "Scores:" << endl;
	cout << "Whites = " << this->scoreW << endl;
	cout << "Blacks = " << this->scoreB << endl;
}
