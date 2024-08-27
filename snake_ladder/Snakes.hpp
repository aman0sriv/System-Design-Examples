#pragma once
#include "Jumps.hpp"
#include <unordered_map>
using namespace std;
class Snakes : public Jumps {
  public:
    Snakes(const std::unordered_map<int,int> & snakes) : Jumps(snakes) {}
    Snakes(){}
};