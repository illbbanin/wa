#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main() {
	set <int> ans;
	int an, bn ,t;
	cin >> an >> bn;

	for(int i=0; i < an; i++ ) {
		cin >> t;
		ans.insert(t);
	}
	for (int i = 0; i < bn; i++) {
		cin >> t;
		ans.erase(t);
	}
	
	cout << size(ans) << endl;
	for (auto v : ans) {
		cout << v << " ";
	}
	
	
}