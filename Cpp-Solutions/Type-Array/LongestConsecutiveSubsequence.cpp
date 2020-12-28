/*Given an array of positive integers. Find the length of the longest sub-sequence 
such that elements in the subsequence are consecutive integers, the consecutive numbers can be in any order.
*/

/*
Input:
N = 7
a[] = {2,6,1,9,4,5,3}
Output: 6
Explanation: The consecutive numbers 
here are 1, 2, 3, 4, 5, 6. These 6 
numbers form the longest consecutive
subsquence
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int size;
	cin>>size;
	int arr[size];
	unordered_map<int,int> m1;
	for(int i=0;i<size;i++){
	cin>>arr[i];
	m1[arr[i]] = 1;
	}
	// we can do it easily using sorting but it will take O(nlogn) time but we need to solve it in under O(n) time complexity
	int max_len =INT_MIN;
	int start =INT_MIN;
	for(int i=0;i<size;i++){
		if((arr[i]>=start) && (arr[i]<=((start+max_len)-1))){
			continue;
		}else{
			int temp = arr[i];
			int tempstart =0;
			int len=0;
			while(m1[temp--]==1){
				len++;
			}
			tempstart = temp;
			temp = arr[i];
			temp++;
			while(m1[temp++]==1){
				len++;
			}
			if(len>max_len){
				start =  tempstart;
				max_len = len;
				len =0;
			}
		}
		
	}
	cout<<max_len<<endl;
	
}
