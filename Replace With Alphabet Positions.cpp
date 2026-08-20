#include <string>

std::string alphabet_position(const std::string &text) {
  string result = "";
  
  for (char c : text) {
    c = std::tolower(c);
    if ('a' <= c && c <= 'z') {
      if (result != "") {
        result += " ";
      }
      result += std::to_string(c - 'a' + 1);
    }
  }
  
  return res;
}
