/*Say you have an array for which the ith element is the price of a given stock on day i.

If you were only permitted to complete at most one transaction (i.e., buy one and sell one share
 of the stock), design an algorithm to find the maximum profit.

Note that you cannot sell a stock before you buy one.*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	// building n^2 approach
	int maxprofit =INT_MIN;
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(arr[j]-arr[i]>0){
				if((arr[j]-arr[i])>maxprofit)
				maxprofit = arr[j]-arr[i];
			}
		}
	}
	if(maxprofit ==INT_MIN)
	cout<<"0"<<endl;
	else
	cout<<maxprofit<<endl;
}
