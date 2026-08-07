#include <vector>

char findMissingLetter(const std::vector<char>& chars) {
  char result;
  
  for(int i = 1; i < chars.size(); i++) {
    if((chars[i] - chars[i-1]) !=1 ) {
      result = chars[i-1] + 1;
    }  
  }
  return result;  
}
