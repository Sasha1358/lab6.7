#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include "GreaterThan.h"

// Клас для пошуку послідовностей у векторі
template <typename T>
class SequenceSearcher {
public:
    // Функція search_if шукає перше входження послідовності, яка задовольняє умову
    typename std::vector<T>::iterator search_if(std::vector<T>& sequence, const std::vector<T>& pattern, const GreaterThan<T>& functor) {
        auto it = std::search(sequence.begin(), sequence.end(), pattern.begin(), pattern.end());
        while (it != sequence.end()) {
            if (functor(*it))
                return it;
            it = std::search(std::next(it), sequence.end(), pattern.begin(), pattern.end());
        }
        return sequence.end();
    }
};