// CppMCTSExp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "board.h"
#include "search.h"
#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>


int main()
{
	std::cout << "START" << std::endl;
	Board b(13);
	b.playMove(9, 9);
	b.playMove(8, 9);
	b.playMove(9, 8);
	b.playMove(8, 8);
	b.playMove(9, 7);
	b.print();
	search(b, 1); search(b, 1); search(b, 1); search(b, 1); search(b, 1); search(b, 1); search(b, 1);
	int a;
	std::cin >> a;
}
