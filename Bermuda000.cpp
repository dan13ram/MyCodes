#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
#include<stdio.h>
#include<string>

using namespace std;
/*
xor

0 0 0
1 0 1
0 1 1
1 1 0

So to maximise the sum..
we must minimise occurence of the same bit at the same position.
if n is no. of bits.
and a1 and b1 no. of 1's in a and b.
if a1 <= n - b1 then ans is (a1 + b1) 1's follow by n - a1 - b1 zeros.
if a1 > n - b1 then let x = max(a1,b1) and y be min.
    then n - x < y
    so we have ans. (n-y) 1's then (n-x) 1's and the rest zeroes
*/
int numOnes(int num)
{
    int sum = 0;
    while(num>0)
    {
        sum += num%2;
        num /= 2;
    }
    return sum;
}
int main()
{
    int T,N,A,B;
    int tempN;
    int a1,b1,x,y;
    int XOR;
    int num1;
    cin>>T;
    while(T--)
    {
        XOR=0;
        cin>>N>>A>>B;
        a1 = numOnes(A);
        b1 = numOnes(B);
        tempN=N;
        x = max(a1,b1);
        y = min(a1,b1);
        if(a1 <= N-b1 || b1 <= N-a1) num1 = a1 + b1; //num1 is the number of ones in answer
        else if(a1 > N-b1 || b1 > N-a1) num1 = 2*N - x - y;
      do
        {
            XOR += pow(2,N--);
        } while ((num1--) && num1>0);

        cout<<XOR/2<<endl;
    }

    return 0;
}
