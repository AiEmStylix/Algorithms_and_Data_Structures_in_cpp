#include <iostream>
#include <vector>
#include <optional>

std::optional<int> binary_search(std::vector<int> list, int target) {
    int first = 0;
    int last = list.size() - 1;
    int middle;
    while (first <= last) {
        middle = (first + last)/2;
        if (list[middle] == target) {
            return middle;
        } else if (list[middle] < target) {
            first = middle + 1;
        } else {
            last = middle - 1;
        }
    }
    return std::nullopt;
}

int main() {
    std::vector<int> list = {1,2,3,4,5,6,7};
    int target = 7;
    std::optional<int> index = binary_search(list, target);
    if (index.has_value()) {
        std::cout<<"The target was found at index:" << (int)(index.value()) << std::endl;
    } else {
        std::cout<<"The target was not found" <<std::endl;
    }
    return 0;
}