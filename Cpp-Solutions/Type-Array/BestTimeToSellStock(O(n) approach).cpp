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
	for(int i=0;i<size;i++)
	cin>>arr[i];
	//we will sove this problem by finding local maxima and local minima
	int maxprofit = INT_MIN;
	int i=0;
	vector<int> minima;
	vector<int> maxima;
	while(i<(size-1)){
		while(i<(size-1) && arr[i+1]<=arr[i])
		i++;
		if(i==size-1)
		break;
		minima.push_back(i);
		i++;
		while(i<(size-1) && arr[i-1]<=arr[i])
		i++;
		minima.push_back(i-1);
	}
	for(int i=0;i<minima.size();i++){
		for(int j=i+1;j<minima.size();j++){
			if(arr[minima[j]]-arr[minima[i]]>maxprofit)
			maxprofit = arr[minima[j]]-arr[minima[i]];
		}
	}
	cout<<maxprofit<<endl;
}
