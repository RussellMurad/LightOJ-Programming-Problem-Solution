#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int T,N,X,Row,Column,Scale,Range,Upper,Even_Upper,Lower,i=1;
//    freopen("input.txt","r",stdin);
//    freopen("Output.txt","w",stdout);
    cin >> T;
    while(T--)
    {
        cin >> N;
        Even_Upper = X = sqrt(N);

        if(N > X*X)
            X++;
        Upper = X*X;

        if(X % 2 == 0)
        {
            Scale = X*X;
            Range = (Scale-X)+1;
            if(N == Range)
            {
                Row = X, Column = X;
                cout << "Case " << i++ << ": " << Row << " " << Column << endl;
            }

            else if(N < Range)
            {
                Row = N-Even_Upper * Even_Upper, Column = X;
                cout << "Case " << i++ << ": " << Row << " " << Column << endl;
            }

            else
            {
                Row = X, Column = (Scale-N)+1;
                cout << "Case " << i++ << ": " << Row << " " << Column << endl;
            }
        }

        else
        {
            Scale = Upper, Range = (Scale-X)+1, Lower=(Range-X)+1;
            if(N == Range)
            {
                Row = X, Column = X;
                cout << "Case " << i++ << ": " << Row << " " << Column << endl;
            }

            else if(N >= Range)
            {
                Row = (Scale-N)+1, Column = X;
                cout << "Case " << i++ << ": " << Row << " " << Column << endl;
            }

            else
            {
                Row = X, Column = (N-Lower)+1;
                cout << "Case " << i++ << ": " << Row << " " << Column << endl;
            }
        }
    }
    return 0;
}
