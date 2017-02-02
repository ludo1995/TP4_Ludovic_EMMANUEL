#include<stdlib.h>
#include <stdio.h>
int main(void)
{
  int i,size,sum;
  //int *p= malloc(size*sizeof(int)); il faut inserer cette ligne apres le scanf car sie n'est pas initialise.
  
  printf("Entrez un nombre\n");
  scanf("%d",&size);

  int *p= malloc(size*sizeof(int));
  
  for(i = 0 ; i< size ; i++)
    p[i] = i ;
  
  for(i = 0 ; i< size ; i++)
     sum += p[i]; //il faut placer cette ligne avant free(p) car on utilise p.
     
  free(p); 
  return EXIT_SUCCESS;     
}
