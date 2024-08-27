#pragma once
#include "Snakes.hpp"
#include "Ladders.hpp"
#include <optional>
class Moves {
 public:
  Moves(const int& , const int& , const Snakes& ,const Ladders&);
  Moves(const Moves& m);
  Moves();
  optional<int> get_pos(const int&,const int& );
 private:
  int end_point_, limit_;
  Snakes snakes_; Ladders ladders_;
};