#include <string>
#include <cmath>

int digital_root(int n)
{
    int root = 0;
    std::string digits = std::to_string(n);
    int length = digits.length();
    for (int i=0; i<length; i++) {
      int tens = std::pow(10, i);
      int temp = n/tens;
      int num = temp%10;
      root += num;
    }
    if (root > 9) {
      return digital_root(root);
    }
    return root;
}
