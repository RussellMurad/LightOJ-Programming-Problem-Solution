#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Arr[99999],X,N,Count=1;
    long long int Result;

    scanf("%d",&X);
    while(X--)
    {
        scanf("%d%d%d%d%d%d%d",&Arr[0],&Arr[1],&Arr[2],&Arr[3],&Arr[4],&Arr[5],&N);
        if(N>5)
        {
            for(int i=6; i<= N-1; i++)
            {
                Arr[i] = Arr[i-1]%10000007 + Arr[i-2]%10000007 + Arr[i-3]%10000007 + Arr[i-4]%10000007 + Arr[i-5]%10000007 + Arr[i-6]%10000007;
                Arr[i] = Arr[i]%10000007;
            }
            Result = Arr[N-1] + Arr[N-2] + Arr[N-3] + Arr[N-4] + Arr[N-5] + Arr[N-6];
            printf("Case %d: %lld\n",Count++,Result%10000007);
        }

        else {
                printf("Case %d: %d\n",Count++,Arr[N]%10000007);
            }
    }
    return 0;
}
