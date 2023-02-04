#include <bits/stdc++.h>
using namespace std;
int c[2]={1,0};
int h[2]={0,1};
int a[15][15];
int counts;
void check(int i,int j,int n,int k){
	if(i==k-1&&j==n-1){
			counts++;
		return;
	}
	for(int x=0;x<2;x++){
		if(i+c[x]>=0&&i+c[x]<k&&j+h[x]>=0&&j+h[x]<n){
			check(i+c[x],j+h[x],n,k);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k,i,j;
		cin >> n >> k;
		int d[n*n]={};
		for(i=0;i<n;i++){
			for(j=0;j<k;j++){
				cin >> a[i][j];
			}
		}
		counts=0;
		check(0,0,n,k);
		cout << counts << endl;
	}
}