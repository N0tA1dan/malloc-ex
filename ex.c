#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char memal(char t[]){

  char * t2;

  t2 = malloc(strlen(t));

  t2 = t;

  printf("%s",t2);

  
  return '0';
  
}

int main(void) {
  memal("Hello world");
  return 0;
}
