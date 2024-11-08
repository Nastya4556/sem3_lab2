#pragma once

class TestShakerSort
{
public:
	void allTests_ShakerSort();
	void testInt_ascendingComparator_DynamicArray_ShakerSort(double& time, int& amountOfElements);
	void testInt_descendingComparator_DynamicArray_ShakerSort(double& time, int& amountOfElements);
	void testInt_ascendingComparator_LinkedList_ShakerSort(double& time, int& amountOfElements);
	void testInt_descendingComparator_LinkedList_ShakerSort(double& time, int& amountOfElements);
	void testFloat_ascendingComparator_DynamicArray_ShakerSort(double& time, int& amountOfElements);
	void testFloat_descendingComparator_DynamicArray_ShakerSort(double& time, int& amountOfElements);
	void testFloat_ascendingComparator_LinkedList_ShakerSort(double& time, int& amountOfElements);
	void testFloat_descendingComparator_LinkedList_ShakerSort(double& time, int& amountOfElements);
	void testChar_ascendingComparator_DynamicArray_ShakerSort(double& time, int& amountOfElements);
	void testChar_descendingComparator_DynamicArray_ShakerSort(double& time, int& amountOfElements);
	void testChar_ascendingComparator_LinkedList_ShakerSort(double& time, int& amountOfElements);
	void testChar_descendingComparator_LinkedList_ShakerSort(double& time, int& amountOfElements);
	void testIntFromTXT_ascendingComparator_DynamicArray_ShakerSort(double& time, int& amountOfElements);
	void testIntFromTXT_descendingComparator_DynamicArray_ShakerSort(double& time, int& amountOfElements);
	void testIntFromTXT_ascendingComparator_LinkedList_ShakerSort(double& time, int& amountOfElements);
	void testIntFromTXT_descendingComparator_LinkedList_ShakerSort(double& time, int& amountOfElements);
	void testFloatFromTXT_ascendingComparator_DynamicArray_ShakerSort(double& time, int& amountOfElements);
	void testFloatFromTXT_descendingComparator_DynamicArray_ShakerSort(double& time, int& amountOfElements);
	void testFloatFromTXT_ascendingComparator_LinkedList_ShakerSort(double& time, int& amountOfElements);
	void testFloatFromTXT_descendingComparator_LinkedList_ShakerSort(double& time, int& amountOfElements);
	void testCharFromTXT_ascendingComparator_DynamicArray_ShakerSort(double& time, int& amountOfElements);
	void testCharFromTXT_descendingComparator_DynamicArray_ShakerSort(double& time, int& amountOfElements);
	void testCharFromTXT_ascendingComparator_LinkedList_ShakerSort(double& time, int& amountOfElements);
	void testCharFromTXT_descendingComparator_LinkedList_ShakerSort(double& time, int& amountOfElements);
	void testStringFromTXT_ascendingComparator_BySize_DynamicArray_ShakerSort(double& time, int& amountOfElements);
	void testStringFromTXT_descendingComparator_BySize_DynamicArray_ShakerSort(double& time, int& amountOfElements);
	void testStringFromTXT_ascendingComparator_BySize_LinkedList_ShakerSort(double& time, int& amountOfElements);
	void testStringFromTXT_descendingComparator_BySize_LinkedList_ShakerSort(double& time, int& amountOfElements);
	void testStringFromTXT_ascendingComparator_ByABC_DynamicArray_ShakerSort(double& time, int& amountOfElements);
	void testStringFromTXT_descendingComparator_ByABC_DynamicArray_ShakerSort(double& time, int& amountOfElements);
	void testStringFromTXT_ascendingComparator_ByABC_LinkedList_ShakerSort(double& time, int& amountOfElements);
	void testStringFromTXT_descendingComparator_ByABC_LinkedList_ShakerSort(double& time, int& amountOfElements);
};