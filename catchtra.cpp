#include<iostream>
#include<algorithm>

using namespace std;


int main(){

	int c;
	cin>>c;
	while(c--){
		double ve,vy,l,t;
		cin>>ve>>vy>>l>>t;
		double a = l/ve;
		double b = l/(ve+vy);
		double c = a-b;
		if(c<=t) cout<<c/t<<endl;
		else cout<<1.0<<endl;
	}
	return 0;
}
