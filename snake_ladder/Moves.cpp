#include "Moves.hpp"
#include "Snakes.hpp"
#include "Ladders.hpp"
using namespace std;
Moves::Moves(const int& end_point, const int& limit, const Snakes& snakes,const Ladders& ladders){
  end_point_ = end_point; limit_ = limit; snakes_ = snakes ; ladders_ = ladders; 
}
Moves::Moves(const Moves& m){}
Moves::Moves(){}
int Moves::get_pos(const int& curr_pos,const int& dice_roll){
  if(curr_pos + dice_roll <= end_point_){
    int new_pos = curr_pos + dice_roll;
    optional<int> snakes_pos = snakes_.from(new_pos); 
    if(snakes_pos) return *snakes_pos;
    optional<int> ladders_pos = ladders_.from(new_pos); 
    if(ladders_pos) return *ladders_pos;
    return new_pos;
  }
  return curr_pos;
}