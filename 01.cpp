#include <bits/stdc++.h>
using namespace std;
string S1,S2;
int A[1000][1000];
int solve1(){
	cin>>S1>>S2;
	int a=S1.length();
	int b=S2.length();
	for(int i=1 ; i<=a ; i++){
		for(int j=1 ; j<=b ; j++){
			if(S1[i-1]==S2[j-1]){
				A[i][j]=A[i-1][j-1]+1;
			}
			else A[i][j]=max(A[i-1][j],A[i][j-1]);
		}
	}
	return A[a][b];
}
int main(){
	int t;
	cin>>t;
	while(t--){
	cout<<solve1()<<endl;
	}
}
