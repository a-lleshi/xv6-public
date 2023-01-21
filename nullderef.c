#include "types.h"
#include "user.h"

int *zeroptr;

int
main(int argc, char *argv[])
{
  printf(1, "About to read from address 0...\n");
  printf(1, "Got: %d\n", *zeroptr);
  exit();
}
