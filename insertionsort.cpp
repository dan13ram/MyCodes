#include<iostream>
#include<fstream>
using namespace std;
int main(void)
{
    int *a;
    int n,i,j,t,tmp;
    ifstream fin("input.txt");
    fin>>n;
    a = new int[n];
    for(int i=0;i<10;i++)fin>>a[i];
    for(int i=0;i<10;i++)
    {
                     t=a[i];
                     j=i-1;
                     while(j>=0 && t<a[j])
                     {
                                a[j+1]=a[j];
                                --j;
                     }
                     a[j+1]=t;
    for(int i=0;i<10;i++)cout<<a[i]<<" ";
    cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<10;i++)cout<<a[i]<<" ";
    cin.get();
}
    
    
