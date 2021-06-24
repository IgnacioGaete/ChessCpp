#include "Piece.hpp"

Piece::Piece(){}

Piece::~Piece(){}

void Piece::setName(string name){this->name=name;}

void Piece::setColor(int color){this->color=color;}

string Piece::getName(){return this->name;}

string Piece::getColor(){return (this->color==this->WHITE) ? "W" : (this->color==this->BLACK) ? "B" : "*";}

