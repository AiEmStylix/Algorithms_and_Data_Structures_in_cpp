#include <iostream>
#include <vector>

using namespace std;

int linear_search(vector<int> list, int target) {
    for (int i = 0; i < list.size(); i++) {
        if (list[i] == target) {
            return i;
        }
    }
    return -1;
};

void verify (int index) {
    if (index != -1) {
        cout << "The target element was found at index " << index << endl;
    } else {
        cout << "The target element was not found in the vector" << endl;
    }
}

int main() {
    vector<int> numbers = {1,2,3,4,5,6};
    int index = linear_search(numbers, 4);
    verify(index);
    return 0;
}