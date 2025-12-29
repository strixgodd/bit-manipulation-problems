#include<iostream>
#include<cmath>
using namespace std;

//https://leetcode.com/problems/complement-of-base-10-integer/description/
//https://leetcode.com/problems/power-of-two/
int bitwiseComplement(int n){
    if(n==0) return 1;// edge case
    int count=0,num=n,mask,res;
    while(num){
        //find no. of digits in binary of n and store it in count
        while(num){
            num=num>>1;
            count++;
        }
        mask=pow(2,count)-1;// similar to subnet masks used in CN
        res=~n&mask;// or res=(~n)&mask; but we know tha priority of ~ is higher than & so no brackets are required
        return res;  
        
    }
}


//Brute Force

// bool isPowerOfTwo(int n) {//crucial obs through dry run is tha power of 2 numbers has only one set bit(1) TC=O(no. of bits)
//     if(n==0) return false;//edge case sike
//     int d;
//     while(n){
//         d=n&1;
//         n=n>>1;
//         if(d && n) return false;
//     }
//     return true;
// }

//Optimized---brothhhhaaaaa TC=O(1)

bool isPowerOfTwo(int n){
    return((n>0)&&((n&(n-1))==0));
}

int main(){
    cout<<bitwiseComplement(9)<<endl;// https://leetcode.com/problems/complement-of-base-10-integer/description/
    cout<<isPowerOfTwo(8);//https://leetcode.com/problems/power-of-two/

    return 0;
}
