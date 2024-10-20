#include "ShellSort.h"
#include "ShellSortTest.h"
#include "DynamicArray.h"
#include "LinkedList.h"
#include "Sequence.h"
#include "DefaultComparator.h"
#include "StringComparator.h"
#include "ShellSortTestPattern.h"

#include <iostream>

void TestShellSort::allTests()
{
	//testInt_ascendingComparator_DynamicArray();
	//testInt_descendingComparator_DynamicArray();
	//testInt_ascendingComparator_LinkedList();
	//testInt_descendingComparator_LinkedList();
	//testFloat_ascendingComparator_DynamicArray();
	//testFloat_descendingComparator_DynamicArray();
	//testFloat_ascendingComparator_LinkedList();
	//testFloat_descendingComparator_LinkedList();
	//testChar_ascendingComparator_DynamicArray();
	//testChar_descendingComparator_DynamicArray();
	//testChar_ascendingComparator_LinkedList();
	//testChar_descendingComparator_LinkedList();
	//testIntFromTXT_ascendingComparator_DynamicArray();
	//testIntFromTXT_descendingComparator_DynamicArray();
	//testIntFromTXT_ascendingComparator_LinkedList();
	//testIntFromTXT_descendingComparator_LinkedList();
	//testFloatFromTXT_ascendingComparator_DynamicArray();
	//testFloatFromTXT_descendingComparator_DynamicArray();
	//testFloatFromTXT_ascendingComparator_LinkedList();
	//testFloatFromTXT_descendingComparator_LinkedList();
	//testCharFromTXT_ascendingComparator_DynamicArray();
	//testCharFromTXT_descendingComparator_DynamicArray();
	//testCharFromTXT_ascendingComparator_LinkedList();
	//testCharFromTXT_descendingComparator_LinkedList();
	//testStringFromTXT_ascendingComparator_BySize_DynamicArray();
	//testStringFromTXT_descendingComparator_BySize_DynamicArray();
	//testStringFromTXT_ascendingComparator_BySize_LinkedList();
	//testStringFromTXT_descendingComparator_BySize_LinkedList();
	//testStringFromTXT_ascendingComparator_ByABC_DynamicArray();
	//testStringFromTXT_descendingComparator_ByABC_DynamicArray();
	//testStringFromTXT_ascendingComparator_ByABC_LinkedList();
	//testStringFromTXT_descendingComaparator_ByABC_LinkedList();
}
void TestShellSort::testInt_ascendingComparator_DynamicArray()
{
	int size = 10000;
	int a[10000] = {};
	int start = -10000;
	int end = 10000;
	for (int i = 0; i < size; i++)
	{
		a[i] = rand() % (end - start + 1) + start;
	}
	DynamicArray<int> testArray = DynamicArray<int>(a, size);
	shellSortTestPattern(testArray, ascendingComparator, true);
}
void TestShellSort::testInt_descendingComparator_DynamicArray()
{
	int size = 10000;
	int a[10000] = {};
	int start = -10000;
	int end = 10000;
	for (int i = 0; i < size; i++)
	{
		a[i] = rand() % (end - start + 1) + start;
	}
	DynamicArray<int> testArray = DynamicArray<int>(a, size);
	shellSortTestPattern(testArray, descendingComparator, false);
}
void TestShellSort::testInt_ascendingComparator_LinkedList()
{
	int size = 10000;
	int a[10000] = {};
	int start = -10000;
	int end = 10000;
	for (int i = 0; i < size; i++)
	{
		a[i] = rand() % (end - start + 1) + start;
	}
	LinkedList<int> testList = LinkedList<int>(a, size);
	shellSortTestPattern(testList, ascendingComparator, true);
}
void TestShellSort::testInt_descendingComparator_LinkedList()
{
	int size = 10000;
	int a[10000] = {};
	int start = -10000;
	int end = 10000;
	for (int i = 0; i < size; i++)
	{
		a[i] = rand() % (end - start + 1) + start;
	}
	LinkedList<int> testList = LinkedList<int>(a, size);
	shellSortTestPattern(testList, descendingComparator, false);
}
void TestShellSort::testFloat_ascendingComparator_DynamicArray()
{
	int size = 10000;
	float a[10000] = {};
	for (int i = 0; i < size; i++)
	{
		a[i] = (float)(rand()) / (float)(rand());
	}
	DynamicArray<float> testArray = DynamicArray<float>(a, size);
	shellSortTestPattern(testArray, ascendingComparator, true);
}
void TestShellSort::testFloat_descendingComparator_DynamicArray()
{
	int size = 10000;
	float a[10000] = {};
	for (int i = 0; i < size; i++)
	{
		a[i] = (float)(rand()) / (float)(rand());
	}
	DynamicArray<float> testArray = DynamicArray<float>(a, size);
	shellSortTestPattern(testArray, descendingComparator, false);
}
void TestShellSort::testFloat_ascendingComparator_LinkedList()
{
	int size = 10000;
	float a[10000] = {};
	for (int i = 0; i < size; i++)
	{
		a[i] = (float)(rand()) / (float)(rand());
	}
	LinkedList<float> testList = LinkedList<float>(a, size);
	shellSortTestPattern(testList, ascendingComparator, true);
}
void TestShellSort::testFloat_descendingComparator_LinkedList()
{
	int size = 10000;
	float a[10000] = {};
	for (int i = 0; i < size; i++)
	{
		a[i] = (float)(rand()) / float(rand());
	}
	LinkedList<float> testList = LinkedList<float>(a, size);
	shellSortTestPattern(testList, descendingComparator, false);
}
void TestShellSort::testChar_ascendingComparator_DynamicArray()
{
	int size = 10000;
	char a[10000] = {};
	for (int i = 0; i < size; i++)
	{
		a[i] = 'a' + std::rand() % 26;
	}
	DynamicArray<char> testArray = DynamicArray<char>(a, size);
	shellSortTestPattern(testArray, ascendingComparator, true);
}
void TestShellSort::testChar_descendingComparator_DynamicArray()
{
	int size = 10000;
	char a[10000] = {};
	for (int i = 0; i < size; i++)
	{
		a[i] = 'a' + std::rand() % 26;
	}
	DynamicArray<char> testArray = DynamicArray<char>(a, size);
	shellSortTestPattern(testArray, descendingComparator, false);
}
void TestShellSort::testChar_ascendingComparator_LinkedList()
{
	int size = 10000;
	char a[10000] = {};
	for (int i = 0; i < size; i++)
	{
		a[i] = 'a' + std::rand() % 26;
	}
	LinkedList<char> testList = LinkedList<char>(a, size);
	shellSortTestPattern(testList, ascendingComparator, true);
}
void TestShellSort::testChar_descendingComparator_LinkedList()
{
	int size = 10000;
	char a[10000] = {};
	for (int i = 0; i < size; i++)
	{
		a[i] = 'a' + std::rand() % 26;
	}
	LinkedList<char> testList = LinkedList<char>(a, size);
	shellSortTestPattern(testList, descendingComparator, false);
}
void TestShellSort::testIntFromTXT_ascendingComparator_DynamicArray()
{
	DynamicArray<int> testArray;
	shellSortTestPattern_FromTXT("testInt.txt", testArray, ascendingComparator, true);
}
void TestShellSort::testIntFromTXT_descendingComparator_DynamicArray()
{
	DynamicArray<int> testArray;
	shellSortTestPattern_FromTXT("testInt.txt", testArray, descendingComparator, false);
}
void TestShellSort::testIntFromTXT_ascendingComparator_LinkedList()
{
	LinkedList<int> testList;
	shellSortTestPattern_FromTXT("testInt.txt", testList, ascendingComparator, true);
}
void TestShellSort::testIntFromTXT_descendingComparator_LinkedList()
{
	LinkedList<int> testList;
	shellSortTestPattern_FromTXT("testInt.txt", testList, descendingComparator, false);
}
void TestShellSort::testFloatFromTXT_ascendingComparator_DynamicArray()
{
	DynamicArray<float> testArray;
	shellSortTestPattern_FromTXT("testFloat.txt", testArray, ascendingComparator, true);
}
void TestShellSort::testFloatFromTXT_descendingComparator_DynamicArray()
{
	DynamicArray<float> testArray;
	shellSortTestPattern_FromTXT("testFloat.txt", testArray, descendingComparator, false);
}
void TestShellSort::testFloatFromTXT_ascendingComparator_LinkedList()
{
	LinkedList<float> testList;
	shellSortTestPattern_FromTXT("testFloat.txt", testList, ascendingComparator, true);
}
void TestShellSort::testFloatFromTXT_descendingComparator_LinkedList()
{
	LinkedList<float> testList;
	shellSortTestPattern_FromTXT("testFloat.txt", testList, descendingComparator, false);
}
void TestShellSort::testCharFromTXT_ascendingComparator_DynamicArray()
{
	DynamicArray<char> testArray;
	shellSortTestPattern_FromTXT("testChar.txt", testArray, ascendingComparator, true);
}
void TestShellSort::testCharFromTXT_descendingComparator_DynamicArray()
{
	DynamicArray<char> testArray;
	shellSortTestPattern_FromTXT("testChar.txt", testArray, descendingComparator, false);
}
void TestShellSort::testCharFromTXT_ascendingComparator_LinkedList()
{
	LinkedList<char> testList;
	shellSortTestPattern_FromTXT("testChar.txt", testList, ascendingComparator, true);
}
void TestShellSort::testCharFromTXT_descendingComparator_LinkedList()
{
	LinkedList<char> testList;
	shellSortTestPattern_FromTXT("testChar.txt", testList, descendingComparator, false);
}
void TestShellSort::testStringFromTXT_ascendingComparator_BySize_DynamicArray()
{
	DynamicArray<std::string> testArray;
	shellSortTestPattern_FromTXTForString_BySize("testString.txt", testArray, ascendingComparatorString_BySize, true);
}
void TestShellSort::testStringFromTXT_descendingComparator_BySize_DynamicArray()
{
	DynamicArray<std::string> testArray;
	shellSortTestPattern_FromTXTForString_BySize("testString.txt", testArray, descendingComparatorString_BySize, false);
}
void TestShellSort::testStringFromTXT_ascendingComparator_BySize_LinkedList()
{
	LinkedList<std::string> testList;
	shellSortTestPattern_FromTXTForString_BySize("testString.txt", testList, ascendingComparatorString_BySize, true);
}
void TestShellSort::testStringFromTXT_descendingComparator_BySize_LinkedList()
{
	LinkedList<std::string> testList;
	shellSortTestPattern_FromTXTForString_BySize("testString.txt", testList, descendingComparatorString_BySize, false);
}
void TestShellSort::testStringFromTXT_ascendingComparator_ByABC_DynamicArray()
{
	DynamicArray<std::string> testArray;
	shellSortTestPattern_FromTXTForString_ByABC("testString.txt", testArray, ascendingComparatorString_ByABC, true);
}
void TestShellSort::testStringFromTXT_descendingComparator_ByABC_DynamicArray()
{
	DynamicArray<std::string> testArray;
	shellSortTestPattern_FromTXTForString_ByABC("testString.txt", testArray, descendingComparatorString_ByABC, false);
}
void TestShellSort::testStringFromTXT_ascendingComparator_ByABC_LinkedList()
{
	LinkedList<std::string> testList;
	shellSortTestPattern_FromTXTForString_ByABC("testString.txt", testList, ascendingComparatorString_ByABC, true);
}
void TestShellSort::testStringFromTXT_descendingComaparator_ByABC_LinkedList()
{
	LinkedList<std::string> testList;
	shellSortTestPattern_FromTXTForString_ByABC("testString.txt", testList, descendingComparatorString_ByABC, false);
}
