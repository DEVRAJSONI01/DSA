#include<iostream>
#include<vector>
using namespace std;
void rE(vector<int>& nums, int val) {
    int n = nums.size();
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] != val) {
            nums[j] = nums[i];
            j++;
        }
    }
    for(int i=0;i<n;i++){
        if(i<j){
            cout<<nums[i];
        }
        else{
            cout<<"_";
        }
    }
    cout<<","<<j;
}
int main() {
    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    rE(nums, 2);
    return 0;
}


























// #include <iostream>
// #include <vector>
// using namespace std;

// void rE(vector<int>& nums, int val) {
//     int n = nums.size();
//     int j = 0; // Index to place elements not equal to val

//     // Move non-val elements to the front
//     for (int i = 0; i < n; i++) {
//         if (nums[i] != val) {
//             nums[j] = nums[i];
//             j++;
//         }
//     }

//     // Print array elements, showing '_' for elements after j
//     for (int i = 0; i < n; i++) {
//         if (i < j) {
//             cout << nums[i];
//         } else {
//             cout << "_"; // Represent remaining elements with underscores
//         }
//     }

//     // Print the count of non-val elements
//     cout << ", " << j << endl;
// }

// int main() {
//     vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
//     rE(nums, 2); // Remove all occurrences of 2
//     return 0;
// }