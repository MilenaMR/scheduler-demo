#include <stdio.h>

int main() {
  int a[5];
  int n;
  int x=0;
  
  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for (int i=0; i<n; ) {
    /* Imprime resultado da n-esima iteracao do scheduler */
    i++;
    if( i % a[0] == 0){
       printf ("0");
       x=1;
       }

    if( i % a[1] == 0){
        printf ("1");
	x=1;
	}

    if( i % a[2] == 0){
        printf ("2");
	x=1;
	}

    if( i % a[3] == 0){
        printf ("3");
	x=1;
	}	

    if( i % a[4] == 0){
        printf ("4");
	x=1;
	}  
    
    if(x == 0){
       printf("-");
       }
   

     printf("\n");
   
     x=0;
  }
  

  return 0;
}
