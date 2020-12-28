//Given an integer, the task is to find factorial of the number.

#include<bits/stdc++.h>
using namespace std;

//by making max 500 we can only get factorial of number which has a max of 500 digits
#define max 500

int multiply(int result[], int result_size, int mul){
	int carry =0;
	for(int i=0;i<result_size;i++){
		int product = mul*result[i]+carry;
		result[i]= product%10;
		carry =  product/10;
	}
	while(carry){
		result[result_size] = carry%10;
		result_size++;
		carry =carry/10;
	}
	return result_size;
}

int main(){
	int number;
	cin>>number;
	
	int result[max];
	int result_size = 1;
	result[0] =1;
	
	for(int i=2;i<=number;i++){
		result_size = multiply(result,result_size,i);
	}
	for(int i=result_size-1;i>=0;i--){
		cout<<result[i];
	}
	
	cout<<endl;
	
}
