#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ncurses.h>
#include <signal.h>

struct map mapGenerate();

 struct location{
  char name[20];
  char description[200];
  char north[20];
  char south[20];
  char east[20];
  char west[20];
};

struct map{
  struct location **all;
};
