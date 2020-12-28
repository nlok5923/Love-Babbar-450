/*Given an array of positive and negative numbers, arrange them in an alternate fashion such that 
every positive number is followed by negative and vice-versa maintaining the order of appearance. 
Number of positive and negative numbers need not be equal. If there are more positive numbers they
appear at the end of the array. If there are more negative numbers, they too appear in the end of the array.*/
#include<bits/stdc++.h>
using namespace std;

int main() {
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	cin>>arr[i];
	int i=0;
	int j = size-1;
	while(i<j){
		while(arr[i]>0)
			i++;
		while(arr[j]<0)
		    j--;
		    if(j<i){
		    j++;
			break;
		}
		int temp =arr[i];
		arr[i] =arr[j];
		arr[j] = temp;
	}
	// j will be starting index of negative elements subarray
	int k = 0;
	while(k<j){
		while(arr[k]<0){
			k+=2;
		}
		if(k>j || j==size || k==size){
		break;
      	}
		int temp = arr[k];
		arr[k]=arr[j];
		arr[j] = temp;
		j++;
	}
	
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
