//Question is asking to find the subarrya with max product ;

#include<bits/stdc++.h>
using namespace std ;

int main(){
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	int choice1;
	int choice2;
	int maxprod = arr[0];
	int minprod =arr[0];
	int ans = arr[0];
	int currele;
	for(int i=1;i<size;i++){
		choice1 = maxprod*arr[i];
		choice2 = minprod*arr[i];
		currele = arr[i];
		maxprod = max(currele,max(choice1,choice2));
		minprod = min(currele,min(choice1,choice2));
		if(maxprod >ans)
		ans = maxprod;
	}
	cout<<ans<<endl;
	
}
