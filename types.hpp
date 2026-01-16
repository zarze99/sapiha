#pragma once
#include <cstdint>

using Bitboard = uint64_t;
using Bitmask = uint64_t;

enum Pieces {
	whitePawn,
	whiteKnight,
	whiteBishop,
	whiteRook,
	whiteQueen,
	whiteKing,
	blackPawn,
	blackKnight,
	blackBishop,
	blackRook,
	blackQueen,
	blackKing
};