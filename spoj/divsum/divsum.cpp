#include <iostream>
#include <cmath>

using namespace std;

int max_proper(int n){
    
    for (int i =2; i <= sqrt(n); i++){
	if (n % i == 0){
	    return n / i;
	}
    }
    return 0;
}

int sol(int n){
    int max_div = max_proper(n);
    if (n==1){
	return 0;
    }
    //cout << "Max div:" << n << " " << max_div << "\n";
    int sum = 1 + max_div;
    for (int i =2; i < max_div; i++){
	if (n % i == 0){
	    sum += i;
	}
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, x;
    cin >> n; 
    for (int i =0; i< n; i++){
	cin >> x;
	cout << sol(x) << "\n";
    }
    return 0;
}

