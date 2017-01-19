#include <iostream>
#include "Game.h"
#include <string>


int main()
{
    Game g = Game(true);
    g.displayMess();
   // cout << "Hello world!" << endl;
//    to_string

// TEST FOR THE COLORS
      // std::string default_console = "\033["+std::to_string(0)+"m";
  /*  for (int i = 30; i <= 37; i++)
    {
        std::string color = "\033[0;"+std::to_string(i)+"m";

        std::cout<<color<<"test "<<i<<std::endl;

        color = "\033[1"+std::to_string(i)+"m";

        std::cout<<color<<"test "<<i<<" bold"<<std::endl;
       // std::cout<<default_console<<std::endl;
    }*/

    return 0;
}
