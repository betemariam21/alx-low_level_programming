#include "main.h"
#include <stdio.h>
void times_table(){
  int count;
  int be;

  for(be=0;be<=9;be++ ){

    for(count=0;count<=9;count++)
      {
	int result = be*count;
	printf("%2d",result);
	if(count<9)
	  {
	    printf(", ");
	  }
      }
    if(be<9){
      printf("\n");
    }
  }

}

