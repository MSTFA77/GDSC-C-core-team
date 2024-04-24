#include<bits/stdc++.h>
using namespace std;
int getMaxValue(int arr[], int size) {
    int maxValue = arr[0];
    sort(arr,arr+size);
    return arr[size-1];
}
int getMinValue(int arr[], int size) {
    int minValue = arr[0];
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
int countDivisors(int num) {
    int divisorCount = 0;
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            divisorCount++;
        }
    }
    return divisorCount;
}


int getMaxDivisorCountNumber(int arr[], int size) {
    int maxDivisorCount = 0;
    int numberWithMaxDivisors = arr[0];

    for (int i = 1; i < size; ++i) {
        int divisors = countDivisors(arr[i]);
        if (divisors > maxDivisorCount) {
            maxDivisorCount = divisors;
            numberWithMaxDivisors = arr[i];
        }
    }

    return numberWithMaxDivisors;
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
    int maxDivisorCountNumber = getMaxDivisorCountNumber(arr, N);

    cout << "The maximum number : " << maxValue << endl;
    cout << "The minimum number : " << minValue << endl;
    cout << "The number of prime numbers : " << primeCount << endl;
    cout << "The number of palindrome numbers : " << palindromeCount << endl;
    cout << "The number that has the maximum number of divisors : " << maxDivisorCountNumber << endl;

    return 0;
}
