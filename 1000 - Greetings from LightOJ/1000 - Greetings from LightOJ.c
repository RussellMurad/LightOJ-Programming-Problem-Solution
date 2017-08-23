#include <stdio.h>

int main(){

    int T , A , B , t;

    scanf("%d" , &T);

    for(t = 1 ; t <= T ; t++){

        scanf("%d %d" , &A , &B);
        printf("Case %d: %d\n" , t , A + B );


    }


    return 0;

}
