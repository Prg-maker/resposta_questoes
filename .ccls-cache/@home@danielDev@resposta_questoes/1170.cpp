#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define dd double

int main(){

	int n;
	cin >> n;

	while(n!= 0){
		dd q;
		ll ans = 0;
		
		cin >> q;

		while(q >= 1){
			q/=2;
			ans++;
		}	
		cout << ans<< " dias" << endl;

		n--;
	}
}
