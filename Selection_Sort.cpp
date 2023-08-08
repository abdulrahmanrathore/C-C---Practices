#include <iostream>
using namespace std;

int main(){
	
	int n = 6;
	int arr[n] = {6,4,5,2,1,3};
	
	for(int i = 0; i < n-1; i++){
		int minIndex = i;
		
		for(int j = i+1; j<n; j++){
			if(arr[j] < arr[minIndex]){
				minIndex = j;
			}
		}
		
		swap(arr[minIndex], arr[i]);
	}
	
	for(int i = 0; i <= n; i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}