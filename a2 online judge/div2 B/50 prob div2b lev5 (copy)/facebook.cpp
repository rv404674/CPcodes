#include<bits/stdc++.h>

using namespace std;

int main() {
	string myName;
	cin >> myName;
	int n;
	cin >> n;
	map<string, int> factor;
	string name1, action, temp, name2;
	for (int i = 0; i < n; i++) {
		cin >> name1;
		cin >> action;
		if (action == "posted" || action == "commented")
			cin >> temp;
		cin >> name2;
		name2 = name2.substr(0, name2.length() - 2);
		cin >> temp;
		int val = 5;
		if (action == "posted")
			val = 15;
		else if (action == "commented")
			val = 10;
		if (name1 == myName)
			factor[name2] += val;
		else
			factor[name1];
		if (name2 == myName)
			factor[name1] += val;
		else
			factor[name2];
	}
	vector<pair<int, string> > ret;
	for (map<string, int>::iterator it = factor.begin(); it != factor.end(); it++)
		ret.push_back(make_pair(-it->second, it->first));
	sort(ret.begin(), ret.end());
	int m = ret.size();
	for (int i = 0; i < m; i++)
		cout << ret[i].second << endl;
	return 0;
}
