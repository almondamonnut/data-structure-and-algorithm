// This code is to practice changing recursion to loop
// exercises based on www.cs.odu.edu

#include <bits/stdc++.h>
using namespace std;

// _____1_____
long int recursive_accsum(int n) {
    if(n == 0) {
        return 1;
    }
    return n+recursive_accsum(n-1);
}

long int loop_accsum(int n) {
    int result = 1;
    for (int i=1; i<=n; i++) {
        result += i;
    }
    return result;
}

// _____2_____
int recur_fibonac(int n) {
    if (n==0) return 0;
    else if (n==1) return 1;
    else return recur_fibonac(n-1) + recur_fibonac(n-2);
}

int loop_fibonac(int n) {
    int fib0 = 0;
    int fib1 = 1;
    int fib;

    if (n==0) return fib0;
    else if (n==1) return fib1;

    for (int i=2; i<=n; i++) {
        fib = fib0 + fib1;
        fib0 = fib1;
        fib1 = fib;
    }
    return fib;
}

//_____3_____
int recur_binary_search(int arr[], int start, int end, int target) {
    if(end >= start) {
        int mid = start + (end-start) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] > target) {
            return recur_binary_search(arr, start, mid-1, target);
        }
        else {
            return recur_binary_search (arr, mid+1, end, target);
        }
    } 
    return -1;
}

int loop_binary_search(int arr[], int start, int end, int target) {
    while(end >= start) {
        int mid = start + (end-start) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] > target) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return -1;
}

int main() {
    cout << "start" << endl
         << loop_accsum(1000000) << endl << endl; //1784293665
        //  << recursive_accsum(1000000) << endl << endl; // recursion dies here

    cout << "fibo" << endl
        //  << recur_fibonac(1000) << endl // recursion also runs extremely slowly here
         << loop_fibonac(1000) << endl << endl; //while loop is super fast

    int arr[] = {0,10,20,30,40,50,60,70,80,90,100,102,104,105};
    cout << "binary search" << endl 
         << recur_binary_search(arr, 0, sizeof(arr)/sizeof(int)-1, 30) << endl
         << loop_binary_search(arr, 0, sizeof(arr)/sizeof(int)-1, 30) << endl;
}