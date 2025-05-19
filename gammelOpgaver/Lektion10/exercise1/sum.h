#include <vector>

template<typename T>
T sum(typename std::vector<T>::iterator begin, typename std::vector<T>::iterator end, T initial_sum) {
    T sum = initial_sum;

    for (auto it = begin; it != end; ++it) {
        sum += *it;
    }

    // sums the elements in the range, excluding end, and adds the sum to the initial value initial_sum
    return sum;
}
