//C Program to Print Pascal’s Pattern Triangle Pyramid 
#include <stdio.h>
int main() {
  
    int n = 5; 
	int i,j,k;
    for ( i = 0; i < n; i++) {
        
        for (j = 0; j < n - i - 1; j++)
            printf(" ");

        int val = 1;
        for ( k = 0; k <= i; k++) {
            printf("%d ", val);
          
            val = val * (i - k) / (k + 1);  
        }
        printf("\n");
    }

    return 0;
}
