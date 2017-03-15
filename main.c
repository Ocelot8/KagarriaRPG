#include "sources.h"
#include "locations.h"

int main(){
  // initscr();
  // signal (SIGWINCH, NULL);
  // displayStats(getPC());
  // endwin();

  struct map game_map;
  game_map = mapGenerate();
  printf("Town name: %s\n", game_map.all[0]->name);
  printf("%s\n", game_map.all[0]->description);

  exit(0);
}
