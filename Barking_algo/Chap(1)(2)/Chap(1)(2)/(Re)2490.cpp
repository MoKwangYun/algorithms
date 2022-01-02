#include<bits/stdc++.h>

using  namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[3][4] = {};
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> arr[i][j];
		}
	}

	int count[3] = {};

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			if (arr[i][j] == 0)
				count[i]++;
		}

		if(count[i] == 0)
				cout << "E";
		else if(count[i] == 1)
				cout << "A";
		else if(count[i] == 2)
				cout << "B";
		else if(count[i] == 3)
				cout << "C";
		else if(count[i] == 4)
				cout << "D";

		cout << "\n";
	}




	return 0;

}


/*
#include <bits/stdc++.h>
using namespace std;

int result, input;
string res = "DCBAE";

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  for(int r = 0; r < 3; r++) {
	result = 0;
	for(int c = 0; c < 4; c++) {
	  cin >> input;
	  result += input;
	}
	cout << res[result] << '\n';
  }
}
*/