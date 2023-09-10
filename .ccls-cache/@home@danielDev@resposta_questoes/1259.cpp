#include <bits/stdc++.h>
using namespace std; 
#define ll long long

int main(){
	int n ;
	vector<int> xp,xi;
	
	cin >> n;
	while(n != 0 ){
		int num;
		cin >> num;
		if(num % 2 == 0)
			xp.push_back(num);	
		else
			xi.push_back(num);
		n--;
	}
	
	sort(xp.begin(), xp.end());
	sort(xi.begin(), xi.end());


	int a = xp.size() , b = xi.size();

	for(int i = 0 ; i<a ; i++){
		cout << xp[i]<<endl;
	}
	for(int i = b-1 ; i>=0 ; i--){
		cout << xi[i]<< endl;
	}
}

