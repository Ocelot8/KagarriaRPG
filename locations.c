#include "locations.h"

struct map mapGenerate(){
  struct map game_map;
  game_map.all = (struct location **)malloc(sizeof(struct location)*10);

  struct location *town1 = malloc(sizeof(struct location));
  strcpy(town1->name, "Town1");
  strcpy(town1->description, "This is the starting town");
  strcpy(town1->north, "Forest Path");
  //
  struct location *forest_path = malloc(sizeof(struct location));
  strcpy(forest_path->name, "Forest Path");
  strcpy(forest_path->description, "An old path through the forest");
  strcpy(forest_path->south, "Town1");


  game_map.all[0] = town1;
  game_map.all[1] = forest_path;

  return game_map;
}
