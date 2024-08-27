#include "Dice.hpp"
#include <random>
using namespace std;
Dice::Dice() : no_of_dice_(1),no_of_sides_(6){}
Dice::Dice(const int& no_of_dice,const int& sides ) : no_of_dice_(no_of_dice),no_of_sides_(sides){}
Dice::Dice(const int& no_of_dice) : no_of_dice_(no_of_dice),no_of_sides_(6){}
int Dice::roll(){
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<> dis(no_of_dice_, no_of_dice_*no_of_sides_);
  return dis(gen);
}