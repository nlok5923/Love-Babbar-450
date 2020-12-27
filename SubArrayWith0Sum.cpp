//Given an array of positive and negative numbers. Find if there is a subarray (of size at-least one) with 0 sum.
//output should be yes/no
#include<bits/stdc++.h>
using namespace std;
int main(){
	int size;
	cin>>size;
	int arr[size];
	unordered_map<int,int> m1;
	int sum =0 ;
	for(int i=0;i<size;i++){
	cin>>arr[i];
	sum = sum +arr[i];
	m1[sum]++;
	}
	 if(m1[0]>=1){
	 	cout<<"yes"<<endl;
	 }
	 else{
	 	int flag =0;
	 	 for (auto i : m1)
		 {
	 	 	if(m1[i.first]>=2)
	 	 	{
	 	 		flag++;
	 	 		cout<<"yes"<<endl;
	 	 		break;
	 	 		
			}
	 	 }
	 	 if(!flag)
	 	 cout<<"no"<<endl;
	 }
}
