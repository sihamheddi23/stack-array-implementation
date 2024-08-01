#include "array_i.h"
#include <string.h>

int main(void) {
  // array implementation
  push(3);
  push(2);
  push(1);
  display();
  pop();
  display();
  char ans = isEmpty()? "yes":"No";
  printf("isEmpty : %s\n",ans);
  printf("top : %d\n", getTop());
  pop();
  pop();
  pop();
  display();
  // linked list implementation

  return 0;
}
