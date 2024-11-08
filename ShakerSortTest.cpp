#include "ShakerSort.h"
#include "ShakerSortTest.h"
#include "DynamicArray.h"
#include "Sequence.h"
#include "LinkedList.h"
#include "ShakerSortTestPattern.h"
#include "StringComparator.h"
#include "DefaultComparator.h"
#include "ISorter.h"

#include <cassert>
#include <chrono>
#include <fstream>
#include <string>


void TestShakerSort::allTests_ShakerSort()
{
	double time{};
	int amountOfElements{};
	//testInt_ascendingComparator_DynamicArray_ShakerSort(time, amountOfElements);
	//testInt_descendingComparator_DynamicArray_ShakerSort(time, amountOfElements);
	//testInt_ascendingComparator_LinkedList_ShakerSort(time, amountOfElements);
	//testInt_descendingComparator_LinkedList_ShakerSort(time, amountOfElements);
	//testFloat_ascendingComparator_DynamicArray_ShakerSort(time, amountOfElements);
	//testFloat_descendingComparator_DynamicArray_ShakerSort(time, amountOfElements);
	//testFloat_ascendingComparator_LinkedList_ShakerSort(time, amountOfElements);
	//testFloat_descendingComparator_LinkedList_ShakerSort(time, amountOfElements);
	//testChar_ascendingComparator_DynamicArray_ShakerSort(time, amountOfElements);
	//testChar_descendingComparator_DynamicArray_ShakerSort(time, amountOfElements);
	//testChar_ascendingComparator_LinkedList_ShakerSort(time, amountOfElements);
	//testChar_descendingComparator_LinkedList_ShakerSort(time, amountOfElements);
	//testIntFromTXT_ascendingComparator_DynamicArray_ShakerSort(time, amountOfElements);
	//testIntFromTXT_descendingComparator_DynamicArray_ShakerSort(time, amountOfElements);
	//testIntFromTXT_ascendingComparator_LinkedList_ShakerSort(time, amountOfElements);
	//testIntFromTXT_descendingComparator_LinkedList_ShakerSort(time, amountOfElements);
	//testFloatFromTXT_ascendingComparator_DynamicArray_ShakerSort(time, amountOfElements);
	//testFloatFromTXT_descendingComparator_DynamicArray_ShakerSort(time, amountOfElements);
	//testFloatFromTXT_ascendingComparator_LinkedList_ShakerSort(time, amountOfElements);
	//testFloatFromTXT_descendingComparator_LinkedList_ShakerSort(time, amountOfElements);
	//testCharFromTXT_ascendingComparator_DynamicArray_ShakerSort(time, amountOfElements);
	//testCharFromTXT_descendingComparator_DynamicArray_ShakerSort(time, amountOfElements);
	//testCharFromTXT_ascendingComparator_LinkedList_ShakerSort(time, amountOfElements);
	//testCharFromTXT_descendingComparator_LinkedList_ShakerSort(time, amountOfElements);
	//testStringFromTXT_ascendingComparator_BySize_DynamicArray_ShakerSort(time, amountOfElements);
	//testStringFromTXT_descendingComparator_BySize_DynamicArray_ShakerSort(time, amountOfElements);
	//testStringFromTXT_ascendingComparator_BySize_LinkedList_ShakerSort(time, amountOfElements);
	//testStringFromTXT_descendingComparator_BySize_LinkedList_ShakerSort(time, amountOfElements);
	//testStringFromTXT_ascendingComparator_ByABC_DynamicArray_ShakerSort(time, amountOfElements);
	//testStringFromTXT_descendingComparator_ByABC_DynamicArray_ShakerSort(time, amountOfElements);
	//testStringFromTXT_ascendingComparator_ByABC_LinkedList_ShakerSort(time, amountOfElements);
	//testStringFromTXT_descendingComparator_ByABC_LinkedList_ShakerSort(time, amountOfElements);
}
void TestShakerSort::testInt_ascendingComparator_DynamicArray_ShakerSort(double &time, int &amountOfElements)
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
	amountOfElements = testArray.getLength();
	shakerSortTestPattern(testArray, ascendingComparator, true, time);
}

void TestShakerSort::testInt_descendingComparator_DynamicArray_ShakerSort(double &time, int &amountOfElements)
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
	amountOfElements = testArray.getLength();
	shakerSortTestPattern(testArray, descendingComparator, false, time);
}
void TestShakerSort::testInt_ascendingComparator_LinkedList_ShakerSort(double &time, int &amountOfElements)
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
	amountOfElements = testList.getLength();
	shakerSortTestPattern(testList, ascendingComparator, true, time);
}
void TestShakerSort::testInt_descendingComparator_LinkedList_ShakerSort(double &time, int &amountOfElements)
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
	amountOfElements = testList.getLength();
	shakerSortTestPattern(testList, descendingComparator, false, time);
}
void TestShakerSort::testFloat_ascendingComparator_DynamicArray_ShakerSort(double& time, int& amountOfElements)
{
	int size = 10000;
	float a[10000] = {};
	for (int i = 0; i < size; i++)
	{
		a[i] = (float)(rand()) / (float)(rand());
	}
	DynamicArray<float> testArray = DynamicArray<float>(a, size);
	amountOfElements = testArray.getLength();
	shakerSortTestPattern(testArray, ascendingComparator, true, time);
}
void TestShakerSort::testFloat_descendingComparator_DynamicArray_ShakerSort(double& time, int& amountOfElements)
{
	int size = 10000;
	float a[10000] = {};
	for (int i = 0; i < size; i++)
	{
		a[i] = (float)(rand()) / (float)(rand());
	}
	DynamicArray<float> testArray = DynamicArray<float>(a, size);
	amountOfElements = testArray.getLength();
	shakerSortTestPattern(testArray, descendingComparator, false, time);
}
void TestShakerSort::testFloat_ascendingComparator_LinkedList_ShakerSort(double& time, int& amountOfElements)
{
	int size = 10000;
	float a[10000] = {};
	for (int i = 0; i < size; i++)
	{
		a[i] = (float)(rand() / (float)(rand()));
	}
	LinkedList<float> testList = LinkedList<float>(a, size);
	amountOfElements = testList.getLength();
	shakerSortTestPattern(testList, ascendingComparator, true, time);
}
void TestShakerSort::testFloat_descendingComparator_LinkedList_ShakerSort(double& time, int& amountOfElements)
{
	int size = 10000;
	float a[10000] = {};
	for (int i = 0; i < size; i++)
	{
		a[i] = (float)(rand()) / (float)(rand());
	}
	LinkedList<float> testList = LinkedList<float>(a, size);
	amountOfElements = testList.getLength();
	shakerSortTestPattern(testList, descendingComparator, false, time);
}
void TestShakerSort::testChar_ascendingComparator_DynamicArray_ShakerSort(double& time, int& amountOfElements)
{
	int size = 10000;
	char a[10000] = {};
	for (int i = 0; i < size; i++)
	{
		a[i] = 'a' + std::rand() % 26;
	}
	DynamicArray<char> testArray = DynamicArray<char>(a, size);
	amountOfElements = testArray.getLength();
	shakerSortTestPattern(testArray, ascendingComparator, true, time);
}
void TestShakerSort::testChar_descendingComparator_DynamicArray_ShakerSort(double& time, int& amountOfElements)
{
	int size = 10000;
	char a[10000] = {};
	for (int i = 0; i < size; i++)
	{
		a[i] = 'a' + std::rand() % 26;
	}
	DynamicArray<char> testArray = DynamicArray<char>(a, size);
	amountOfElements = testArray.getLength();
	shakerSortTestPattern(testArray, descendingComparator, false, time);
}
void TestShakerSort::testChar_ascendingComparator_LinkedList_ShakerSort(double& time, int& amountOfElements)
{
	int size = 10000;
	char a[10000] = {};
	for (int i = 0; i < size; i++)
	{
		a[i] = 'a' + std::rand() % 26;
	}
	LinkedList<char> testList = LinkedList<char>(a, size);
	amountOfElements = testList.getLength();
	shakerSortTestPattern(testList, ascendingComparator, true, time);
}
void TestShakerSort::testChar_descendingComparator_LinkedList_ShakerSort(double& time, int& amountOfElements)
{
	int size = 10000;
	char a[10000] = {};
	for (int i = 0; i < size; i++)
	{
		a[i] = 'a' + std::rand() % 26;
	}
	LinkedList<char> testList = LinkedList<char>(a, size);
	amountOfElements = testList.getLength();
	shakerSortTestPattern(testList, descendingComparator, false, time);
}
void TestShakerSort::testIntFromTXT_ascendingComparator_DynamicArray_ShakerSort(double& time, int& amountOfElements)
{
	DynamicArray<int> testArray;
	shakerSortTestPattern_FromTXT("testInt.txt", testArray, ascendingComparator, true, time, amountOfElements);
}
void TestShakerSort::testIntFromTXT_descendingComparator_DynamicArray_ShakerSort(double& time, int& amountOfElements)
{
	DynamicArray<int> testArray;
	shakerSortTestPattern_FromTXT("testInt.txt", testArray, descendingComparator, false, time, amountOfElements);
}
void TestShakerSort::testIntFromTXT_ascendingComparator_LinkedList_ShakerSort(double& time, int& amountOfElements)
{
	LinkedList<int> testList;
	shakerSortTestPattern_FromTXT("testInt.txt", testList, ascendingComparator, true, time, amountOfElements);
}
void TestShakerSort::testIntFromTXT_descendingComparator_LinkedList_ShakerSort(double& time, int& amountOfElements)
{
	LinkedList<int> testList;
	shakerSortTestPattern_FromTXT("testInt.txt", testList, descendingComparator, false, time, amountOfElements);
}
void TestShakerSort::testFloatFromTXT_ascendingComparator_DynamicArray_ShakerSort(double& time, int& amountOfElements)
{
	DynamicArray<float> testArray;
	shakerSortTestPattern_FromTXT("testFloat.txt", testArray, ascendingComparator, true, time, amountOfElements);
}
void TestShakerSort::testFloatFromTXT_descendingComparator_DynamicArray_ShakerSort(double& time, int& amountOfElements)
{
	DynamicArray<float> testArray;
	shakerSortTestPattern_FromTXT("testFloat.txt", testArray, descendingComparator, false, time, amountOfElements);
}
void TestShakerSort::testFloatFromTXT_ascendingComparator_LinkedList_ShakerSort(double &time, int &amountOfElements)
{
	LinkedList<float> testList;
	shakerSortTestPattern_FromTXT("testFloat.txt", testList, ascendingComparator, true, time, amountOfElements);
}
void TestShakerSort::testFloatFromTXT_descendingComparator_LinkedList_ShakerSort(double &time, int &amountOfElements)
{
	LinkedList<float> testList;
	shakerSortTestPattern_FromTXT("testFloat.txt", testList, descendingComparator, false, time, amountOfElements);
}
void TestShakerSort::testCharFromTXT_ascendingComparator_DynamicArray_ShakerSort(double &time, int &amountOfElements)
{
	DynamicArray<char> testArray;
	shakerSortTestPattern_FromTXT("testChar.txt", testArray, ascendingComparator, true, time, amountOfElements);
}
void TestShakerSort::testCharFromTXT_descendingComparator_DynamicArray_ShakerSort(double &time, int &amountOfElements)
{
	DynamicArray<char> testArray;
	shakerSortTestPattern_FromTXT("testChar.txt", testArray, descendingComparator, false, time, amountOfElements);
}
void TestShakerSort::testCharFromTXT_ascendingComparator_LinkedList_ShakerSort(double &time, int &amountOfElements)
{
	LinkedList<char> testList;
	shakerSortTestPattern_FromTXT("testChar.txt", testList, ascendingComparator, true, time, amountOfElements);
}
void TestShakerSort::testCharFromTXT_descendingComparator_LinkedList_ShakerSort(double &time, int &amountOfElements)
{
	LinkedList<char> testList;
	shakerSortTestPattern_FromTXT("testChar.txt", testList, descendingComparator, false, time, amountOfElements);
}
void TestShakerSort::testStringFromTXT_ascendingComparator_BySize_DynamicArray_ShakerSort(double &time, int &amountOfElements)
{
	DynamicArray<std::string> testArray;
	shakerSortTestPattern_FromTXTForString_BySize("testString.txt", testArray, ascendingComparatorString_BySize, true, time, amountOfElements);
}
void TestShakerSort::testStringFromTXT_descendingComparator_BySize_DynamicArray_ShakerSort(double &time, int &amountOfElements)
{
	DynamicArray<std::string> testArray;
	shakerSortTestPattern_FromTXTForString_BySize("testString.txt", testArray, descendingComparatorString_BySize, false, time, amountOfElements);
}
void TestShakerSort::testStringFromTXT_ascendingComparator_BySize_LinkedList_ShakerSort(double &time, int &amountOfElements)
{
	LinkedList<std::string> testList;
	shakerSortTestPattern_FromTXTForString_BySize("testString.txt", testList, ascendingComparatorString_BySize, true, time, amountOfElements);
}
void TestShakerSort::testStringFromTXT_descendingComparator_BySize_LinkedList_ShakerSort(double &time, int &amountOfElements)
{
	LinkedList<std::string> testList;
	shakerSortTestPattern_FromTXTForString_BySize("testString.txt", testList, descendingComparatorString_BySize, false, time, amountOfElements);
}
void TestShakerSort::testStringFromTXT_ascendingComparator_ByABC_DynamicArray_ShakerSort(double &time, int &amountOfElements)
{
	DynamicArray<std::string> testArray;
	shakerSortTestPattern_FromTXTForString_ByABC("testString.txt", testArray, ascendingComparatorString_ByABC, true, time, amountOfElements);
}
void TestShakerSort::testStringFromTXT_descendingComparator_ByABC_DynamicArray_ShakerSort(double &time, int &amountOfElements)
{
	DynamicArray<std::string> testArray;
	shakerSortTestPattern_FromTXTForString_ByABC("testString.txt", testArray, descendingComparatorString_ByABC, false, time, amountOfElements);
}
void TestShakerSort::testStringFromTXT_ascendingComparator_ByABC_LinkedList_ShakerSort(double &time, int &amountOfElements)
{
	LinkedList<std::string> testList;
	shakerSortTestPattern_FromTXTForString_ByABC("testString.txt", testList, ascendingComparatorString_ByABC, true, time, amountOfElements);
}
void TestShakerSort::testStringFromTXT_descendingComparator_ByABC_LinkedList_ShakerSort(double &time, int &amountOfElements)
{
	LinkedList<std::string> testList;
	shakerSortTestPattern_FromTXTForString_ByABC("testString.txt", testList, descendingComparatorString_ByABC, false, time, amountOfElements);
}