#pragma once
#include <string>
#include <cctype>
#include <unordered_map>
#include "types.hpp"
#include "board.hpp"

void position_from_fen(Board& board, std::string fen);