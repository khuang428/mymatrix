#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"

int main() {

  screen s;
  struct matrix *edges;
  edges = new_matrix(4, 4);

  printf("testing ident\n");
  ident(edges);
  print_matrix(edges);

  printf("testing scalar multiplication\n");
  scalar_mult(3,edges);
  print_matrix(edges);
  

  free_matrix( edges );
}  
