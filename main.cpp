#include <iostream>
#include <vector>
using namespace std;
#include "math.h"
#include <array>
#include <algorithm>
int main(){
  std::cout << " 3 + 4 = " << add(3, 554) << std::endl;
  // std::array<int, 5> a;
  // a.fill()
  vector<int> v(2);
  fill(v.begin(), v.end(), 0);
  //v.at(8); 越界

}