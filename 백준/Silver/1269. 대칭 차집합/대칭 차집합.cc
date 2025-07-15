#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main() {
	vector <int> v;
	set <int> amb,bma, ans;
	int an,bn ,t;
	cin >> an >> bn;

	for(int i=0; i < an; i++ ) {
		cin >> t;
		amb.insert(t);
		v.push_back(t);
	}
	for (int i = 0; i < bn; i++) {
		cin >> t;
		amb.erase(t);
		bma.insert(t);
	}
	for (int i = 0; i < an; i++) {
		bma.erase(v[i]);
	}
	cout << size(bma) + amb.size() << endl;
}