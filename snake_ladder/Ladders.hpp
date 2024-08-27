#pragma once
#include "Jumps.hpp"
#include <unordered_map>
using namespace std;
class Ladders : public Jumps {
  public:
    Ladders(const std::unordered_map<int,int> & ladders) : Jumps(ladders) {}
    Ladders(){}
};