# include <string>

std::string disemvowel(const std::string& str) {
    std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
  
    std::string newStr = str;
  
    for (int i = 0; i < newStr.length(); i++) 
    {
        if (find(vowels.begin(), vowels.end(),
                      newStr[i]) != vowels.end()) 
        {
            newStr = newStr.replace(i, 1, "");
            i -= 1;
        }
    }
    return newStr;
}
