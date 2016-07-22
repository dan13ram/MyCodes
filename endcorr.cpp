#include<iostream>
#include<fstream>
using namespace std;
/*void swap(int &a,int &b)
{
     int t=a;
     a=b;
     b=t;
}*/
     
int main(void)
{
    int n,k,i,j,tmp;
    ifstream fin("input.txt");
    fin>>n;
    int *a = new int[n];
    for(i=0;i<n;++i)fin>>a[i];
    for(i=0;i<n;++i)cout<<a[i]<<' ';
    cout<<endl;
    
    
    for(i=1;i<n;++i)
    {
    tmp=a[i];
    k=i;
    for(j=i-1;j>=0;--j)if(tmp>a[j])break;
    while(k>j){a[k]=a[k-1];--k;}
    a[j+1]=tmp;
    cout<<"Iteration no. : "<<i;
    for(k=0;k<n;++k)cout<<"    "<<a[k]<<' ';
    cout<<endl;
    }
   
   
    for(i=0;i<n;++i)cout<<a[i]<<' ';
    cin.get();
    
    
}
