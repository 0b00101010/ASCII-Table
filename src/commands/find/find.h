#ifndef FIND_H

#define FIND_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../help/help.h"

#define FIND_OPTION_INVALID 0x00
#define FIND_OPTION_NULL 0xFF
#define FIND_BY_DECIMAL 0x01
#define FIND_BY_HEX 0x02
#define FIND_BY_CHARACTER 0x03
void find(char**);

#endif
