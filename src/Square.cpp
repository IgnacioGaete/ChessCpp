#include "Square.hpp"

Square::Square(){}

Square::~Square(){}

void Square::setPiece(string pieceName,int pieceColor){
	this->p.setName(pieceName);
	this->p.setColor(pieceColor);
}

void Square::setColor(int squareColor){
	this->color=squareColor;
}

string Square::getPieceName(){return this->p.getName();}

string Square::getPieceColor(){return this->p.getColor();}
