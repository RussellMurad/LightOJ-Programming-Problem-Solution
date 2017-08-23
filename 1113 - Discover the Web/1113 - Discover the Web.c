#include <stdio.h>
#include <string.h>

int main()
{
    char str[11000][110], cmd[11000][10];
    int T,i=0,j=0,Big=0,x=1;

    strcpy(str[0], "http://www.lightoj.com/");

    scanf("%d",&T);

    for(x; x<=T; x++)
    {
        i=0;
        Big=0;
        str[110][100] = 0;
        printf("Case %d:\n",x);
        while(i >= 0)
        {
            scanf("%s",cmd[j]);

            if(cmd[j][0] == 'V' && cmd[j][1] == 'I' && cmd[j][2] == 'S' && cmd[j][3] == 'I' && cmd[j][4] == 'T')
            {
                i++;
                if(i > Big)
                {
                    Big = i;
                }
                scanf("%s",str[i]);
                printf("%s\n",str[i]);
                j++;
                str[i+1][0] = '0';
            }

            else if(cmd[j][0] == 'B' && cmd[j][1] == 'A' && cmd[j][2] == 'C' && cmd[j][3] == 'K')
            {
                if(i-1 < 0)
                {
                    printf("Ignored\n");
                    j++;
                }

                else
                {
                    i--;
                    printf("%s\n",str[i]);
                    j++;
                }
            }

            else if(cmd[j][0] == 'F' && cmd[j][1] == 'O' && cmd[j][2] == 'R' && cmd[j][3] == 'W'  && cmd[j][4] == 'A'  && cmd[j][5] == 'R' && cmd[j][6] == 'D')
            {
                if(Big == i)
                {
                    printf("Ignored\n");
                    j++;
                }

                else if(str[i+1][0] == '0')
                {
                    printf("Ignored\n");
                    j++;
                }

                else
                {
                    i++;
                    printf("%s\n",str[i]);
                    j++;
                }
            }

            else if(cmd[j][0] == 'Q' && cmd[j][1] == 'U' && cmd[j][2] == 'I' && cmd[j][3] == 'T')
            {
                j++;
                break;
            }

        }

    }

    return 0;

}
