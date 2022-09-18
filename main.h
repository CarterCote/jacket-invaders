#ifndef MAIN_H
#define MAIN_H

#include "gba.h"

// TODO: Create any necessary structs
struct player {
    int row;
    int col;
    int height;
    int width;
    int timer;
};

struct alien {
    int row;
    int col;
    int height;
    int width;
    int rd; 
    int cd;
};

enum gba_state {
  START,
  START_BUFFER,
  INITPLAY,
  PLAY,
  WIN,
  LOSE,
};

struct state {
    enum gba_state gba_state;
};

/*
* For example, for a Snake game, one could be:
*
* struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* };
*
* Example of a struct to hold state machine data:
*
* struct state {
*   int currentState;
*   int nextState;
* };
*
*/

#endif
