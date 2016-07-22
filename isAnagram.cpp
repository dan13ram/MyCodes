#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<string>

using namespace std;
bool isAnagram(string s, string t) {
        int a_s[26]={0},a_t[26]={0};
        int len=s.length();
        if(len!=t.length())
            return false;
        for(int i=0;i<len;++i){
            a_s[int(s[i]) - 97]++;
            a_t[int(t[i]) - 97]++;
        }
        for(int i=0;i<26;++i)
            if(a_s[i]!=a_t[i])
                return false;
        return true;
}

int main(int argc,char *argv[]){
	if(isAnagram(argv[1],argv[2]))
		cout<<"yes";
	else
		cout<<"no";
	cout<<endl;
	return 0;
}
