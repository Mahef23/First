#include <stdio.h>
#include <stdlib.h>

int main (){
    int n ,i;
    int tableau[5];
    n=sizeof(tableau)/sizeof(tableau[0]);
    printf("%d",n);
    for(i=0; i<=n ; i++){
        printf("tableau [ %d ]: ",i);
        scanf("%d", &tableau[i]);
    }
    for (i=0 ; i<=n ; i++){
        printf("%d -- ",tableau[i]);
    }
return 0;
}
