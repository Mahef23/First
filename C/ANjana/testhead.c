#include <stdio.h>
#include <stdlib.h>


int main (){
    int n;
    printf("Entrer n= ");
    scanf("%d",&n);
    printf("%d",rec(n));

return 0;
}

int rec (int nbr){
    if (nbr == 0 || nbr ==1){ return 1 ;
    }
    else{
return nbr * rec(nbr-1);
}
}
