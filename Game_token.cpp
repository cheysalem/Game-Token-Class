#include "Game_token_base.h"
#include "Game_token.h"

namespace Grid_game
{

  // make function
  void Token::move(direction dir)
  {
    // up
    if (dir == 0)
    {
      //  y -= 1;
      // is it valid?
      if (y == 0 || y == board.height())
      {
        y -= 1;
      }
      else
      {
        // stay do not move
        //  apply_terrain_effect(board.retrieve_space(x, y).type());
        return;
      }
    }
    // right
    else if (dir == 1)
    {
      // x += 1;
      if (x == 0 || x == board.width())
      {
        x += 1;
      }
      else
      {
        return;
      }
    }
    // down
    else if (dir == 2)
    {
      if(y == 0 || y == board.height()){
        y += 1;
      }
      else{
        return;
      }
    }
    // left
    else if (dir == 3)
    {
      if (x == 0 || x == board.width())
      {
        x -= 1;
      }
      else
      {
        return;
      }
    }
    // else{
    //   cout << "Invalid movement" << "\n";
    // }
  }

}
