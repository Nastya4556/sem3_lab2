#include "Test.h"
#include "ShakerSortTest.h"
#include "ShellSortTest.h"

void Test::allTests()
{
	testShakerSort();
	testShellSort();
}
void Test::testShakerSort()
{
	TestShakerSort testShakerSort;
	testShakerSort.allTests_ShakerSort();
}
void Test::testShellSort()
{
	TestShellSort testQuickSort;
	testQuickSort.allTests_ShellSort();
}