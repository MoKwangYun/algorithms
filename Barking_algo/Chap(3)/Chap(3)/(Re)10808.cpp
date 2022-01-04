#include<bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string S;
	cin >> S;

	int count[26] = {};

	for (int i = 0; i < S.length(); i++) {

		for (int j = 97; j < 123; j++) {
			if (S[i] == j) {
				count[j - 97]++; //count[j - 'a']++;¿Í µ¿ÀÏ
				break;
			}
		}
	}

	for (int i = 0; i < 26; i++) {
		cout << count[i] << ' ';
	}

}

/*
string s;
  cin >> s;
  for(char a = 'a'; a <= 'z'; a++){
	int cnt = 0;
	for(auto c : s)
	  if(a == c) cnt++;
	cout << cnt << ' ';
  }


  int freq[26] = {};
  string s;
  cin >> s;
  for(auto c : s)
	freq[c-'a']++;
  for(int i = 0; i < 26; i++)
	cout << freq[i] << ' ';
*/