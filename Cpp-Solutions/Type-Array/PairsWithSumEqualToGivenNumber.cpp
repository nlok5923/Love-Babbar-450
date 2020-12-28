/*Given an array of N integers, and an integer K, find the number
 of pairs of elements in the array whose sum is equal to K.*/
 #include<bits/stdc++.h>
 using namespace std;
 
 int main(){
 	int size;
 	cin>>size;
 	int arr[size];
 	for(int i=0;i<size;i++)
 	cin>>arr[i];
 	int num;
 	cin>>num;
 	int count =0 ;
 	for(int i=0;i<size;i++)
 	{
 		for(int j=i+1;j<size;j++){
 				if(arr[i]+arr[j]==num)
 				count++;
		 }
	}
	cout<<count<<endl;
 }
