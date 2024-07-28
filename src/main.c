#include <stdio.h>
#include <string.h>

#include "commands/command.h"

extern struct command commands[];
extern unsigned commands_count;

int main(int argc, char **argv) {
  if (argc < 2) {
    help(argv);
    return 1;
  }

  for (int i = 0; i < commands_count; i++) {
    int found_command = strcmp(argv[1], commands[i].name) == 0;

    if (found_command == 0) {
      if (commands[i].short_form == 0) {
        continue;
      }

      if (argv[1][0] != '-') {
        continue;
      }

      int found_short_form = argv[1][1] == commands[i].short_form;

      if (found_short_form == 0) {
        continue;
      }
    }

    commands[i].function(argv);
    return 0;
  }

  printf("Command not found\n");

  return 1;
}
