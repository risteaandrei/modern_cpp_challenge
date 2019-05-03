#include <initializer_list>
#include <vector>

template<class T, size_t R, size_t C>
class array2d {
    using iterator = T*;
    using const_iterator = T const *;
    std::vector<T> arr;
public:
    array2d(): arr(R*C) {}
    explicit array2d(std::initializer_list<T> l): arr(l) {}

    array2d(array2d&& other) noexcept: arr(std::move(other.arr)) {}

    array2d(const array2d& other) noexcept: arr(other.arr) {}
    
    T* data() { return arr.data(); }
    T const * data() const { return arr.data(); }

    T& at(size_t r, size_t c) { return arr.at(r*C+c); }
    T const & at(size_t r, size_t c) const { return arr.at(r*C+c); }

    T& operator()(size_t r, size_t c) { return arr[r*C+c]; };
    T const & operator()(size_t r, size_t c) const { return arr[r*C+c]; };

    bool operator==(array2d const & other) const { return arr == other.arr; }

    void fill(T const & value) { std::fill(arr.begin(), arr.end(), value); }

    void swap(array2d & other) { arr.swap(other.arr); }

    const_iterator begin() const { return arr.data(); }
    const_iterator end() const { return arr.data() + arr.size(); }
    iterator begin() { return arr.data(); }
    iterator end() { return arr.data() + arr.size(); }
};
