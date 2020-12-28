/*Given an array of size n and a number k, find all elements that appear more than n/k times*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int size;
	cin>>size;
	int k;
	cin>>k;
	int arr[size];
	unordered_map<int,int> m1;
	for(int i=0;i<size;i++){
	cin>>arr[i];
	m1[arr[i]]++;
	}
	int th = size/k;
	for(auto i:m1){
		if(m1[i.first] > th)
		cout<<i.first<<" ";
	}
	cout<<endl;
}
