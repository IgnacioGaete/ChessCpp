#ifndef SQUARE_HPP
#define SQUARE_HPP

#include <string>
#include "Piece.hpp"

using namespace std;

class Square{
	private:
		Piece p;
		int color;
	public:
		static const int WHITE = 0;
		static const int BLACK = 1;
		Square();
		~Square();
		void setPiece(string,int);
		void setColor(int);
		string getPieceName();
		string getPieceColor();
};

#endif
