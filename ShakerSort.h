#pragma once
#include "Sequence.h"
#include "DynamicArray.h"
/*#include "Swap.h"*/
#include "ISorter.h"
#include "Person.h"

template<typename T> class ShakerSort : public ISorter<T>
{
public:
    Sequence<T>* sort(const Sequence<T>& input, int (*cmp)(const T&, const T&)) {
        int left = 0;
        int right = input.getLength() - 1;
        Sequence<T>* result = new DynamicArray<T>(input.getLength());
        for (int i = 0; i < input.getLength(); i++) {
            (*result)[i] = input.get(i);
        }
        while (left <= right) {
            for (int i = left; i < right; i++) {
                if (cmp((*result)[i], (*result)[i + 1]) > 0) {
                    std::swap((*result)[i], (*result)[i + 1]);
                }
            }
            right--;

            for (int i = right; i > left; i--) {
                if (cmp((*result)[i - 1], (*result)[i]) > 0) {
                    std::swap((*result)[i - 1], (*result)[i]);
                }
            }
            left++;
        }
        return result;
    }
    Sequence<T>* sort(const Sequence<Person>& input, int (*cmp)(const T&, const T&), int elementOfPerson) {
        int left = 0;
        int right = input.getLength() - 1;
        Sequence<T>* elements = new DynamicArray<T>(input.getLength());
        Sequence<T>* result = new DynamicArray<T>(input.getLength());
        for (int i = 0; i < input.getLength(); i++) {
            (*result)[i] = input.get(i);
            if (elementOfPerson == 0) {
                (*elements)[i] = (input.get(i)).getFirstName();
            }
            if (elementOfPerson == 1) {
                (*elements)[i] = (input.get(i)).getSecondName();
            }
            if (elementOfPerson == 2) {
                (*elements)[i] = (input.get(i)).getThirdName();
            }
            if (elementOfPerson == 3) {
                (*elements)[i] = (input.get(i)).getBirthDay();
            }
            if (elementOfPerson == 4) {
                (*elements)[i] = (input.get(i)).getBirthMonth();
            }
            if(elementOfPerson == 5) {
                (*elements)[i] = (input.get(i)).getBirthYear();
            }
            if (elementOfPerson == 6) {
                (*elements)[i] = (input.get(i)).getPassportSeries();
            }
            if (elementOfPerson == 7) {
                (*elements)[i] = (input.get(i)).getPassportNumber();
            }
            if (elementOfPerson == 8) {
                (*elements)[i] = (input.get(i)).getDayOfIssuePassport();
            }
            if (elementOfPerson == 9) {
                (*elements)[i] = (input.get(i)).getMonthOfIssuePassport();
            }
            if (elementOfPerson == 10) {
                (*elements)[i] = (input.get(i)).getYearOfIssuePassport();
            }
            if (elementOfPerson == 11) {
                (*elements)[i] = (input.get(i)).getNumberOfSisters();
            }
            if (elementOfPerson == 12) {
                (*elements)[i] = (input.get(i)).getNumberOfBrothers();
            }
            if (elementOfPerson == 13) {
                (*elements)[i] = (input.get(i)).getFullYears();
            }
            if (elementOfPerson == 14) {
                (*elements)[i] = (input.get(i)).getYearOfAdmissionToSchool();
            }
            if (elementOfPerson == 15) {
                (*elements)[i] = (input.get(i)).getYearOfGraduation();
            }
            if (elementOfPerson == 16) {
                (*elements)[i] = (input.get(i)).getHeight();
            }
            if (elementOfPerson == 17) {
                (*elements)[i] = (input.get(i)).getWeight();
            }
            if (elementOfPerson == 18) {
                (*elements)[i] = (input.get(i)).getFavoriteFruit();
            }
            if (elementOfPerson == 19) {
                (*elements)[i] = (input.get(i)).getFavoriteVegetable();
            }
        }
        while (left <= right) {
            for (int i = left; i < right; i++) {
                if (cmp((*elements)[i], (*elements)[i + 1]) > 0) {
                    std::swap((*elements)[i], (*elements)[i + 1]);
                    std::swap((*result)[i], (*result)[i + 1]);
                }
            }
            right--;

            for (int i = right; i > left; i--) {
                if (cmp((*elements)[i - 1], (*elements)[i]) > 0) {
                    std::swap((*elements)[i - 1], (*elements)[i]);
                    std::swap((*result)[i - 1], (*result)[i]);
                }
            }
            left++;
        }
        return result;
    }
};





