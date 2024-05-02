#include "SequenceSearcher.h"
#include "GreaterThan.h"
#include<Windows.h>
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::vector<int> sequence = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    std::vector<int> pattern = { 5, 6, 7 };

    // ��������� ��'��� ����� SequenceSearcher
    SequenceSearcher<int> searcher;

    // ��������� ��'��� ����� GreaterThan �� �������
    GreaterThan<int> functor(3);

    auto it = searcher.search_if(sequence, pattern, functor);

    if (it != sequence.end()) {
        std::cout << "����������� �������� �� �������: " << std::distance(sequence.begin(), it) << std::endl;
    }
    else {
        std::cout << "����������� �� ��������" << std::endl;
    }

    return 0;
}