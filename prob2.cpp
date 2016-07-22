#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	unsigned long sum = 0, now = 1,	past = 0;
	while ( now <= 4000000 ){
		if(now%2 == 0)sum += now;
		unsigned long temp = now;
		now = now + past;
		past = temp;
	}
	
	cout<<"sum is "<< sum <<endl;
	return 0;
	
}
