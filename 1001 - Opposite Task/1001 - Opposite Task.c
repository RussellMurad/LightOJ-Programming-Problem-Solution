#include <stdio.h>

int main(){

    int T , n , t;

    scanf("%d",&T);

    for(t=0 ; t<T ; t++){

        scanf("%d",&n);
        if(n <= 10){

            printf("%d %d\n" , 0 , n);

        }

        else{

            printf("%d %d\n" , n-10 , 10);

        }

    }

    return 0;

}
