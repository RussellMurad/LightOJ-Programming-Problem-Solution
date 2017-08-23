#include <stdio.h>

int main()
{
    long long int T,N,K,Sum,Donate,i=1;
    char str[2];
    scanf("%lld",&T);

    while(T--)
    {
        Sum = 0;
        Donate = 0;
        scanf("%lld",&N);
        printf("Case %lld:\n",i++);
        while(N--)
        {

            scanf("%s",str);
            if(str[0] == 'd')
            {
                scanf("%lld",&Donate);
                Sum += Donate;
            }

            else if(str[0] == 'r')
            {
                printf("%lld\n",Sum);
            }

        }

    }

    return 0;

}
