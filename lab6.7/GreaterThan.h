#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

// Клас функтора, що перевіряє, чи елемент більше заданого значення
template <typename T>
class GreaterThan {
public:
    GreaterThan(const T& value) : m_value(value) {}

    bool operator()(const T& x) const {
        return x > m_value;
    }

private:
    T m_value;
};