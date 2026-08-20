#include <string>

std::string reverseString(const std::string &str)
{
  // your Code is Here ... enjoy !!!
  std::string newstr = str;
  int length = newstr.length();
  int n = length - 1;
  char temp;
  for (int i = 0; i < length/2; i++) {
    temp = newstr[i];
    newstr[i] = newstr[n];
    newstr[n] = temp;
    n--;
  }
    return newstr;
}
