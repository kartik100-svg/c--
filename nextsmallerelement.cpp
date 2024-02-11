#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> next_smaller_element(vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n,-1);
    stack<int> s;
    s.push(-1);  // Push the index of the first element

    for (int i = 1; i < n; ++i) {
        while (!s.empty() && arr[i] < arr[s.top()]) {
            result[s.top()] = i; // Use 'i' as the index in the result array
            s.pop();
        }
        s.push(i);
    }

    // Convert indices to values
    for (int i = 0; i < n; ++i) {
        if (result[i] != -1) {
            result[i] = arr[result[i]];
        }
    }

    return result;
}

int main() {
    vector<int> input_array = {4, 5, 3, 10, 8};
    vector<int> output_array = next_smaller_element(input_array);

    cout << "Next smaller elements for each element:" << endl;
    for (int i = 0; i < output_array.size(); ++i) {
        cout << input_array[i] << " -> " << (output_array[i] == -1 ? -1 : output_array[i]) << endl;
    }

    return 0;
}

