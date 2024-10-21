#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;  // Number of elements in the array
    int arr[n];

    // Read the array elements
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int k;
    cin >> k;  // Size of the subarray

    // Check if k is larger than n, which is invalid.
    if (k > n) {
        cout << "Invalid input: k should be less than or equal to n." << endl;
        return 0;
    }

    // Initialize the sum of the first window of size k
    int sum = 0;
    for (int r = 0; r < k; ++r) {
        sum += arr[r];
    }

    int maxi = sum;  // Store the maximum sum found

    // Use sliding window technique to find the maximum sum
    for (int i = 0, r = k; r < n; ++i, ++r) {
        sum += arr[r] - arr[i];  // Add new element and remove the leftmost element
        maxi = max(maxi, sum);   // Update the maximum sum if necessary
    }

    cout << maxi << endl;  // Print the result

    return 0;
}
