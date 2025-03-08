// #include<iostream>
// using namespace std;
// int main(){
// int i,n;
// cin>>n;
// for(i=0;i<n;i++){
//     if(n%i==0){
//         cout<<"n is not prime"<<endl;
//     }
//     else{
//         cout<<"n is prime"<<endl;
//     }
//     return 0;
// }
// }

#include <iostream>
using namespace std;

int main() {
    int n, i;
    bool isPrime = true;  // Assume number is prime

    cout << "Enter a number: ";
    cin >> n;  

    if (n <= 1) {
        isPrime = false;  // 1 aur negative numbers prime nahi hote
    } else {
        for (i = 2; i * i <= n; i++) {  // Efficient approach (sqrt(n) tak check karna)
            if (n % i == 0) {
                isPrime = false;
                break;  // Ek divisor milte hi loop break kar do
            }
        }
    }

    if (isPrime) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}
