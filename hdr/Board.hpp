#ifndef BOARD_HPP
#define BOARD_HPP

#include <iostream>
#include "Square.hpp"

using namespace std;

class Board{
	private:
		Square grid[8][8];
		int scoreW,scoreB;
	public:
		Board();
		~Board();
		void show();
};
#endif
