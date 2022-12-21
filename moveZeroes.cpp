#include<iostream>
#include<vector>
using namespace std;

void moveZero(vector<int>& nums){
	int i=0;
	for(int j=0; j<nums.size(); j++){
		if(nums[j] != 0){
			swap(nums[j], nums[i]);
			i++;
		}
	}
}

void print(vector<int> v){
	
	for(int i=0; i<v.size(); i++){
		cout<< v[i]<<" ";
	}
	cout<<endl;
}

int main(){
	vector<int> nums;
	nums.push_back(0);
	nums.push_back(1);
	nums.push_back(0);
	nums.push_back(3);
	nums.push_back(12);
	
    moveZero(nums);
	
	print(nums);
		
	return 0;
}