#include<iostream>

using namespace std;

int main(){
	int t;
	cin>>t;
	int *arr;
	while(t--){
		int h,n;
		cin>>h>>n;
		if(h<=1)	cout<<n;
		else{
		arr = new int[(1<<h)];
		for(int i=0;i<(1<<h);++i) arr[i] = 0;
		arr[0] = 1;
		arr[1] = 2;
		for(int i=2;i<=h;++i){
			for(int j=(1<<(i-2)),k=(1<<(i-2))-1;j<(1<<(i-1));++j,--k)
				arr[j] = arr[k]+1;
			for(int j=0;j<(1<<(i-2));++j)
				arr[j] += (1<<(i-1)) ;
			arr[(1<<i)-1]=arr[0]*2;
			for(int j=(1<<i)-2,k=1;j>=(1<<(i-1));--j,k++){
				int temp = arr[k] - arr[k-1];
				arr[j]=arr[j+1] + temp;
			}
		}
		cout<<arr[n-1]<<endl;
		delete[] arr;
		}
	}
	return 0;
}



