#ifndef PAWN_HPP
#define PAWN_HPP

#include "Piece.hpp"

class Pawn: public Piece{
	private:
		int value;
	public:
		Pawn();
		~Pawn();
		void setValue(int);
		int getValue();
};

#endif
