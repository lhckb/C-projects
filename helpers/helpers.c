#include <stdio.h>
#include "helpers.h"

#define PORT 8080

void log_stdout(char *message) {
  fprintf(stdout, "%s\n", message);
}