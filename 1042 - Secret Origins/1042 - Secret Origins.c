#include <stdio.h>

int main()
{
    int T,N,i=0,j=0,z=0,a,Backup,flag=0,Value=0,sum=0,count=0,choice=0,wish=0,t,FU=0,C,Case=1,Final_value,Backup_value,Starting_value,Ending_value,zero,V;
    char A[99][99],B[99][99];

    scanf("%d",&T);
    for(t=1; t<=T; t++)
    {
        Value=0,count=0,choice=0,sum=0,z=0,FU=0,j=0,C=0,Final_value=0,Starting_value=0,Ending_value=0,zero=0,V=0,C=0;
        scanf("%d",&N);
        Backup = N;
        while(N != 0)
        {
            if(N%2 == 0)
            {
                A[i][j] = '0';
                j++;
            }
            else if(N%2 == 1)
            {
                A[i][j] = '1';
                j++;
            }

            N = N/2;
        }

        for(j; j >= 0; j--)
        {
            B[i][z] = A[i][j-1];
            z++;
        }
        Value = z-2;
        Backup_value = Value;

        if(B[i][Value] == '1')
        {

            while(Value != 0)
            {
                if(B[i][Value] != '1')
                {
                    choice = Value;
                    wish = count;
                    B[i][choice] = '1';
                    B[i][wish] = '0';

                    for(j=z-2; j>=0; j--)
                    {
                        if(B[i][j] == '1')
                        {
                            sum = sum + 1 * (pow(2,FU++));
                        }

                        else
                        {
                            sum = sum + 0 * (pow(2,FU++));
                        }
                    }

                    printf("Case %d: %d\n",Case++,sum);
                    break;

                    Value--;
                }

                else
                {
                    count = Value;
                    C++;
                    Value--;
                }

            }

            if((C) == (z-2))
            {
                B[i][z-1] = '1';
                B[i][1] = '0';

                for(j=z-1; j>=0; j--)
                    {
                        if(B[i][j] == '1')
                        {
                            sum = sum + 1 * (pow(2,FU++));
                        }

                        else
                        {
                            sum = sum + 0 * (pow(2,FU++));
                        }
                    }

                    printf("Case %d: %d\n",Case++,sum);
            }
        }

        else
        {

            if(B[i][Value] == '0')
            {
                while(Value>=1)
                {
                    if(B[i][Value] == '1')
                    {
                        Starting_value = Value;
                        while(B[i][Value] == '1')
                        {
                            count++;
                            Value--;
                        }

                        if((count-1) == Starting_value)
                        {
                            C = count-1;
                            V = Backup_value+1;
                            B[i][V] = '0';
                            B[i][V+1] = '\0';

                            while(V>0)
                            {
                                if(C>0)
                                {
                                    B[i][V] = '1';
                                    C--;
                                }

                                else
                                {
                                    B[i][V] = '0';
                                }

                                V--;
                            }

                            for(j=z-1; j>=0; j--)
                            {

                                if(B[i][j] == '1')
                                {
                                    sum = sum + 1 * (pow(2,FU++));
                                }

                                else
                                {
                                    sum = sum + 0 * (pow(2,FU++));
                                }
                            }

                            printf("Case %d: %d\n",Case++,sum);
                            goto end;
                        }

                        Ending_value = Value;
                        goto jump;
                    }


                    else
                    {
                        zero++;
                        if(Backup_value == zero)
                        {
                            printf("Case %d: %d\n",Case++,Backup*2);
                            goto end;
                        }
                    }
                    Value--;
                }

                jump:

                B[i][Ending_value+1] = '0';
                B[i][Ending_value] = '1';
                Final_value = count-1;

                if(Final_value > 0)
                {
                    B[i][Ending_value] = '1';

                    while(Starting_value > Ending_value)
                    {
                        B[i][Starting_value] = '0';
                        Starting_value--;
                    }

                    while(Final_value--)
                    {
                        B[i][Backup_value] = '1';
                        Backup_value--;
                    }

                }
                for(j=z-2; j>=0; j--)
                {
                    if(B[i][j] == '1')
                    {
                        sum = sum + 1 * (pow(2,FU++));
                    }

                    else
                    {
                        sum = sum + 0 * (pow(2,FU++));
                    }
                }

                printf("Case %d: %d\n",Case++,sum);
            }

        }

        end: ;
    }
    return 0;
}
