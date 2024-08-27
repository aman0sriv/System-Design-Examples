#include "Jumps.hpp"
#include <unordered_map>
#include <optional>
using namespace std;

Jumps::Jumps(const unordered_map<int,int> & jumps){
  jumps_=jumps;
}

Jumps::Jumps(const Jumps& other){}

optional<int> Jumps::from(const int& point){
  if(jumps_.find(point)!=jumps_.end()){
    return  jumps_[point];
  }
  return nullopt;
}