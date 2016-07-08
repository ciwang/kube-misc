#include <unistd.h>
#include <stdio.h>
#include <sys/fcntl.h>
#include <stdlib.h>

int main (int argc, char *argv[] )  {
  int fd = open(argv[1], O_RDONLY|O_EXCL);
  if (fd < 0) {
    perror("Busy");
    exit(42);
  }
  return 0;
}
