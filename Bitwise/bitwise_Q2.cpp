#include<iostream>
using namespace std;
    int number_of_bits( int n){
        int count = 0;
        while(n!=0){
        /* convert bits into decimal by calculating bits here n = bits
         for example bits = 00000000000000000000000000001011
                     digit = 1011     */
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