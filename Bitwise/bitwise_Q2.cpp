#include<iostream>
using namespace std;
    int number_of_bits( int n){
        int count = 0;
        while(n!=0){
        
        /* write a function that takes a unsigned integer and return the number of '1' bits.
           for Example : input n = 0000 0000 0000 0000 0000 0000 0000 0101
                         output  = 2 */
           
            if(n&1){
                count++;
            }
            n = n>>1;
        }
        return count;
    }
    int main(){
        
        int n = 00000000000000000000000000001011;

        int ans = number_of_bits(n);

        cout << ans;

        
   

     return 0;
}