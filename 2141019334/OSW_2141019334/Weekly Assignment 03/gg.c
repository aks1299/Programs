#include <stdio.h>

// A function that returns the batting average given the number of hits and at-bats
double batting_average(int hits, int at_bats) {
  if (at_bats == 0) {
    return 0.0; // avoid division by zero
  }
  return (double)hits / at_bats; // cast to double to get a decimal result
}

// A function that reads the input file and prints the output
void process_file(char *filename) {
  FILE *fp = fopen("sample.txt", "r"); // open the file in read mode
  if (fp == NULL) {
    printf("Error: could not open file %s\n", filename);
    return;
  }

  int player_number; // the current player number
  char record; // the current record character
  int hits, at_bats; // the number of hits and at-bats for the current player
  double average; // the batting average for the current player

  // loop through the file until the end
  while (!feof(fp)) {
    // read the player number
    fscanf(fp, "%d", &player_number);

    // initialize the hits and at-bats to zero
    hits = 0;
    at_bats = 0;

    // loop through the record characters until the newline
    while ((record = fgetc(fp)) != '\n') {
      // update the hits and at-bats based on the record
    //   switch (record) {
    //     case 'H': // hit
    //       hits++;
    //       at_bats++;
    //       break;
    //     case 'O': // out
    //       at_bats++;
    //       break;
    //     case 'W': // walk
    //       break;
    //     case 'S': // sacrifice
    //       break;
    //     case 'P': // hit by pitch
    //       break;
    //     default: // invalid character
    //       printf("Error: invalid record character %c\n", record);
    //       return;
    //   }
        printf("%c",record);
    }

    // calculate the batting average
    average = batting_average(hits, at_bats);

    // print the output
    printf("Player %d: %d hits, %d at-bats, %.3f average\n", player_number, hits, at_bats, average);
  }

  // close the file
  fclose(fp);
}

// The main function
int main() {
  // call the process_file function with the input file name
  process_file("input.txt");

  return 0;
}
