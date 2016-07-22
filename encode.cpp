#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int countones(int a)
{
    int rem,c=0;
    while(a)
    {
        rem = a%2;
        if (rem==1){c++;}
        a/=2;
    }
    return c;
}

int convertodec(int n, int base)
{
    int sum=0;
    for (int i=0; i<n; i++)
    {
        sum+=(1<<(base-i));
    }
    return sum;
}

int main()
{
    int T; scanf("%d",&T);
    int onesina, onesinb, totones, bits;
    while(T--)
    {
        int n,a,b;
        scanf("%d %d %d",&n,&a,&b);
        onesina = countone(a);
        onesinb = countone(b);
        totones = onesina+onesinb;
        if (totones<=n){bits=totones;}
        if (totones>n){bits = max(onesina, onesinbin);}
        int ans = converttodec(bits, n);
        printf("%d\n",ans);
    }
    return 0;
}
