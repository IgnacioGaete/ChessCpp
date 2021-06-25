#ifndef PIECE_HPP
#define PIECE_HPP

#include <string>

using namespace std;

class Piece{
	private:
		string name;
		int color;
	public:
		static const int NONE = -1;
		static const int WHITE = 0;
		static const int BLACK = 1;
		Piece();
		~Piece();
		void setName(string);
		void setColor(int);
		string getName();
		string getColor();
};

#endif
