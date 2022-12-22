#include<iostream>
using namespace std;

void sayDigit(int num, string arr[]){
    //base case
    if(num == 0){
        return ;
    }

    //processing
    int digit = num%10;
    num = num/10;

    // cout<<"befor recursive call"<<endl;
    // cout<<digit<<"  "<<num <<endl;
    sayDigit(num, arr);

    // cout<<"after recursive call"<<endl;
    // cout<<digit<<"  "<<num <<endl;
    
    cout<< arr[digit] <<" ";
}

int main(){
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int num;
    cin>>num;
    cout<<endl;
    sayDigit(num, arr);
}