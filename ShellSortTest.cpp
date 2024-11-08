#include "ShellSort.h"
#include "ShellSortTest.h"
#include "DynamicArray.h"
#include "LinkedList.h"
#include "Sequence.h"
#include "DefaultComparator.h"
#include "StringComparator.h"
#include "ShellSortTestPattern.h"

#include <iostream>

void TestShellSort::allTests_ShellSort()
{
	double time{};
	int amountOfElements{};
	//testInt_ascendingComparator_DynamicArray_ShellSort(time, amountOfElements);
	//testInt_descendingComparator_DynamicArray_ShellSort(time, amountOfElements);
	//testInt_ascendingComparator_LinkedList_ShellSort(time, amountOfElements);
	//testInt_descendingComparator_LinkedList_ShellSort(time, amountOfElements);
	//testFloat_ascendingComparator_DynamicArray_ShellSort(time, amountOfElements);
	//testFloat_descendingComparator_DynamicArray_ShellSort(time, amountOfElements);
	//testFloat_ascendingComparator_LinkedList_ShellSort(time, amountOfElements);
	//testFloat_descendingComparator_LinkedList_ShellSort(time, amountOfElements);
	//testChar_ascendingComparator_DynamicArray_ShellSort(time, amountOfElements);
	//testChar_descendingComparator_DynamicArray_ShellSort(time, amountOfElements);
	//testChar_ascendingComparator_LinkedList_ShellSort(time, amountOfElements);
	//testChar_descendingComparator_LinkedList_ShellSort(time, amountOfElements);
	//testIntFromTXT_ascendingComparator_DynamicArray_ShellSort(time, amountOfElements);
	//testIntFromTXT_descendingComparator_DynamicArray_ShellSort(time, amountOfElements);
	//testIntFromTXT_ascendingComparator_LinkedList_ShellSort(time, amountOfElements);
	//testIntFromTXT_descendingComparator_LinkedList_ShellSort(time, amountOfElements);
	//testFloatFromTXT_ascendingComparator_DynamicArray_ShellSort(time, amountOfElements);
	//testFloatFromTXT_descendingComparator_DynamicArray_ShellSort(time, amountOfElements);
	//testFloatFromTXT_ascendingComparator_LinkedList_ShellSort(time, amountOfElements);
	//testFloatFromTXT_descendingComparator_LinkedList_ShellSort(time, amountOfElements);
	//testCharFromTXT_ascendingComparator_DynamicArray_ShellSort(time, amountOfElements);
	//testCharFromTXT_descendingComparator_DynamicArray_ShellSort(time, amountOfElements);
	//testCharFromTXT_ascendingComparator_LinkedList_ShellSort(time, amountOfElements);
	//testCharFromTXT_descendingComparator_LinkedList_ShellSort(time, amountOfElements);
	//testStringFromTXT_ascendingComparator_BySize_DynamicArray_ShellSort(time, amountOfElements);
	//testStringFromTXT_descendingComparator_BySize_DynamicArray_ShellSort(time, amountOfElements);
	//testStringFromTXT_ascendingComparator_BySize_LinkedList_ShellSort(time, amountOfElements);
	//testStringFromTXT_descendingComparator_BySize_LinkedList_ShellSort(time, amountOfElements);
	//testStringFromTXT_ascendingComparator_ByABC_DynamicArray_ShellSort(time, amountOfElements);
	//testStringFromTXT_descendingComparator_ByABC_DynamicArray_ShellSort(time, amountOfElements);
	//testStringFromTXT_ascendingComparator_ByABC_LinkedList_ShellSort(time, amountOfElements);
	//testStringFromTXT_descendingComparator_ByABC_LinkedList_ShellSort(time, amountOfElements);
}
void TestShellSort::testInt_ascendingComparator_DynamicArray_ShellSort(double& time, int& amountOfElements)
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
	shellSortTestPattern(testArray, ascendingComparator, true, time);
}
void TestShellSort::testInt_descendingComparator_DynamicArray_ShellSort(double& time, int& amountOfElements)
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
	shellSortTestPattern(testArray, descendingComparator, false, time);
}
void TestShellSort::testInt_ascendingComparator_LinkedList_ShellSort(double& time, int& amountOfElements)
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
	shellSortTestPattern(testList, ascendingComparator, true, time);
}
void TestShellSort::testInt_descendingComparator_LinkedList_ShellSort(double& time, int& amountOfElements)
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
	shellSortTestPattern(testList, descendingComparator, false, time);
}
void TestShellSort::testFloat_ascendingComparator_DynamicArray_ShellSort(double& time, int& amountOfElements)
{
	int size = 10000;
	float a[10000] = {};
	for (int i = 0; i < size; i++)
	{
		a[i] = (float)(rand()) / (float)(rand());
	}
	DynamicArray<float> testArray = DynamicArray<float>(a, size);
	shellSortTestPattern(testArray, ascendingComparator, true, time);
}
void TestShellSort::testFloat_descendingComparator_DynamicArray_ShellSort(double& time, int& amountOfElements)
{
	int size = 10000;
	float a[10000] = {};
	for (int i = 0; i < size; i++)
	{
		a[i] = (float)(rand()) / (float)(rand());
	}
	DynamicArray<float> testArray = DynamicArray<float>(a, size);
	shellSortTestPattern(testArray, descendingComparator, false, time);
}
void TestShellSort::testFloat_ascendingComparator_LinkedList_ShellSort(double& time, int& amountOfElements)
{
	int size = 10000;
	float a[10000] = {};
	for (int i = 0; i < size; i++)
	{
		a[i] = (float)(rand()) / (float)(rand());
	}
	LinkedList<float> testList = LinkedList<float>(a, size);
	shellSortTestPattern(testList, ascendingComparator, true, time);
}
void TestShellSort::testFloat_descendingComparator_LinkedList_ShellSort(double& time, int& amountOfElements)
{
	int size = 10000;
	float a[10000] = {};
	for (int i = 0; i < size; i++)
	{
		a[i] = (float)(rand()) / float(rand());
	}
	LinkedList<float> testList = LinkedList<float>(a, size);
	shellSortTestPattern(testList, descendingComparator, false, time);
}
void TestShellSort::testChar_ascendingComparator_DynamicArray_ShellSort(double& time, int& amountOfElements)
{
	int size = 10000;
	char a[10000] = {};
	for (int i = 0; i < size; i++)
	{
		a[i] = 'a' + std::rand() % 26;
	}
	DynamicArray<char> testArray = DynamicArray<char>(a, size);
	shellSortTestPattern(testArray, ascendingComparator, true, time);
}
void TestShellSort::testChar_descendingComparator_DynamicArray_ShellSort(double& time, int& amountOfElements)
{
	int size = 10000;
	char a[10000] = {};
	for (int i = 0; i < size; i++)
	{
		a[i] = 'a' + std::rand() % 26;
	}
	DynamicArray<char> testArray = DynamicArray<char>(a, size);
	shellSortTestPattern(testArray, descendingComparator, false, time);
}
void TestShellSort::testChar_ascendingComparator_LinkedList_ShellSort(double& time, int& amountOfElements)
{
	int size = 10000;
	char a[10000] = {};
	for (int i = 0; i < size; i++)
	{
		a[i] = 'a' + std::rand() % 26;
	}
	LinkedList<char> testList = LinkedList<char>(a, size);
	shellSortTestPattern(testList, ascendingComparator, true, time);
}
void TestShellSort::testChar_descendingComparator_LinkedList_ShellSort(double& time, int& amountOfElements)
{
	int size = 10000;
	char a[10000] = {};
	for (int i = 0; i < size; i++)
	{
		a[i] = 'a' + std::rand() % 26;
	}
	LinkedList<char> testList = LinkedList<char>(a, size);
	shellSortTestPattern(testList, descendingComparator, false, time);
}
void TestShellSort::testIntFromTXT_ascendingComparator_DynamicArray_ShellSort(double& time, int& amountOfElements)
{
	DynamicArray<int> testArray;
	shellSortTestPattern_FromTXT("testInt.txt", testArray, ascendingComparator, true, time, amountOfElements);
}
void TestShellSort::testIntFromTXT_descendingComparator_DynamicArray_ShellSort(double& time, int& amountOfElements)
{
	DynamicArray<int> testArray;
	shellSortTestPattern_FromTXT("testInt.txt", testArray, descendingComparator, false, time, amountOfElements);
}
void TestShellSort::testIntFromTXT_ascendingComparator_LinkedList_ShellSort(double& time, int& amountOfElements)
{
	LinkedList<int> testList;
	shellSortTestPattern_FromTXT("testInt.txt", testList, ascendingComparator, true, time, amountOfElements);
}
void TestShellSort::testIntFromTXT_descendingComparator_LinkedList_ShellSort(double& time, int& amountOfElements)
{
	LinkedList<int> testList;
	shellSortTestPattern_FromTXT("testInt.txt", testList, descendingComparator, false, time, amountOfElements);
}
void TestShellSort::testFloatFromTXT_ascendingComparator_DynamicArray_ShellSort(double& time, int& amountOfElements)
{
	DynamicArray<float> testArray;
	shellSortTestPattern_FromTXT("testFloat.txt", testArray, ascendingComparator, true, time, amountOfElements);
}
void TestShellSort::testFloatFromTXT_descendingComparator_DynamicArray_ShellSort(double& time, int& amountOfElements)
{
	DynamicArray<float> testArray;
	shellSortTestPattern_FromTXT("testFloat.txt", testArray, descendingComparator, false, time, amountOfElements);
}
void TestShellSort::testFloatFromTXT_ascendingComparator_LinkedList_ShellSort(double& time, int& amountOfElements)
{
	LinkedList<float> testList;
	shellSortTestPattern_FromTXT("testFloat.txt", testList, ascendingComparator, true, time, amountOfElements);
}
void TestShellSort::testFloatFromTXT_descendingComparator_LinkedList_ShellSort(double& time, int& amountOfElements)
{
	LinkedList<float> testList;
	shellSortTestPattern_FromTXT("testFloat.txt", testList, descendingComparator, false, time, amountOfElements);
}
void TestShellSort::testCharFromTXT_ascendingComparator_DynamicArray_ShellSort(double& time, int& amountOfElements)
{
	DynamicArray<char> testArray;
	shellSortTestPattern_FromTXT("testChar.txt", testArray, ascendingComparator, true, time, amountOfElements);
}
void TestShellSort::testCharFromTXT_descendingComparator_DynamicArray_ShellSort(double& time, int& amountOfElements)
{
	DynamicArray<char> testArray;
	shellSortTestPattern_FromTXT("testChar.txt", testArray, descendingComparator, false, time, amountOfElements);
}
void TestShellSort::testCharFromTXT_ascendingComparator_LinkedList_ShellSort(double& time, int& amountOfElements)
{
	LinkedList<char> testList;
	shellSortTestPattern_FromTXT("testChar.txt", testList, ascendingComparator, true, time, amountOfElements);
}
void TestShellSort::testCharFromTXT_descendingComparator_LinkedList_ShellSort(double& time, int& amountOfElements)
{
	LinkedList<char> testList;
	shellSortTestPattern_FromTXT("testChar.txt", testList, descendingComparator, false, time, amountOfElements);
}
void TestShellSort::testStringFromTXT_ascendingComparator_BySize_DynamicArray_ShellSort(double& time, int& amountOfElements)
{
	DynamicArray<std::string> testArray;
	shellSortTestPattern_FromTXTForString_BySize("testString.txt", testArray, ascendingComparatorString_BySize, true, time, amountOfElements);
}
void TestShellSort::testStringFromTXT_descendingComparator_BySize_DynamicArray_ShellSort(double& time, int& amountOfElements)
{
	DynamicArray<std::string> testArray;
	shellSortTestPattern_FromTXTForString_BySize("testString.txt", testArray, descendingComparatorString_BySize, false, time, amountOfElements);
}
void TestShellSort::testStringFromTXT_ascendingComparator_BySize_LinkedList_ShellSort(double& time, int& amountOfElements)
{
	LinkedList<std::string> testList;
	shellSortTestPattern_FromTXTForString_BySize("testString.txt", testList, ascendingComparatorString_BySize, true, time, amountOfElements);
}
void TestShellSort::testStringFromTXT_descendingComparator_BySize_LinkedList_ShellSort(double& time, int& amountOfElements)
{
	LinkedList<std::string> testList;
	shellSortTestPattern_FromTXTForString_BySize("testString.txt", testList, descendingComparatorString_BySize, false, time, amountOfElements);
}
void TestShellSort::testStringFromTXT_ascendingComparator_ByABC_DynamicArray_ShellSort(double& time, int& amountOfElements)
{
	DynamicArray<std::string> testArray;
	shellSortTestPattern_FromTXTForString_ByABC("testString.txt", testArray, ascendingComparatorString_ByABC, true, time, amountOfElements);
}
void TestShellSort::testStringFromTXT_descendingComparator_ByABC_DynamicArray_ShellSort(double& time, int& amountOfElements)
{
	DynamicArray<std::string> testArray;
	shellSortTestPattern_FromTXTForString_ByABC("testString.txt", testArray, descendingComparatorString_ByABC, false, time, amountOfElements);
}
void TestShellSort::testStringFromTXT_ascendingComparator_ByABC_LinkedList_ShellSort(double& time, int& amountOfElements)
{
	LinkedList<std::string> testList;
	shellSortTestPattern_FromTXTForString_ByABC("testString.txt", testList, ascendingComparatorString_ByABC, true, time, amountOfElements);
}
void TestShellSort::testStringFromTXT_descendingComparator_ByABC_LinkedList_ShellSort(double& time, int& amountOfElements)
{
	LinkedList<std::string> testList;
	shellSortTestPattern_FromTXTForString_ByABC("testString.txt", testList, descendingComparatorString_ByABC, false, time, amountOfElements);
}
