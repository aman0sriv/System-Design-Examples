#include "Snakes.hpp"
#include "Ladders.hpp"
#include "Moves.hpp"
#include "Dice.hpp"
#include <bits/stdc++.h>
using namespace std;
class Game{
 public:
    Game(const int& players,const int& limit,const int& no_of_dice,const vector<string> &names, const Snakes& snakes,const Ladders &ladders) {
      players_positon_.assign(players,0);
      if(players==0)end_ = true;
      else end_ = false;
      players_ = players;
      names_ = names;no_of_dice_ = no_of_dice;
      moves_ = Moves(100,limit,snakes,ladders);
      dice_ = Dice(no_of_dice);
    }
    void run(){
      int id=0;
      while(!end_){
        int dice_move = dice_.roll();
        int new_pos = moves_.get_pos(players_positon_[id],dice_move);
        display_pos(id,dice_move,new_pos);
        if(new_pos==100){
          end_ = true;
          winner(id);return;
        }
        players_positon_[id] = new_pos;
        id++;id %= players_;
      }
    }
    void winner(const int &id){
      cout<<names_[id]<<" wins the game"<<endl;
    }
    void display_pos(const int& id,const int& dice_move,const int& new_pos){
      cout<<names_[id]<<" rolled a "<<dice_move<<" and moved from "<<players_positon_[id]<<" to "<<new_pos<<endl;
    }
 private:
    int players_,no_of_dice_;
    vector<int> players_positon_;
    bool end_;vector<string> names_;
    Moves moves_;Dice dice_;
};
int main(){
  unordered_map<int,int> snakes,ladders;
  int n;cin>>n;
  while(n--){
    int a,b;
    cin>>a>>b;
    snakes[a]=b;
  }
  cin>>n;
  while(n--){
    int a,b;
    cin>>a>>b;
    ladders[a]=b;
  }
  cin>>n;
  vector<string> names(n);
  for(int i=0;i<n;i++)cin>>names[i];
  // for(int i = 0;i<n;i++)cout<<names[i] <<" "<<endl;
  Game game(n,6,1,names,move(Snakes(snakes)),move(Ladders(ladders)));
  game.run();
  return 0;
}