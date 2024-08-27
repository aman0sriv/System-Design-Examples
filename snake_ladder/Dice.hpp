#pragma once
class Dice{
 public:
  Dice();
  Dice(const int&);
  Dice(const int&,const int&);
  int roll();
 private:
  int no_of_dice_,no_of_sides_;
};