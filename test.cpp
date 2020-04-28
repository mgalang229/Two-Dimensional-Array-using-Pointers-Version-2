#include <bits/stdc++.h>
using namespace std;

void multi(int **a, int, int);
void result(int **a, int, int);
int main(){
	int **b, r, c;
	cin >> r >> c;
	b = new int*[r];
	for(int i = 0; i < r; ++i){
		b[i] = new int[c];
	}
	multi(b, r ,c);
	result(b, r, c);
	return 0;
}
void multi(int **a, int rs, int cs){
	for(int i = 0; i < rs; ++i){
		for(int j = 0; j < cs; ++j){
			cin >> a[i][j];
		}
	}
}
void result(int **a, int rs, int cs){
	for(int i = 0; i < rs; ++i){
		cout << endl;
		for(int j = 0; j < cs; ++j){
			cout << a[i][j] << " ";
		}
	}
}
