#include "Pawn.hpp"

Pawn::Pawn():value(1){}

Pawn::~Pawn(){}

void Pawn::setValue(int value){this->value=value;}

int Pawn::getValue(){return this->value;}
