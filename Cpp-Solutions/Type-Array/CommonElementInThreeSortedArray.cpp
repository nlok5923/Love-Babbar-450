/*Given three arrays sorted in increasing order. 
Find the elements that are common in all three arrays.
Note: can you take care of the duplicates without using any additional Data Structure?*/

#include<bits/stdc++.h>
using namespace std;
int min(int a , int b){(a < b)? a:b;}
int main(){
	//currently we are assuming all the array to be of same size
	//but our easily can easily work for array of diff sizes as well
	int size;
	cin>>size;
	int arr1[size],arr2[size],arr3[size];
	for(int i=0;i<size;i++)
	cin>>arr1[i];
	for(int i=0;i<size;i++)
	cin>>arr2[i];
	for(int i=0;i<size;i++)
	cin>>arr3[i];
	
	int i=0,j=0,k=0;
	
	while(i<size && j<size && k<size ){
		int flag =0;
		 int minele = min(arr1[i],min(arr2[k],arr3[j]));
		 if(minele == arr1[i]){
		 i++;
		 flag++;
		 }
		 if(minele == arr2[j]){
		 j++;
		 flag++;
		 }
		 if(minele == arr3[k]){
		 k++;
		 flag++;
        }
        if(flag ==3)
        cout<<minele<<" ";
	}
	cout<<endl;
}
