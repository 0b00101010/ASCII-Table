#include "help.h"

#include <stdio.h>

void help(char** args) {
  printf("ASCII Table\n\n");

  printf("Usage: command [arguments]\n\n");

  printf("Commands:\n");

  printf("    show -s  Show all ascii codes\n");
  printf("    find -f  Find ascii code by character\n");
  printf("        -h  find by hex, returns a character\n");
  printf("        -d  find by dec, returns a character\n");
  printf("        -c  find by char, returns a decimal\n");
}
