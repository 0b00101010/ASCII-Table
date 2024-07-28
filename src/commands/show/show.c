#include "show.h"

void show(char** args) {
  printf("ASCII Table\n\n");

  printf("--------------------\n");

  printf("ASCII Code Table\n");
  printf("-------------------------------\n");
  printf("| Dec | Hex | Char |\n");
  printf("-------------------------------\n");

  for (int i = 0; i < 43; i++) {
    for (int j = 0; j < 3; j++) {
      int code = i + j * 43;
      if (code < 128) {
        if (code < 32 || code == 127) {
          printf("| %3d | %3X | %4s ", code, code, " ");
        } else {
          printf("| %3d | %3X | %4c ", code, code, (char)code);
        }
      } else {
        printf("|     |     |      ");
      }
    }
    printf("|\n");
  }

  printf("--------------------\n");
}
