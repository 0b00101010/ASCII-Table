#ifndef COMMAND_H
#define COMMAND_H

#include "find/find.h"
#include "help/help.h"
#include "show/show.h"

struct command {
  char *name;
  void (*function)(char **);
  char short_form;
};

#endif
