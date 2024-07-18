#include <bits/stdc++.h>
using namespace std;
int main(){
	int m;cin>>m;
	map<int,int> mp;
	while(m--){
		int x;cin>>x;
		mp[x]++;
	}
	cout<<mp[1];
}