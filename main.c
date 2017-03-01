#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"

int main() {

  screen s;
  struct matrix *edges,*test;
  edges = new_matrix(4, 4);
  test = new_matrix(4,4);
  add_edge(test,1,2,3,4,5,6);
  add_edge(test,25,50,75,100,125,150);

  printf("testing ident\n");
  ident(edges);
  print_matrix(edges);

  printf("testing scalar multiplication\n");
  scalar_mult(3,edges);
  print_matrix(edges);

  printf("test matrix\n");
  print_matrix(test);
  
  printf("testing matrix multiplication\n");
  matrix_mult(test,edges);
  print_matrix(edges);
  
  free_matrix( edges );
}  
