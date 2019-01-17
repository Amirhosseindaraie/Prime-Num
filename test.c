/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

FILE *ptf=fopen("list.txt","w");

int is_prime(long int i)
{
    int flag = 1;
    int ii;
    for(ii=2;ii<=sqrt(i);ii++)
    {
        if(i%ii==0)
        {
            flag=0;
        }
    }
    return flag;
}

int from1to(int n)
{
    int cnt=0,i;
    for(i=2;i<n;i++)
    {
        if(is_prime(i)==1)
        {
            //printf("%d-",i);
            fprintf(ptf,"%d\n",i);
            cnt++;
        }
    }
    return (cnt);
}

int Drom1to(int n)
{
    int cnt=0,i;
    for(i=2;i<n;i++)
    {
        if(is_prime(i)==1)
        {
            //printf("%d-",i);
            cnt++;
        }
    }
    return log(cnt);
}

int main()
{
    printf("%d-%d\n",from1to(100),      Drom1to(100));
    //printf("%d-%d\n",from1to(1000),     Drom1to(1000));
    //printf("%d-%d\n",from1to(10000),    Drom1to(10000));
    //printf("%d-%d\n",from1to(100000),   Drom1to(100000));
    //printf("%d-%d\n",from1to(1000000),  Drom1to(1000000));
    //printf("%d-%d\n",from1to(10000000), Drom1to(10000000));
    //printf("%d-%d\n",from1to(100000000),Drom1to(100000000));

    return 0;
}
