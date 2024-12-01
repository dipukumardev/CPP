#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[7] = {0, 0, 1, 1, 1, 0, 1};
    sort(begin(arr), end(arr));
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i];
    }
    cout << endl;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == 1)
        {
            cout << i;
            break;
        }
        else
        {
            cout << "Not Found in this arrays 1";
        }
    }
}


// context approch

#include <iostream>
using namespace std;

// Mock of the `get` function to simulate the infinite array.
int get(int i) {
    // Example infinite sorted binary array
    // Simulate an array where all `0`s are followed by `1`s.
    if (i < 4) return 0; // `0`s at indices 0, 1, 2, 3
    return 1;            // `1`s start at index 4 and continue infinitely
}

// Function to find the first occurrence of `1` in the infinite sorted binary array.
long long firstOne() {
    long long low = 0, high = 1;

    // Step 1: Find a range containing the first `1`.
    while (get(high) == 0) {
        low = high;
        high *= 2; // Exponentially increase the search range.
    }

    // Step 2: Perform binary search within the range [low, high].
    long long result = -1;
    while (low <= high) {
        long long mid = low + (high - low) / 2;

        if (get(mid) == 1) {
            result = mid;  // Update result to the current index.
            high = mid - 1; // Continue searching for earlier occurrences.
        } else {
            low = mid + 1; // Search for later occurrences.
        }
    }

    return result;
}

int main() {
    // Find the index of the first occurrence of `1` and print the result.
    cout << "The index of the first occurrence of 1 is: " << firstOne() << endl;
    return 0;
}
