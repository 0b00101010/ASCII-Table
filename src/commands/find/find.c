#include "find.h"

static int check_option(char *option) {
  if (option == NULL) {
    return FIND_OPTION_NULL;
  }

  if (strcmp(option, "-d") == 0) {
    return FIND_BY_DECIMAL;
  }

  if (strcmp(option, "-h") == 0) {
    return FIND_BY_HEX;
  }

  if (strcmp(option, "-c") == 0) {
    return FIND_BY_CHARACTER;
  }

  return FIND_OPTION_INVALID;
}

static char find_by_decimal(char *value) {
  int decimal = atoi(value);

  if (decimal < 0 || decimal > 127) {
    return '\0';
  }

  char result = (char)decimal;

  return result;
}

static char find_by_hex(char *value) {
  int hex = (int)strtol(value, NULL, 16);

  if (hex < 0 || hex > 127) {
    return '\0';
  }

  char result = (char)hex;

  return result;
}

static char find_by_character(char *value) {
  if (strlen(value) != 1) {
    return '\0';
  }

  char result = value[0];

  return result;
}

void find(char **args) {
  char *option = args[2];
  char *value = args[3];

  int option_type = check_option(option);

  if (option_type == FIND_OPTION_NULL) {
    printf("\x1B[31mOption is NULL\x1B[0m\n");
    return;
  }

  if (option_type == FIND_OPTION_INVALID) {
    printf("\x1B[31mInvalid option\x1B[0m\n");
    return;
  }

  printf("Find by ");

  char result;

  switch (option_type) {
    case FIND_BY_DECIMAL: {
      printf("decimal\n");
      result = find_by_decimal(value);
    } break;
    case FIND_BY_HEX: {
      printf("hex\n");
      result = find_by_hex(value);
    } break;
    case FIND_BY_CHARACTER: {
      printf("character\n");
      result = find_by_character(value);
    } break;
  }

  printf("Result: %c\n", result == '\0' ? ' ' : result);
}
