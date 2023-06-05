#include <vector>
int grow(std::vector<int> nums) {
  int result = 1;
  
  for(auto x : nums){
    result *= x;
  }
  
  return result;
}
