#include<bits/stdc++.h>
using namespace std;
int getMaxValue(int arr[], int size) {
    
    sort(arr,arr+size);
    return arr[size-1];
}
int getMinValue(int arr[], int size) {
  sort(arr,arr+size);
  return arr[0];
}
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int countPrimes(int arr[], int size) {
    int primeCount = 0;
    for (int i = 0; i < size; ++i) {
        if (isPrime(arr[i])) {
            primeCount++;
        }
    }
    return primeCount;
}
bool isPalindrome(int num) {
    int reversed = 0;
    int original = num;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return original == reversed;
}
int countPalindromes(int arr[], int size) {
    int palindromeCount = 0;
    for (int i = 0; i < size; ++i) {
        if (isPalindrome(arr[i])) {
            palindromeCount++;
        }
    }
    return palindromeCount;
}
int mD(int n,int arr[]){
int md=0,num=0;
for(int i=0;i<n;i++){
    int c=0;
    for(int j=1;j<=arr[i];j++){
        if(arr[i]%j==0){
            c++;
        }
    }if(c>=md){
    md=c;
    int m=max(num,arr[i]);
    num=m;
    }
}
return num ;
}
int main() {
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    int maxValue = getMaxValue(arr, N);
    int minValue = getMinValue(arr, N);
    int primeCount = countPrimes(arr, N);
    int palindromeCount = countPalindromes(arr, N);
    int maxDivisorCountNumber = mD(N,arr);

    cout << "The maximum number : " << maxValue << endl;
    cout << "The minimum number : " << minValue << endl;
    cout << "The number of prime numbers : " << primeCount << endl;
    cout << "The number of palindrome numbers : " << palindromeCount << endl;
    cout << "The number that has the maximum number of divisors : " << maxDivisorCountNumber << endl;

    return 0;
}
