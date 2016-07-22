#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	unsigned long sum = 0;
	for ( int i=1; i<1000; ++i ){
		if ( i%3 == 0 || i%5 == 0 ) { 
			sum += i;
		}
	}
	cout<<"sum is "<< sum <<endl;
	return 0;
	
}
