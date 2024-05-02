#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.7/GreaterThan.h"
#include "../lab6.7/SequenceSearcher.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest67
{
	TEST_CLASS(UnitTest67)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			SequenceSearcher<int> searcher;
			std::vector<int> sequence = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
			std::vector<int> pattern = { 5, 6, 7 };
			GreaterThan<int> functor(3);

			// Act
			auto it = searcher.search_if(sequence, pattern, functor);

			// Assert
			Assert::AreEqual(static_cast<size_t>(4), static_cast<size_t>(std::distance(sequence.begin(), it)));
		}
	};
}
