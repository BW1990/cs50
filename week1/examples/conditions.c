#include <cs50.h>
#include <stdio.h>

int main(void) {
  int i = 10;
  if (i > 10) {
    printf("Greater");
  } else if (i < 10) {
    printf("Lower");
  } else {
    printf("Equals");
  }
}
