class Kata
{
public:
    std::vector<int> sortArray(std::vector<int> array)
    {
        std::vector<int> a;
        for (int i: array) {
            if (i & 1) {
                a.push_back(i);
            }
        }
        std::sort(a.begin(), a.end());
        for (size_t i = 0, j = 0; i < array.size(); i++) {
            if (array[i] & 1) {
                array[i] = a[j++];
            }
        }
        return array;
    }
};
