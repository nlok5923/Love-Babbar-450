/*Question : Given an array arr[] denoting heights of N towers and a positive integer K,
 you have to modify the height of each tower either by increasing or decreasing them by K only once. 
 After modifying, height should be a non-negative integer.Find out what could be the possible minimum
  difference of the height of shortest and longest towers after you have modified each tower.*/
  
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int min = INT_MAX;
	int max= INT_MIN;
	int a[n];
	for(int i=0;i<n;i++){
	cin>>a[i];
	if(a[i]>max)
	max = a[i];
	if(a[i]<min)
	min=a[i];
	}
	sort(a,a+n);
	int ans = a[n-1]-a[0];
	int k;
	cin>>k; 
	int small = a[0]+k;
	int big = a[n-1]-k;
	if(big<small){
	int temp =  small;
	small = big;
	big = temp;
	}
	int sm,add;
	for(int i=1;i<n-1;i++){
		sm = a[i]-k;
		add = a[i]+k;
		if(sm>=small || add<=big)
		continue;
		//now we will check difference
	    if(big-sm <= add-small){
	    	small = sm;
		}
		else
		 big = add;
	}
	if(ans<(big-small))
	cout<<ans<<endl;
	else
	cout<<big-small<<endl;
	
}


