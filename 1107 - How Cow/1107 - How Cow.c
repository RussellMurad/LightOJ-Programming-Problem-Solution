#include <stdio.h>

int main(){
    int a,b,c,d,e,T;
    int I[4];
    scanf("%d",&a);
    for(b=0;b<a;b++){
       scanf("%d%d%d%d",&I[0],&I[1],&I[2],&I[3]);
       scanf("%d",&T);
       printf("Case %d:\n",b+1);
       for(c=0;c<T;c++){
           scanf("%d%d",&d,&e);
           if((d<I[0] || d>I[2])||(e<I[1] || e>I[3])){
                printf("No\n");
           }
           else{
               printf("Yes\n");
           }
       }
    }
    return 0;
}
