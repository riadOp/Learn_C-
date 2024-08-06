#include<iostream>


int main(){
    int n;
    std::cin>>n;
    int nums[n];
    for(int i = 0 ; i<n ;i++){
        std::cin >> nums[i];
    }
    int ans[2*n];
    for(int i = 0 ; i<2*n ; i++){
        if(i<n){
             ans[i] = nums[i];
        }else{
            ans[i] = nums[i-n];
        }
    }

    for(int i = 0 ; i<2*n;i++){
        std::cout << ans[i];
    }
    return 0;
}