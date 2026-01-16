#include "fen.hpp"

void position_from_fen(Board& board, std::string fen)
{
	const Bitboard mask = 1;
	int square = 63;

	std::unordered_map<char, int> piecemap;

	piecemap['r'];
	piecemap['n'];
	piecemap['b'];
	piecemap['k'];
	piecemap['q'];
	piecemap['p'];
	piecemap['R'];
	piecemap['N'];
	piecemap['B'];
	piecemap['K'];
	piecemap['Q'];
	piecemap['P'];

	for (auto character : fen) {
		if (character == '/')
			continue;
		while (square != -1) {
			mask = 1;
			if (std::isdigit(character)) {
				square -= (int)(character - '0');
				continu;
			}

		}

	}
}
