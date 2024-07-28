#include "command.h"

struct command commands[] = {
    {"help", help, 'h'},
    {"show", show, 's'},
    {"find", find, 'f'},
};

unsigned int commands_count = sizeof(commands) / sizeof(struct command);
