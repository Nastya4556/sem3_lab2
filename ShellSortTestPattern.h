#pragma once
#include <chrono>
#include "Sequence.h"
#include "ShellSort.h"

#include <iostream>
#include <cassert>
#include <fstream>
#include <string>


template<typename T>
void shellSortTestPattern(Sequence<T>& testSequence, int(*cmp)(const T& a, const T& b), bool isLess)
{
	auto startClock = std::chrono::high_resolution_clock::now();
	Sequence<T>* result = shellSort(testSequence, cmp);
	auto endClock = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double, std::milli> elapsed = endClock - startClock;
	std::cout << elapsed.count() << " ms\n";
	for (int i = 0; i < result->getLength() - 1; i++)
	{
		if (isLess)
		{
			assert(result->get(i) <= result->get(i + 1));
		}
		else
		{
			assert(result->get(i) >= result->get(i + 1));
		}
	}
}

template<typename T>
void shellSortTestPattern_FromTXT(std::string fileName, Sequence<T>& testSequence, int (*cmp)(const T&, const T&), bool isLess)
{
	std::ifstream inputFile(fileName);
	if (!inputFile)
		throw std::out_of_range("The file could not be opened\n");
	T object{};
	while (inputFile >> object)
	{
		testSequence.append(object);
	}
	inputFile.close();
	int size = testSequence.getLength();
	auto startClock = std::chrono::high_resolution_clock::now();
	Sequence<T>* result = shellSort(testSequence, cmp);
	auto endClock = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double, std::milli> elapsed = endClock - startClock;
	std::cout << elapsed.count() << " ms\n";
	for (int i = 0; i < size - 1; i++)
	{
		if (isLess)
		{
			assert(result->get(i) <= result->get(i + 1));
		}
		else
		{
			assert(result->get(i) >= result->get(i + 1));
		}
	}
}
template<typename T>
void shellSortTestPattern_FromTXTForString_BySize(std::string fileName, Sequence<T>& testSequence, int (*cmp)(const T&, const T&), bool isLess)
{
	std::ifstream inputFile(fileName);
	if (!inputFile)
		throw std::out_of_range("The file could not be opened\n");
	T object{};
	while (inputFile >> object)
	{
		testSequence.append(object);
	}
	inputFile.close();
	int size = testSequence.getLength();
	auto startClock = std::chrono::high_resolution_clock::now();
	Sequence<T>* result = shellSort(testSequence, cmp);
	auto endClock = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double, std::milli> elapsed = endClock - startClock;
	std::cout << elapsed.count() << " ms\n";
	for (int i = 0; i < size - 1; i++)
	{
		if (isLess)
		{
			std::string str1 = result->get(i);
			std::string str2 = result->get(i + 1);
			assert(str1.size() <= str2.size());
		}
		else
		{
			std::string str1 = result->get(i);
			std::string str2 = result->get(i + 1);
			assert(str1.size() >= str2.size());
		}
	}
}

template<typename T>
void shellSortTestPattern_FromTXTForString_ByABC(std::string fileName, Sequence<T>& testSequence, int (*cmp)(const T&, const T&), bool isLess)
{
	std::ifstream inputFile(fileName);
	if (!inputFile)
		throw std::out_of_range("The file could not be opened\n");
	T object{};
	while (inputFile >> object)
	{
		testSequence.append(object);
	}
	inputFile.close();
	int size = testSequence.getLength();
	auto startClock = std::chrono::high_resolution_clock::now();
	Sequence<T>* result = shellSort(testSequence, cmp);
	auto endClock = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double, std::milli> elapsed = endClock - startClock;
	std::cout << elapsed.count() << " ms\n";
	for (int i = 0; i < size - 1; i++)
	{
		if (isLess)
		{
			std::string str1 = result->get(i);
			std::string str2 = result->get(i + 1);
			assert(str1.at(0) <= str2.at(0));
		}
		else
		{
			std::string str1 = result->get(i);
			std::string str2 = result->get(i + 1);
			assert(str1.at(0) >= str2.at(0));
		}
	}
}


