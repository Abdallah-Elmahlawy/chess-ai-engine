#pragma once
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include <string>
#include <ctime>
#include <utility>
#include <sstream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <iterator>
using namespace std;
using namespace sf;

enum PieceType {
	queen,
	king,
	knight,
	bishop,
	rook,
	pawn,
	enPassant,
	blank
};

enum PieceColor {
	Black,
	White,
	Blank
};

enum MoveType {
	RegularMove,
	Capture,
	Castling,
	EnPassant,
	Promotion
};
enum GameState {
	WhiteWin,
	BlackWin,
	Draw,
	Stalemate,
	Running
};