//Question was asking to rotate the array in a cyclic manner by one element
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int ele = a[n-1];
	for(int i=n-1;i>=0;i--){
		a[i+1] = a[i];
	}
	a[0] = ele;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
