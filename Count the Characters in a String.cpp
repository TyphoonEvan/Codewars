#include <map>
#include <string>

std::map<char, unsigned> count(const std::string& string) {
    std::map<char, unsigned> counts;

    for (char c : string) {
        counts[c]++;
    }

    return counts;
}
