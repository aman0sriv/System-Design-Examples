#pragma once
#include <unordered_map>
#include <optional>
class Jumps{
  public:
    Jumps(const std::unordered_map<int,int>&);
    Jumps(const Jumps&);
    Jumps(){}
    std::optional<int> from(const int&);
  private:
    std::unordered_map<int,int> jumps_;
};