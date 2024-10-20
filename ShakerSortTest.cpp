#include "ShakerSort.h"
#include "ShakerSortTest.h"
#include "DynamicArray.h"
#include "Sequence.h"
#include "LinkedList.h"
#include "ShakerSortTestPattern.h"
#include "StringComparator.h"
#include "DefaultComparator.h"

#include <cassert>
#include <chrono>
#include <fstream>
#include <string>


void TestShakerSort::allTests()
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
	//testStringFromTXT_descendingComparator_ByABC_LinkedList();
}
void TestShakerSort::testInt_ascendingComparator_DynamicArray()
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
	shakerSortTestPattern(testArray, ascendingComparator, true);
}

void TestShakerSort::testInt_descendingComparator_DynamicArray()
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
	shakerSortTestPattern(testArray, descendingComparator, false);
}
void TestShakerSort::testInt_ascendingComparator_LinkedList()
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
	shakerSortTestPattern(testList, ascendingComparator, true);
}
void TestShakerSort::testInt_descendingComparator_LinkedList()
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
	shakerSortTestPattern(testList, descendingComparator, false);
}
void TestShakerSort::testFloat_ascendingComparator_DynamicArray()
{
	int size = 10000;
	float a[10000] = {};
	for (int i = 0; i < size; i++)
	{
		a[i] = (float)(rand()) / (float)(rand());
	}
	DynamicArray<float> testArray = DynamicArray<float>(a, size);
	shakerSortTestPattern(testArray, ascendingComparator, true);
}
void TestShakerSort::testFloat_descendingComparator_DynamicArray()
{
	int size = 10000;
	float a[10000] = {};
	for (int i = 0; i < size; i++)
	{
		a[i] = (float)(rand()) / (float)(rand());
	}
	DynamicArray<float> testArray = DynamicArray<float>(a, size);
	shakerSortTestPattern(testArray, descendingComparator, false);
}
void TestShakerSort::testFloat_ascendingComparator_LinkedList()
{
	int size = 10000;
	float a[10000] = {};
	for (int i = 0; i < size; i++)
	{
		a[i] = (float)(rand() / (float)(rand()));
	}
	LinkedList<float> testList = LinkedList<float>(a, size);
	shakerSortTestPattern(testList, ascendingComparator, true);
}
void TestShakerSort::testFloat_descendingComparator_LinkedList()
{
	int size = 10000;
	float a[10000] = {};
	for (int i = 0; i < size; i++)
	{
		a[i] = (float)(rand()) / (float)(rand());
	}
	LinkedList<float> testList = LinkedList<float>(a, size);
	shakerSortTestPattern(testList, descendingComparator, false);
}
void TestShakerSort::testChar_ascendingComparator_DynamicArray()
{
	int size = 10000;
	char a[10000] = {};
	for (int i = 0; i < size; i++)
	{
		a[i] = 'a' + std::rand() % 26;
	}
	DynamicArray<char> testArray = DynamicArray<char>(a, size);
	shakerSortTestPattern(testArray, ascendingComparator, true);
}
void TestShakerSort::testChar_descendingComparator_DynamicArray()
{
	int size = 10000;
	char a[10000] = {};
	for (int i = 0; i < size; i++)
	{
		a[i] = 'a' + std::rand() % 26;
	}
	DynamicArray<char> testArray = DynamicArray<char>(a, size);
	shakerSortTestPattern(testArray, descendingComparator, false);
}
void TestShakerSort::testChar_ascendingComparator_LinkedList()
{
	int size = 10000;
	char a[10000] = {};
	for (int i = 0; i < size; i++)
	{
		a[i] = 'a' + std::rand() % 26;
	}
	LinkedList<char> testList = LinkedList<char>(a, size);
	shakerSortTestPattern(testList, ascendingComparator, true);
}
void TestShakerSort::testChar_descendingComparator_LinkedList()
{
	int size = 10000;
	char a[10000] = {};
	for (int i = 0; i < size; i++)
	{
		a[i] = 'a' + std::rand() % 26;
	}
	LinkedList<char> testList = LinkedList<char>(a, size);
	shakerSortTestPattern(testList, descendingComparator, false);
}
void TestShakerSort::testIntFromTXT_ascendingComparator_DynamicArray()
{
	DynamicArray<int> testArray;
	shakerSortTestPattern_FromTXT("testInt.txt", testArray, ascendingComparator, true);
}
void TestShakerSort::testIntFromTXT_descendingComparator_DynamicArray()
{
	DynamicArray<int> testArray;
	shakerSortTestPattern_FromTXT("testInt.txt", testArray, descendingComparator, false);
}
void TestShakerSort::testIntFromTXT_ascendingComparator_LinkedList()
{
	LinkedList<int> testList;
	shakerSortTestPattern_FromTXT("testInt.txt", testList, ascendingComparator, true);
}
void TestShakerSort::testIntFromTXT_descendingComparator_LinkedList()
{
	LinkedList<int> testList;
	shakerSortTestPattern_FromTXT("testInt.txt", testList, descendingComparator, false);
}
void TestShakerSort::testFloatFromTXT_ascendingComparator_DynamicArray()
{
	DynamicArray<float> testArray;
	shakerSortTestPattern_FromTXT("testFloat.txt", testArray, ascendingComparator, true);
}
void TestShakerSort::testFloatFromTXT_descendingComparator_DynamicArray()
{
	DynamicArray<float> testArray;
	shakerSortTestPattern_FromTXT("testFloat.txt", testArray, descendingComparator, false);
}
void TestShakerSort::testFloatFromTXT_ascendingComparator_LinkedList()
{
	LinkedList<float> testList;
	shakerSortTestPattern_FromTXT("testFloat.txt", testList, ascendingComparator, true);
}
void TestShakerSort::testFloatFromTXT_descendingComparator_LinkedList()
{
	LinkedList<float> testList;
	shakerSortTestPattern_FromTXT("testFloat.txt", testList, descendingComparator, false);
}
void TestShakerSort::testCharFromTXT_ascendingComparator_DynamicArray()
{
	DynamicArray<char> testArray;
	shakerSortTestPattern_FromTXT("testChar.txt", testArray, ascendingComparator, true);
}
void TestShakerSort::testCharFromTXT_descendingComparator_DynamicArray()
{
	DynamicArray<char> testArray;
	shakerSortTestPattern_FromTXT("testChar.txt", testArray, descendingComparator, false);
}
void TestShakerSort::testCharFromTXT_ascendingComparator_LinkedList()
{
	LinkedList<char> testList;
	shakerSortTestPattern_FromTXT("testChar.txt", testList, ascendingComparator, true);
}
void TestShakerSort::testCharFromTXT_descendingComparator_LinkedList()
{
	LinkedList<char> testList;
	shakerSortTestPattern_FromTXT("testChar.txt", testList, descendingComparator, false);
}
void TestShakerSort::testStringFromTXT_ascendingComparator_BySize_DynamicArray()
{
	DynamicArray<std::string> testArray;
	shakerSortTestPattern_FromTXTForString_BySize("testString.txt", testArray, ascendingComparatorString_BySize, true);
}
void TestShakerSort::testStringFromTXT_descendingComparator_BySize_DynamicArray()
{
	DynamicArray<std::string> testArray;
	shakerSortTestPattern_FromTXTForString_BySize("testString.txt", testArray, descendingComparatorString_BySize, false);
}
void TestShakerSort::testStringFromTXT_ascendingComparator_BySize_LinkedList()
{
	LinkedList<std::string> testList;
	shakerSortTestPattern_FromTXTForString_BySize("testString.txt", testList, ascendingComparatorString_BySize, true);
}
void TestShakerSort::testStringFromTXT_descendingComparator_BySize_LinkedList()
{
	LinkedList<std::string> testList;
	shakerSortTestPattern_FromTXTForString_BySize("testString.txt", testList, descendingComparatorString_BySize, false);
}
void TestShakerSort::testStringFromTXT_ascendingComparator_ByABC_DynamicArray()
{
	DynamicArray<std::string> testArray;
	shakerSortTestPattern_FromTXTForString_ByABC("testString.txt", testArray, ascendingComparatorString_ByABC, true);
}
void TestShakerSort::testStringFromTXT_descendingComparator_ByABC_DynamicArray()
{
	DynamicArray<std::string> testArray;
	shakerSortTestPattern_FromTXTForString_ByABC("testString.txt", testArray, descendingComparatorString_ByABC, false);
}
void TestShakerSort::testStringFromTXT_ascendingComparator_ByABC_LinkedList()
{
	LinkedList<std::string> testList;
	shakerSortTestPattern_FromTXTForString_ByABC("testString.txt", testList, ascendingComparatorString_ByABC, true);
}
void TestShakerSort::testStringFromTXT_descendingComparator_ByABC_LinkedList()
{
	LinkedList<std::string> testList;
	shakerSortTestPattern_FromTXTForString_ByABC("testString.txt", testList, descendingComparatorString_ByABC, false);
}