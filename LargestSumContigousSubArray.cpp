// Question is asking to find the contiguous subarray which has largest sum 
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		 cin>>a[i];
	}
	//here we will be using kadane's algorithm
	int max_reached =0 ;
	int max_sofar=0;
	for(int i=0;i<n;i++){
		max_reached = max_reached+a[i];
		if(max_reached<0){
			max_reached =0;
		}
		if(max_reached > max_sofar){
			max_sofar = max_reached;
		}
	}
	cout<<max_sofar<<endl;
}
