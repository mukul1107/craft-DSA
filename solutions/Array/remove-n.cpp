// THIS IS A SOLUTION FILE FOR THE "remove-nth Element" PROBLEM.
// Problem Name == ** Remove 'n'th Element ** from the array.

// Given is an array 'nums' of 'k' elements where 'k' stands for the size of the array.
// The motive of the exercise is to remove the number of 'nth' space element from the array of size 'k'.

/*
    nums = [k,k,k,k,k,k,k,k,k,k];
    // n = 2
    // Task is to remove every nth space element from the array.
    // nums = [k , REMOVED, k , REMOVED, k , REMOVED, k, REMOVED, k, REMOVED]
*/

#include <iostream>
#include <vector>
using namespace std;
class RemoveNthElement {
private:
    int* nums;
    int size;

public:
    // Constructor
    RemoveNthElement(int arr[], int len) {
        size = len;
        nums = new int[size];
        for (int i = 0; i < size; ++i) {
            nums[i] = arr[i];
        }
    }

    // Destructor
    ~RemoveNthElement() {
        delete[] nums;
    }

    // Function to remove every nth element
    void remove(int n) {
        int newSize = 0;
        for (int i = 0; i < size; ++i) {
            if ((i + 1) % n != 0) {
                nums[newSize++] = nums[i];
            }
        }
        size = newSize;
    }

    // Function to display the array
    void display() {
        for (int i = 0; i < size; ++i) {
            cout << nums[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len = sizeof(arr) / sizeof(arr[0]);

    RemoveNthElement obj(arr, len);

    int n ;
    cout << "Enter the 'nth' Element: " << endl;
    cin >> n;
    cout << "Original array: ";
    obj.display();

    obj.remove(n);

    cout << "Modified array: ";
    obj.display();

    return 0;
}
