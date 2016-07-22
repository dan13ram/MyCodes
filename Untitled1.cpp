#include<iostream>
#include<fstream>
using namespace std;
int main(void)
{
    ifstream fin;
    fin.open("input.txt");
    int n,tmp,j;
    fin>>n;
    int *a = new int[n];
    for(int i=0;i<n;++i)fin>>a[i];
    for(int i=0;i<n;++i)cout<<a[i]<<' ';
    cout<<endl;
    for(int i=1;i<n;++i)
    {
            j=i-1;
            tmp = a[i];
            while(1)
            {
                      if(a[i]<a[j])
                      a[j+1]=a[j];
                      else break;
                      --j;                                          
            }
            a[j]=tmp;
    }
    for(int i=0;i<n;++i)cout<<a[i]<<' ';*/
    cin.get();
    return 0;
}
