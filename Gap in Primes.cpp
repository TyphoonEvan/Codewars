#include <cmath>
#include <utility>

class GapInPrimes {
private:
    static bool isPrime(int num) {
        if (num < 2) {
          return false;
        }
          
        for (int i = 2; i <= std::sqrt(num); ++i) {
            if (num % i == 0) {
              return false;
            }
        }

        return true;
    }

public:
    static std::pair<int, int> gap(int g, int m, int n) {
        int previousPrime = -1;

        for (int num = m; num <= n; ++num) {
            if (isPrime(num)) {
                if (previousPrime != -1 && num - previousPrime == g) {
                    return {previousPrime, num};
                }

                previousPrime = num;
            }
        }

        return {0, 0};
    }
};
