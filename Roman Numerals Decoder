#include <iostream>
#include <string>

int decode(char letter) {
  switch (letter) {
    case 'M':
      return 1000;
    case 'D':
      return 500;
    case 'C':
      return 100;
    case 'L':
      return 50;
    case 'X':
      return 10;
    case 'V':
      return 5;
    case 'I':
      return 1;
  }
}

int solution(string roman) {
  
  int result = 0;
  
  for (size_t i = 0; i < roman.size(); ++i) {
    if (i < roman.size() - 1 && decode(roman[i]) < decode(roman[i + 1])) {
      result -= decode(roman[i]);
    }
    else { 
      result += decode(roman[i]);
    }
  }
  return result;
}
