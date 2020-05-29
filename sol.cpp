#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a[5000], n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int count[10];
	for(int i = 0; i < n; i++){
		count[a[i]]++;
	}
	int l = INT_MAX;
	for(int i = 1; i <= 3; i++){
		l = min(l, count[i]);
	}
	vector<int> pr, m, pe;
	for(int i = 0; i < n; i++){
		if(a[i] == 1){
			pr.push_back(i+1);
		} else if(a[i] == 2){
			m.push_back(i+1);
		} else{
			pe.push_back(i+1);
		}
	}
	cout << l << "\n";
	for(int i = 0; i < l; i++){
		cout << pr[i] << " " << m[i] << " " << pe[i] << "\n";
	}
	cout << "\n";
	return 0;
}
