#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int i;

  // Print the name of the program
  printf("%s starting...\n\n", argv[0]);

  //
  // Print arguments
  //
  // Command line arguments
  if (argc > 1) {
    printf("%d arguments where passed.\n", argc-1);

    // Skipping first entry, containg program name...
    for (i = 1; i < argc; i++) {
      printf(" Argument No. %d: %s\n", i+1, argv[i]);
    }
  // No arguments
  } else {
    printf("No arguments provided.\n");
  }

  return EXIT_SUCCESS;
}
