#include <stdio.h>

int main(){

    /*freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/

    int T,N,M,i,j,Arr[1000],X,Mid,Last,Temp,S1,S2,Case=0;
    char str[2];

    scanf("%d",&T);

    while(T--)
    {
        Case++;
        scanf("%d%d",&N,&M);
        Mid=N/2;
        Last=N-1;


        for(i=0; i<N; i++)
        {
            scanf("%d",&Arr[i]);

        }

        while(M--)
        {
            scanf("%s",str);

            if(str[0] == 'S')
            {
                scanf("%d",&X);
                for(i=0; i<N; i++)
                {
                    Arr[i]=Arr[i]+X;
                }
            }

            else if(str[0] == 'M')
            {
                scanf("%d",&X);
                for(i=0; i<N; i++)
                {
                    Arr[i]=Arr[i]*X;
                }
            }

            else if(str[0] == 'D')
            {
                scanf("%d",&X);
                for(i=0; i<N; i++)
                {
                    Arr[i]=Arr[i]/X;
                }
            }

            else if(str[0] == 'R')
            {
                j = N-1;
                i = 0;

                while(i<j)
                {
                   if(i<Mid)
                    {
                        Temp = Arr[i];
                        Arr[i] = Arr[j];
                        Arr[j] = Temp;
                        i++;
                        j--;
                    }

                    else
                        break;
                }
            }

            else if(str[0] == 'P')
            {
                scanf("%d%d",&S1,&S2);
                Temp=Arr[S1];
                Arr[S1]=Arr[S2];
                Arr[S2]=Temp;
            }

        }

        printf("Case %d:\n",Case);
        for(i=0; i<N; i++)
        {
            printf("%d",Arr[i]);
            if(i+1 != N)
            {
                printf(" ");
            }
        }
        printf("\n");

    }

    return 0;
}
