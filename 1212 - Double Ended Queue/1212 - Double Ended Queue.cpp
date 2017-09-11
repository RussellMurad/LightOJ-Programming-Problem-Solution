#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    int T,flag=0;
    cin >> T;
    deque <int> Dequeue;

    while(T--)
    {
        int N,M,Number,Count=0;
        cin >> N >> M;
        string S;
        string A = "pushLeft", B = "pushRight", C = "popLeft", D = "popRight";
        cout << "Case " << ++flag << ":" << endl;


        while(M--)
        {
            cin >> S;
            if(A == S)
            {
                cin >> Number;
                if(Count < N)
                {
                    Dequeue.push_front(Number);
                    cout << "Pushed in left: " << Number << endl;
                    Count++;
                }

                else
                    cout << "The queue is full" << endl;

            }

            else if(B == S)
            {
                cin >> Number;
                if(Count < N)
                {
                    Dequeue.push_back(Number);
                    cout << "Pushed in right: " << Number << endl;
                    Count++;
                }

                else
                    cout << "The queue is full" << endl;
            }

            else if(C == S)
            {
                if(Count > 0)
                {
                    cout << "Popped from left: " << Dequeue.front() << endl;
                    Dequeue.pop_front();
                    Count--;
                }

                else
                    cout << "The queue is empty" << endl;

            }

            else if(D == S)
            {
                if(Count > 0)
                {
                    cout << "Popped from right: " << Dequeue.back() << endl;
                    Dequeue.pop_back();
                    Count--;
                }

                else
                    cout << "The queue is empty" << endl;

            }

            if(M == 0)
            {
                Dequeue.clear();
                Count=0;
            }

        }
    }


    return 0;
}
