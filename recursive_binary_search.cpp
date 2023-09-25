#include <iostream>
#include <vector>
#include <optional>

bool recursive_binary_search(std::vector<int> list, int target) {
  if (list.empty()) {
    return false;
  }

  int midpoint = list.size() / 2;

  if (list[midpoint] == target) {
    return true;
  } else if (list[midpoint] < target) {
    return recursive_binary_search(std::vector<int>(list.begin() + midpoint + 1, list.end()), target);
  } else {
    return recursive_binary_search(std::vector<int>(list.begin(), list.begin() + midpoint), target);
  }
}


void verify(std::vector<int> list, int target) {
  if (recursive_binary_search(list, target)) {
    std::cout << "target found" << std::endl;
  } else {
    std::cout << "target not found" << std::endl;
  }
}


int main() {
std::vector<int> numbers = {1,2,3,4,5,6,7,8};
bool found = recursive_binary_search(numbers, 12);
if (found) {
    std::cout<< "Target found" << std::endl;
} else {
    std::cout<< "Target not found" <<std::endl;
}
return 0;
}