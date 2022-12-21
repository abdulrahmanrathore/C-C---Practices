#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr1, int n, vector<int>& arr2, int m){
	
    vector<int> temp(8);
    
    for(int i=0; i<m; i++){
        temp[i] = arr1[i];
    }
    
    int i=0, j=0, k=0;
    while(i<m && j<n){
        if(temp[i] < arr2[j]){
            arr1[k++] = temp[i++];
        } else {
            arr1[k++] = arr2[j++];
        }
    }
    
    while(i<m){
        arr1[k++] = temp[i++];
    }
    
    while(j<n){
        arr1[k++] = arr2[j++];
    }
	
}

void print(vector<int>& ans){
	for(int i=0; i<ans.size(); i++){	
		cout<< ans[i] <<" ";
	}
	cout << endl;
}


int main(){
	
//	int arr1[5] = {1,3,5,7,9};
//	int arr2[3] = {2,4,6};
//	
//	int arr3[8] = {0};
//	
//	merge(arr1, 5, arr2, 3);
//	
//	print(arr3, 8);

	vector<int> arr1;
	arr1.push_back(1);
	arr1.push_back(3);
	arr1.push_back(5);
	arr1.push_back(7);
	arr1.push_back(9);
	int n = arr1.size();
	
	vector<int> arr2;
	arr2.push_back(2);
	arr2.push_back(4);
	arr2.push_back(6);	
	int m = arr2.size();
	
	merge(arr1, n, arr2, m);
	
	print(arr1);
	
	return 0;
}