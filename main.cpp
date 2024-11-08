#include <QApplication>
#include <QWidget>
#include <QStackedWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QTableWidget>
#include <string>
#include <QFileDialog>
#include <QString>
#include <QComboBox>
#include <iostream>
#include <fstream>
#include "QDesktopServices"

#include "ComparatorForPerson.h"
#include "StringComparator.h"
#include "ShakerSortTest.h"
#include "ShellSortTest.h"
#include "DynamicArray.h"
#include "Person.h"
#include "ShakerSort.h"
#include "ShellSort.h"


int selectedIndex1 = -1;
int selectedIndex2 = -1;
int selectedIndex3 = -1;
std::string filePath = "";

void startSorting() {
    std::ifstream file(filePath);
    DynamicArray<Person> sequence;
    std::string line;
    Person person;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string firstName, secondName, thirdName, birthDay, birthMonth, birthYear, passportSeries, passportNumber, dayOfIssuePassport, monthOfIssuePassport, yearOfIssuePassport, numberOfSisters, numberOfBrothers, fullYears, yearOfAdmissionToSchool, yearOfGraduation, height, weight, favoriteFruit, favoriteVegetable;
        if (iss >> firstName >> secondName >> thirdName >> birthDay >> birthMonth >> birthYear >> passportSeries >> passportNumber >> dayOfIssuePassport >> monthOfIssuePassport >> yearOfIssuePassport >> numberOfSisters >> numberOfBrothers >> fullYears >> yearOfAdmissionToSchool >> yearOfGraduation >> height >> weight >> favoriteFruit >> favoriteVegetable) {
            person.setFirstName(firstName);
            person.setSecondName(secondName);
            person.setThirdName(thirdName);
            person.setBirthDay(std::stoi(birthDay));
            person.setBirthMonth(std::stoi(birthMonth));
            person.setBirthYear(std::stoi(birthYear));
            person.setPassportSeries(std::stoi(passportSeries));
            person.setPassportNumber(std::stoi(passportNumber));
            person.setDayOfIssuePassport(std::stoi(dayOfIssuePassport));
            person.setMonthOfIssuePassport(std::stoi(monthOfIssuePassport));
            person.setYearOfIssuePassport(std::stoi(yearOfIssuePassport));
            person.setNumberOfSisters(std::stoi(numberOfSisters));
            person.setNumberOfBrothers(std::stoi(numberOfBrothers));
            person.setFullYears(std::stoi(fullYears));
            person.setYearOfAdmissionToSchool(std::stoi(yearOfAdmissionToSchool));
            person.setYearOfGraduation(std::stoi(yearOfGraduation));
            person.setHeight(std::stof(height));
            person.setWeight(std::stof(weight));
            person.setFavoriteFruit(favoriteFruit);
            person.setFavoriteVegetable(favoriteVegetable);
            sequence.append(person);
        }
    }
    ShakerSort<Person> shakerSort;
    ShellSort<Person> shellSort;
    Sequence<Person> *result;
    if (selectedIndex1 == 0) {
        if (selectedIndex2 == 0) {
            if (selectedIndex3 == 0) {
                result = shakerSort.sort(sequence, ascendingComparatorString_BySize_person_byFirstName);
            }
            if (selectedIndex3 == 1) {
                result = shakerSort.sort(sequence, descendingComparatorString_BySize_person_byFirstName);
            }
            if (selectedIndex3 == 2) {
                result = shakerSort.sort(sequence, ascendingComparatorString_ByABC_person_byFirstName);
            }
            if (selectedIndex3 == 3) {
                result = shakerSort.sort(sequence, descendingComparatorString_ByABC_person_byFirstName);
            }
        }
        if (selectedIndex2 == 1) {
            if (selectedIndex3 == 0) {
                result = shakerSort.sort(sequence, ascendingComparatorString_BySize_person_bySecondName);
            }
            if (selectedIndex3 == 1) {
                result = shakerSort.sort(sequence, descendingComparatorString_BySize_person_bySecondName);
            }
            if (selectedIndex3 == 2) {
                result = shakerSort.sort(sequence, ascendingComparatorString_ByABC_person_bySecondName);
            }
            if (selectedIndex3 == 3) {
                result = shakerSort.sort(sequence, descendingComparatorString_ByABC_person_bySecondName);
            }
        }
        if (selectedIndex2 == 2) {
            if (selectedIndex3 == 0) {
                result = shakerSort.sort(sequence, ascendingComparatorString_BySize_person_byThirdName);
            }
            if (selectedIndex3 == 1) {
                result = shakerSort.sort(sequence, descendingComparatorString_BySize_person_byThirdName);
            }
            if (selectedIndex3 == 2) {
                result = shakerSort.sort(sequence, ascendingComparatorString_ByABC_person_byThirdName);
            }
            if (selectedIndex3 == 3) {
                result = shakerSort.sort(sequence, descendingComparatorString_ByABC_person_byThirdName);
            }
        }
        if (selectedIndex2 == 3) {
            if (selectedIndex3 == 4) {
                result = shakerSort.sort(sequence, ascendingComparator_person_byBirthDay);
            }
            if (selectedIndex3 == 5) {
                result = shakerSort.sort(sequence, descendingComparator_person_byBirthDay);
            }
        }
        if (selectedIndex2 == 4) {
            if (selectedIndex3 == 4) {
                result = shakerSort.sort(sequence, ascendingComparator_person_byBirthMonth);
            }
            if (selectedIndex3 == 5) {
                result = shakerSort.sort(sequence, descendingComparator_person_byBirthMonth);
            }
        }
        if (selectedIndex2 == 5) {
            if (selectedIndex3 == 4) {
                result = shakerSort.sort(sequence, ascendingComparator_person_byBirthYear);
            }
            if (selectedIndex3 == 5) {
                result = shakerSort.sort(sequence, descendingComparator_person_byBirthYear);
            }
        }
        if (selectedIndex2 == 6) {
            if (selectedIndex3 == 4) {
                result = shakerSort.sort(sequence, ascendingComparator_person_byPassportSeries);
            }
            if (selectedIndex3 == 5) {
                result = shakerSort.sort(sequence, descendingComparator_person_byPassportSeries);
            }
        }
        if (selectedIndex2 == 7) {
            if (selectedIndex3 == 4) {
                result = shakerSort.sort(sequence, ascendingComparator_person_byPassportNumber);
            }
            if (selectedIndex3 == 5) {
                result = shakerSort.sort(sequence, descendingComparator_person_byPassportNumber);
            }
        }
        if (selectedIndex2 == 8) {
            if (selectedIndex3 == 4) {
                result = shakerSort.sort(sequence, ascendingComparator_person_byDayOfIssuePassport);
            }
            if (selectedIndex3 == 5) {
                result = shakerSort.sort(sequence, descendingComparator_person_byDayOfIssuePassport);
            }
        }
        if (selectedIndex2 == 9) {
            if (selectedIndex3 == 4){
                result = shakerSort.sort(sequence, ascendingComparator_person_byMonthOfIssuePassport);
            }
            if (selectedIndex3 == 5) {
                result = shakerSort.sort(sequence, descendingComparator_person_byMonthOfIssuePassport);
            }
        }
        if (selectedIndex2 == 10) {
            if (selectedIndex3 == 4) {
                result = shakerSort.sort(sequence, ascendingComparator_person_byYearOfIssuePassport);
            }
            if (selectedIndex3 == 5) {
                result = shakerSort.sort(sequence, descendingComparator_person_byYearOfIssuePassport);
            }
        }
        if (selectedIndex2 == 11) {
            if (selectedIndex3 == 4) {
                result = shakerSort.sort(sequence, ascendingComparator_person_byNumberOfSisters);
            }
            if (selectedIndex3 == 5) {
                result = shakerSort.sort(sequence, descendingComparator_person_byNumberOfSisters);
            }
        }
        if (selectedIndex2 == 12) {
            if (selectedIndex3 == 4) {
                result = shakerSort.sort(sequence, ascendingComparator_person_byNumberOfBrothers);
            }
            if (selectedIndex3 == 5) {
                result = shakerSort.sort(sequence, descendingComparator_person_byNumberOfBrothers);
            }
        }
        if (selectedIndex2 == 13) {
            if (selectedIndex3 == 4) {
                result = shakerSort.sort(sequence, ascendingComparator_person_byFullYears);
            }
            if (selectedIndex3 == 5) {
                result = shakerSort.sort(sequence, descendingComparator_person_byFullYears);
            }
        }
        if (selectedIndex2 == 14) {
            if (selectedIndex3 == 4) {
                result = shakerSort.sort(sequence, ascendingComparator_person_byYearOfAdmissionToSchool);
            }
            if (selectedIndex3 == 5) {
                result = shakerSort.sort(sequence, descendingComparator_person_byYearOfAdmissionToSchool);
            }
        }
        if (selectedIndex2 == 15) {
            if (selectedIndex3 == 4) {
                result = shakerSort.sort(sequence, ascendingComparator_person_byYearOfGraduation);
            }
            if (selectedIndex3 == 5) {
                result = shakerSort.sort(sequence, descendingComparator_person_byYearOfGraduation);
            }
        }
        if (selectedIndex2 == 16) {
            if (selectedIndex3 == 4) {
                result = shakerSort.sort(sequence, ascendingComparator_person_Height);
            }
            if (selectedIndex3 == 5) {
                result = shakerSort.sort(sequence, descendingComparator_person_Height);
            }
        }
        if (selectedIndex2 == 17) {
            if (selectedIndex3 == 4) {
                result = shakerSort.sort(sequence, ascendingComparator_person_byWeight);
            }
            if (selectedIndex3 == 5) {
                result = shakerSort.sort(sequence, descendingComparator_person_byWeight);
            }
        }
        if (selectedIndex2 == 18) {
            if (selectedIndex3 == 0) {
                result = shakerSort.sort(sequence, ascendingComparatorString_BySize_person_byFavoriteFruit);
            }
            if (selectedIndex3 == 1) {
                result = shakerSort.sort(sequence, descendingComparatorString_BySize_person_byFavoriteFruit);
            }
            if (selectedIndex3 == 2) {
                result = shakerSort.sort(sequence, ascendingComparatorString_ByABC_person_byFavoriteFruit);
            }
            if (selectedIndex3 == 3) {
                result = shakerSort.sort(sequence, descendingComparatorString_ByABC_person_byFavoriteFruit);
            }
        }
        if (selectedIndex2 == 19) {
            if (selectedIndex3 == 0) {
                result = shakerSort.sort(sequence, ascendingComparatorString_BySize_person_byFavoriteVegetable);
            }
            if (selectedIndex3 == 1) {
                result = shakerSort.sort(sequence, descendingComparatorString_BySize_person_byFavoriteVegetable);
            }
            if (selectedIndex3 == 2) {
                result = shakerSort.sort(sequence, ascendingComparatorString_ByABC_person_byFavoriteVegetable);
            }
            if (selectedIndex3 == 3) {
                result = shakerSort.sort(sequence, descendingComparatorString_ByABC_person_byFavoriteVegetable);
            }
        }
    }
    if (selectedIndex1 == 1) {
        if (selectedIndex2 == 0) {
            if (selectedIndex3 == 0) {
                result = shellSort.sort(sequence, ascendingComparatorString_BySize_person_byFirstName);
            }
            if (selectedIndex3 == 1) {
                result = shellSort.sort(sequence, descendingComparatorString_BySize_person_byFirstName);
            }
            if (selectedIndex3 == 2) {
                result = shellSort.sort(sequence, ascendingComparatorString_ByABC_person_byFirstName);
            }
            if (selectedIndex3 == 3) {
                result = shellSort.sort(sequence, descendingComparatorString_ByABC_person_byFirstName);
            }
        }
        if (selectedIndex2 == 1) {
            if (selectedIndex3 == 0) {
                result = shellSort.sort(sequence, ascendingComparatorString_BySize_person_bySecondName);
            }
            if (selectedIndex3 == 1) {
                result = shellSort.sort(sequence, descendingComparatorString_BySize_person_bySecondName);
            }
            if (selectedIndex3 == 2) {
                result = shellSort.sort(sequence, ascendingComparatorString_ByABC_person_bySecondName);
            }
            if (selectedIndex3 == 3) {
                result = shellSort.sort(sequence, descendingComparatorString_ByABC_person_bySecondName);
            }
        }
        if (selectedIndex2 == 2) {
            if (selectedIndex3 == 0) {
                result = shellSort.sort(sequence, ascendingComparatorString_BySize_person_byThirdName);
            }
            if (selectedIndex3 == 1) {
                result = shellSort.sort(sequence, descendingComparatorString_BySize_person_byThirdName);
            }
            if (selectedIndex3 == 2) {
                result = shellSort.sort(sequence, ascendingComparatorString_ByABC_person_byThirdName);
            }
            if (selectedIndex3 == 3) {
                result = shellSort.sort(sequence, descendingComparatorString_ByABC_person_byThirdName);
            }
        }
        if (selectedIndex2 == 3) {
            if (selectedIndex3 == 4) {
                result = shellSort.sort(sequence, ascendingComparator_person_byBirthDay);
            }
            if (selectedIndex3 == 5) {
                result = shellSort.sort(sequence, descendingComparator_person_byBirthDay);
            }
        }
        if (selectedIndex2 == 4) {
            if (selectedIndex3 == 4) {
                result = shellSort.sort(sequence, ascendingComparator_person_byBirthMonth);
            }
            if (selectedIndex3 == 5) {
                result = shellSort.sort(sequence, descendingComparator_person_byBirthMonth);
            }
        }
        if (selectedIndex2 == 5) {
            if (selectedIndex3 == 4) {
                result = shellSort.sort(sequence, ascendingComparator_person_byBirthYear);
            }
            if (selectedIndex3 == 5) {
                result = shellSort.sort(sequence, descendingComparator_person_byBirthYear);
            }
        }
        if (selectedIndex2 == 6) {
            if (selectedIndex3 == 4) {
                result = shellSort.sort(sequence, ascendingComparator_person_byPassportSeries);
            }
            if (selectedIndex3 == 5) {
                result = shellSort.sort(sequence, descendingComparator_person_byPassportSeries);
            }
        }
        if (selectedIndex2 == 7) {
            if (selectedIndex3 == 4) {
                result = shellSort.sort(sequence, ascendingComparator_person_byPassportNumber);
            }
            if (selectedIndex3 == 5) {
                result = shellSort.sort(sequence, descendingComparator_person_byPassportNumber);
            }
        }
        if (selectedIndex2 == 8) {
            if (selectedIndex3 == 4) {
                result = shellSort.sort(sequence, ascendingComparator_person_byDayOfIssuePassport);
            }
            if (selectedIndex3 == 5) {
                result = shellSort.sort(sequence, descendingComparator_person_byDayOfIssuePassport);
            }
        }
        if (selectedIndex2 == 9) {
            if (selectedIndex3 == 4){
                result = shellSort.sort(sequence, ascendingComparator_person_byMonthOfIssuePassport);
            }
            if (selectedIndex3 == 5) {
                result = shellSort.sort(sequence, descendingComparator_person_byMonthOfIssuePassport);
            }
        }
        if (selectedIndex2 == 10) {
            if (selectedIndex3 == 4) {
                result = shellSort.sort(sequence, ascendingComparator_person_byYearOfIssuePassport);
            }
            if (selectedIndex3 == 5) {
                result = shellSort.sort(sequence, descendingComparator_person_byYearOfIssuePassport);
            }
        }
        if (selectedIndex2 == 11) {
            if (selectedIndex3 == 4) {
                result = shellSort.sort(sequence, ascendingComparator_person_byNumberOfSisters);
            }
            if (selectedIndex3 == 5) {
                result = shellSort.sort(sequence, descendingComparator_person_byNumberOfSisters);
            }
        }
        if (selectedIndex2 == 12) {
            if (selectedIndex3 == 4) {
                result = shellSort.sort(sequence, ascendingComparator_person_byNumberOfBrothers);
            }
            if (selectedIndex3 == 5) {
                result = shellSort.sort(sequence, descendingComparator_person_byNumberOfBrothers);
            }
        }
        if (selectedIndex2 == 13) {
            if (selectedIndex3 == 4) {
                result = shellSort.sort(sequence, ascendingComparator_person_byFullYears);
            }
            if (selectedIndex3 == 5) {
                result = shellSort.sort(sequence, descendingComparator_person_byFullYears);
            }
        }
        if (selectedIndex2 == 14) {
            if (selectedIndex3 == 4) {
                result = shellSort.sort(sequence, ascendingComparator_person_byYearOfAdmissionToSchool);
            }
            if (selectedIndex3 == 5) {
                result = shellSort.sort(sequence, descendingComparator_person_byYearOfAdmissionToSchool);
            }
        }
        if (selectedIndex2 == 15) {
            if (selectedIndex3 == 4) {
                result = shellSort.sort(sequence, ascendingComparator_person_byYearOfGraduation);
            }
            if (selectedIndex3 == 5) {
                result = shellSort.sort(sequence, descendingComparator_person_byYearOfGraduation);
            }
        }
        if (selectedIndex2 == 16) {
            if (selectedIndex3 == 4) {
                result = shellSort.sort(sequence, ascendingComparator_person_Height);
            }
            if (selectedIndex3 == 5) {
                result = shellSort.sort(sequence, descendingComparator_person_Height);
            }
        }
        if (selectedIndex2 == 17) {
            if (selectedIndex3 == 4) {
                result = shellSort.sort(sequence, ascendingComparator_person_byWeight);
            }
            if (selectedIndex3 == 5) {
                result = shellSort.sort(sequence, descendingComparator_person_byWeight);
            }
        }
        if (selectedIndex2 == 18) {
            if (selectedIndex3 == 0) {
                result = shellSort.sort(sequence, ascendingComparatorString_BySize_person_byFavoriteFruit);
            }
            if (selectedIndex3 == 1) {
                result = shellSort.sort(sequence, descendingComparatorString_BySize_person_byFavoriteFruit);
            }
            if (selectedIndex3 == 2) {
                result = shellSort.sort(sequence, ascendingComparatorString_ByABC_person_byFavoriteFruit);
            }
            if (selectedIndex3 == 3) {
                result = shellSort.sort(sequence, descendingComparatorString_ByABC_person_byFavoriteFruit);
            }
        }
        if (selectedIndex2 == 19) {
            if (selectedIndex3 == 0) {
                result = shellSort.sort(sequence, ascendingComparatorString_BySize_person_byFavoriteVegetable);
            }
            if (selectedIndex3 == 1) {
                result = shellSort.sort(sequence, descendingComparatorString_BySize_person_byFavoriteVegetable);
            }
            if (selectedIndex3 == 2) {
                result = shellSort.sort(sequence, ascendingComparatorString_ByABC_person_byFavoriteVegetable);
            }
            if (selectedIndex3 == 3) {
                result = shellSort.sort(sequence, descendingComparatorString_ByABC_person_byFavoriteVegetable);
            }
        }
    }
    std::ofstream outFile("result.txt");
    for (int i = 0; i < result->getLength(); i++) {
        const Person& element = result->get(i);
        outFile << element.getFirstName() <<  " " << element.getSecondName() <<  " " <<  element.getThirdName() <<  " " <<  element.getBirthDay() <<  " " <<  element.getBirthMonth() <<  " " <<  element.getBirthYear() <<  " " <<  element.getPassportSeries() <<  " " <<  element.getPassportNumber() <<  " " <<  element.getDayOfIssuePassport() <<  " " <<  element.getMonthOfIssuePassport() <<  " " <<  element.getYearOfIssuePassport() <<  " " <<  element.getNumberOfSisters() <<  " " <<  element.getNumberOfBrothers() <<  " " <<  element.getFullYears() <<  " " <<  element.getYearOfAdmissionToSchool() <<  " " <<  element.getYearOfGraduation() <<  " " <<  element.getHeight() <<  " " <<  element.getWeight() <<  " " <<  element.getFavoriteFruit() <<  " " <<  element.getFavoriteVegetable() <<std::endl;
    }
    outFile.close();
}

void createComboBox1(QComboBox* comboBox) {
    comboBox->addItem("ShakerSort");
    comboBox->addItem("Shell Sort");

}

void createComboBox2(QComboBox* comboBox) {
    comboBox->addItem("First name");
    comboBox->addItem("Second name");
    comboBox->addItem("Third name");
    comboBox->addItem("Birth day");
    comboBox->addItem("Birth month");
    comboBox->addItem("Birth year");
    comboBox->addItem("Passport series");
    comboBox->addItem("Passport number");
    comboBox->addItem("Day of issue passport");
    comboBox->addItem("Month of issue passport");
    comboBox->addItem("Year of issue passport");
    comboBox->addItem("Number of sisters");
    comboBox->addItem("Number of brothers");
    comboBox->addItem("Full years");
    comboBox->addItem("Year of admission to school");
    comboBox->addItem("Year of graduation");
    comboBox->addItem("Height");
    comboBox->addItem("Weight");
    comboBox->addItem("Favorite fruit");
    comboBox->addItem("Favorite vegetable");
}

void createComboBox3(QComboBox* comboBox) {
    comboBox->addItem("By ascending string size");
    comboBox->addItem("By descending string size");
    comboBox->addItem("Alphabetically");
    comboBox->addItem("Opposite alphabetically");
    comboBox->addItem("By ascending order");
    comboBox->addItem("By descending order");
}

int updateSelectedIndex1(QComboBox *comboBox) {
    selectedIndex1 = comboBox->currentIndex();
    return selectedIndex1;
}

int updateSelectedIndex2(QComboBox *comboBox) {
    selectedIndex2 = comboBox->currentIndex();
    return selectedIndex2;
}

int updateSelectedIndex3(QComboBox *comboBox) {
    selectedIndex3 = comboBox->currentIndex();
    return selectedIndex3;
}

std::string selectFile() {
    QString fileName = QFileDialog::getOpenFileName(nullptr, "Choose file", "", "Все файлы (*.*)");
    if (!fileName.isEmpty()) {
        return fileName.toStdString();
    }
    return "";
}

QTableWidget* createTable1() {
    QTableWidget *table = new QTableWidget(12, 6);
    table->setStyleSheet("QTableWidget {background-color:pink;}"
        "QHeaderView::section {background-color: pink; color: black;}"
        "QTableWidget::item {color: black;}");
    table->setHorizontalHeaderLabels(QStringList() << "Type of sequence" << "Type of elements" << "Type of comparator" << "Amount of elements" << "Shaker Sort" << "Shell Sort");
    table->setColumnWidth(0, 110);
    table->setColumnWidth(1, 110);
    table->setColumnWidth(2, 180);
    table->setColumnWidth(3, 150);
    table->setColumnWidth(4, 150);
    table->setColumnWidth(5, 150);
    table->setItem(0, 0, new QTableWidgetItem("Dynamic Array"));
    table->setItem(1, 0, new QTableWidgetItem("Dynamic Array"));
    table->setItem(2, 0, new QTableWidgetItem("Linked List"));
    table->setItem(3, 0, new QTableWidgetItem("Linked List"));
    table->setItem(4, 0, new QTableWidgetItem("Dynamic Array"));
    table->setItem(5, 0, new QTableWidgetItem("Dynamic Array"));
    table->setItem(6, 0, new QTableWidgetItem("Linked List"));
    table->setItem(7, 0, new QTableWidgetItem("Linked List"));
    table->setItem(8, 0, new QTableWidgetItem("Dynamic Array"));
    table->setItem(9, 0, new QTableWidgetItem("Dynamic Array"));
    table->setItem(10, 0, new QTableWidgetItem("Linked List"));
    table->setItem(11, 0, new QTableWidgetItem("linked List"));
    table->setItem(0, 1, new QTableWidgetItem("int"));
    table->setItem(1, 1, new QTableWidgetItem("int"));
    table->setItem(2, 1, new QTableWidgetItem("int"));
    table->setItem(3, 1, new QTableWidgetItem("int"));
    table->setItem(4, 1, new QTableWidgetItem("float"));
    table->setItem(5, 1, new QTableWidgetItem("float"));
    table->setItem(6, 1, new QTableWidgetItem("float"));
    table->setItem(7, 1, new QTableWidgetItem("float"));
    table->setItem(8, 1, new QTableWidgetItem("char"));
    table->setItem(9, 1, new QTableWidgetItem("char"));
    table->setItem(10, 1, new QTableWidgetItem("char"));
    table->setItem(11, 1, new QTableWidgetItem("char"));
    table->setItem(0, 2, new QTableWidgetItem("ascending comparator"));
    table->setItem(1, 2, new QTableWidgetItem("descending comparator"));
    table->setItem(2, 2, new QTableWidgetItem("ascending comparator"));
    table->setItem(3, 2, new QTableWidgetItem("descending comparator"));
    table->setItem(4, 2, new QTableWidgetItem("ascending comparator"));
    table->setItem(5, 2, new QTableWidgetItem("descending comparator"));
    table->setItem(6, 2, new QTableWidgetItem("ascending comparator"));
    table->setItem(7, 2, new QTableWidgetItem("descending comparator"));
    table->setItem(8, 2, new QTableWidgetItem("ascending comparator"));
    table->setItem(9, 2, new QTableWidgetItem("descending comparator"));
    table->setItem(10, 2, new QTableWidgetItem("ascending comparator"));
    table->setItem(11, 2, new QTableWidgetItem("descending comparator"));
    TestShakerSort testShakerSort;
    TestShellSort testShellSort;
    int amount1_ShakerSort{};
    double time1_ShakerSort{};
    int amount1_ShellSort{};
    double time1_ShellSort{};
    testShakerSort.testInt_ascendingComparator_DynamicArray_ShakerSort(time1_ShakerSort, amount1_ShakerSort);
    QTableWidgetItem *item10_ShakerSort = new QTableWidgetItem(QString::number(amount1_ShakerSort));
    table->setItem(0, 3, item10_ShakerSort);
    QTableWidgetItem *item11_ShakerSort = new QTableWidgetItem(QString::number(time1_ShakerSort));
    table->setItem(0, 4, item11_ShakerSort);
    testShellSort.testInt_ascendingComparator_DynamicArray_ShellSort(time1_ShellSort, amount1_ShellSort);
    QTableWidgetItem *item10_ShellSort = new QTableWidgetItem(QString::number(time1_ShellSort));
    table->setItem(0, 5, item10_ShellSort);
    int amount2_ShakerSort{};
    double time2_ShakerSort{};
    int amount2_ShellSort{};
    double time2_ShellSort{};
    testShakerSort.testInt_descendingComparator_DynamicArray_ShakerSort(time2_ShakerSort, amount2_ShakerSort);
    QTableWidgetItem *item20_ShakerSort = new QTableWidgetItem(QString::number(amount2_ShakerSort));
    table->setItem(1, 3, item20_ShakerSort);
    QTableWidgetItem *item21_ShakerSort = new QTableWidgetItem(QString::number(time2_ShakerSort));
    table->setItem(1, 4, item21_ShakerSort);
    testShellSort.testInt_descendingComparator_DynamicArray_ShellSort(time2_ShellSort, amount2_ShellSort);
    QTableWidgetItem *item20_ShellSort = new QTableWidgetItem(QString::number(time2_ShellSort));
    table->setItem(1, 5, item20_ShellSort);
    int amount3_ShakerSort{};
    double time3_ShakerSort{};
    int amount3_ShellSort{};
    double time3_ShellSort{};
    testShakerSort.testInt_ascendingComparator_LinkedList_ShakerSort(time3_ShakerSort, amount3_ShakerSort);
    QTableWidgetItem *item30_ShakerSort = new QTableWidgetItem(QString::number(amount3_ShakerSort));
    table->setItem(2, 3, item30_ShakerSort);
    QTableWidgetItem *item31_ShakerSort = new QTableWidgetItem(QString::number(time3_ShakerSort));
    table->setItem(2, 4, item31_ShakerSort);
    testShellSort.testInt_ascendingComparator_LinkedList_ShellSort(time3_ShellSort, amount3_ShellSort);
    QTableWidgetItem *item30_ShellSort = new QTableWidgetItem(QString::number(time3_ShellSort));
    table->setItem(2, 5, item30_ShellSort);
    int amount4_ShakerSort{};
    double time4_ShakerSort{};
    int amount4_ShellSort{};
    double time4_ShellSort{};
    testShakerSort.testInt_descendingComparator_LinkedList_ShakerSort(time4_ShakerSort, amount4_ShakerSort);
    QTableWidgetItem *item40_ShakerSort = new QTableWidgetItem(QString::number(amount4_ShakerSort));
    table->setItem(3, 3, item40_ShakerSort);
    QTableWidgetItem *item41_ShakerSort = new QTableWidgetItem(QString::number(time4_ShakerSort));
    table->setItem(3, 4, item41_ShakerSort);
    testShellSort.testInt_descendingComparator_LinkedList_ShellSort(time4_ShellSort, amount4_ShellSort);
    QTableWidgetItem *item40_ShellSort = new QTableWidgetItem(QString::number(time4_ShellSort));
    table->setItem(3, 5, item40_ShellSort);
    int amount5_ShakerSort{};
    double time5_ShakerSort{};
    int amount5_ShellSort{};
    double time5_ShellSort{};
    testShakerSort.testFloat_ascendingComparator_DynamicArray_ShakerSort(time5_ShakerSort, amount5_ShakerSort);
    QTableWidgetItem *item50_ShakerSort = new QTableWidgetItem(QString::number(amount5_ShakerSort));
    table->setItem(4, 3, item50_ShakerSort);
    QTableWidgetItem *item51_ShakerSort = new QTableWidgetItem(QString::number(time5_ShakerSort));
    table->setItem(4, 4, item51_ShakerSort);
    testShellSort.testFloat_ascendingComparator_DynamicArray_ShellSort(time5_ShellSort, amount5_ShellSort);
    QTableWidgetItem *item50_ShellSort = new QTableWidgetItem(QString::number(time5_ShellSort));
    table->setItem(4, 5, item50_ShellSort);
    int amount6_ShakerSort{};
    double time6_ShakerSort{};
    int amount6_ShellSort{};
    double time6_ShellSort{};
    testShakerSort.testFloat_descendingComparator_DynamicArray_ShakerSort(time6_ShakerSort, amount6_ShakerSort);
    QTableWidgetItem *item60_ShakerSort = new QTableWidgetItem(QString::number(amount6_ShakerSort));
    table->setItem(5, 3, item60_ShakerSort);
    QTableWidgetItem *item61_ShakerSort = new QTableWidgetItem(QString::number(time6_ShakerSort));
    table->setItem(5, 4, item61_ShakerSort);
    testShellSort.testFloat_descendingComparator_DynamicArray_ShellSort(time6_ShellSort, amount6_ShellSort);
    QTableWidgetItem *item60_ShellSort = new QTableWidgetItem(QString::number(time6_ShellSort));
    table->setItem(5, 5, item60_ShellSort);
    int amount7_ShakerSort{};
    double time7_ShakerSort{};
    int amount7_ShellSort{};
    double time7_ShellSort{};
    testShakerSort.testFloat_ascendingComparator_LinkedList_ShakerSort(time7_ShakerSort, amount7_ShakerSort);
    QTableWidgetItem *item70_ShakerSort = new QTableWidgetItem(QString::number(amount7_ShakerSort));
    table->setItem(6, 3, item70_ShakerSort);
    QTableWidgetItem *item71_ShakerSort = new QTableWidgetItem(QString::number(time7_ShakerSort));
    table->setItem(6, 4, item71_ShakerSort);
    testShellSort.testFloat_ascendingComparator_LinkedList_ShellSort(time7_ShellSort, amount7_ShellSort);
    QTableWidgetItem *item70_ShellSort = new QTableWidgetItem(QString::number(time7_ShellSort));
    table->setItem(6, 5, item70_ShellSort);
    int amount8_ShakerSort{};
    double time8_ShakerSort{};
    int amount8_ShellSort{};
    double time8_ShellSort{};
    testShakerSort.testFloat_descendingComparator_LinkedList_ShakerSort(time8_ShakerSort, amount8_ShakerSort);
    QTableWidgetItem *item80_ShakerSort = new QTableWidgetItem(QString::number(amount8_ShakerSort));
    table->setItem(7, 3, item80_ShakerSort);
    QTableWidgetItem *item81_ShakerSort = new QTableWidgetItem(QString::number(time8_ShakerSort));
    table->setItem(7, 4, item81_ShakerSort);
    testShellSort.testFloat_descendingComparator_LinkedList_ShellSort(time8_ShellSort, amount8_ShellSort);
    QTableWidgetItem *item80_ShellSort = new QTableWidgetItem(QString::number(time8_ShellSort));
    table->setItem(7, 5, item80_ShellSort);
    int amount9_ShakerSort{};
    double time9_ShakerSort{};
    int amount9_ShellSort{};
    double time9_ShellSort{};
    testShakerSort.testChar_ascendingComparator_DynamicArray_ShakerSort(time9_ShakerSort, amount9_ShakerSort);
    QTableWidgetItem *item90_ShakerSort = new QTableWidgetItem(QString::number(amount9_ShakerSort));
    table->setItem(8, 3, item90_ShakerSort);
    QTableWidgetItem *item91_ShakerSort = new QTableWidgetItem(QString::number(time9_ShakerSort));
    table->setItem(8, 4, item91_ShakerSort);
    testShellSort.testChar_ascendingComparator_DynamicArray_ShellSort(time9_ShellSort, amount9_ShellSort);
    QTableWidgetItem *item90_ShellSort = new QTableWidgetItem(QString::number(amount9_ShellSort, time9_ShellSort));
    table->setItem(8, 5, item90_ShellSort);
    int amount10_ShakerSort{};
    double time10_ShakerSort{};
    int amount10_ShellSort{};
    double time10_ShellSort{};
    testShakerSort.testChar_descendingComparator_DynamicArray_ShakerSort(time10_ShakerSort, amount10_ShakerSort);
    QTableWidgetItem *item100_ShakerSort = new QTableWidgetItem(QString::number(amount10_ShakerSort));
    table->setItem(9, 3, item100_ShakerSort);
    QTableWidgetItem *item101_ShakerSort = new QTableWidgetItem(QString::number(time10_ShakerSort));
    table->setItem(9, 4, item101_ShakerSort);
    testShellSort.testChar_descendingComparator_DynamicArray_ShellSort(time10_ShellSort, amount10_ShellSort);
    QTableWidgetItem *item100_ShellSort = new QTableWidgetItem(QString::number(time10_ShellSort));
    table->setItem(9, 5, item100_ShellSort);
    int amount11_ShakerSort{};
    double time11_ShakerSort{};
    int amount11_ShellSort{};
    double time11_ShellSort{};
    testShakerSort.testChar_ascendingComparator_LinkedList_ShakerSort(time11_ShakerSort, amount11_ShakerSort);
    QTableWidgetItem *item110_ShakerSort = new QTableWidgetItem(QString::number(amount11_ShakerSort));
    table->setItem(10, 3, item110_ShakerSort);
    QTableWidgetItem *item111_ShakerSort = new QTableWidgetItem(QString::number(time11_ShakerSort));
    table->setItem(10, 4, item111_ShakerSort);
    testShellSort.testChar_ascendingComparator_LinkedList_ShellSort(time11_ShellSort, amount11_ShellSort);
    QTableWidgetItem *item110_ShellSort = new QTableWidgetItem(QString::number(time11_ShellSort));
    table->setItem(10, 5, item110_ShellSort);
    int amount12_ShakerSort{};
    double time12_ShakerSort{};
    int amount12_ShellSort{};
    double time12_ShellSort{};
    testShakerSort.testChar_descendingComparator_LinkedList_ShakerSort(time12_ShakerSort, amount12_ShakerSort);
    QTableWidgetItem *item120_ShakerSort = new QTableWidgetItem(QString::number(amount12_ShakerSort));
    table->setItem(11, 3, item120_ShakerSort);
    QTableWidgetItem *item121_ShakerSort = new QTableWidgetItem(QString::number(time12_ShakerSort));
    table->setItem(11, 4, item121_ShakerSort);
    testShellSort.testChar_descendingComparator_LinkedList_ShellSort(time12_ShellSort, amount12_ShellSort);
    QTableWidgetItem *item120_ShellSort = new QTableWidgetItem(QString::number(time12_ShellSort));
    table->setItem(11, 5, item120_ShellSort);
    return table;
}

QTableWidget* createTable2() {
    QTableWidget *table = new QTableWidget(19, 6);
    table->setStyleSheet("QTableWidget {background-color:pink;}"
        "QHeaderView::section {background-color: pink; color: black;}"
        "QTableWidget::item {color: black;}");
    table->setHorizontalHeaderLabels(QStringList() << "Type of sequence" << "Type of elements" << "Type of comparator" << "Amount of elements" << "Shaker Sort" << "Shell Sort");
    table->setColumnWidth(0, 110);
    table->setColumnWidth(1, 110);
    table->setColumnWidth(2, 180);
    table->setColumnWidth(3, 150);
    table->setColumnWidth(4, 150);
    table->setColumnWidth(5, 150);
    table->setItem(0, 0, new QTableWidgetItem("Dynamic Array"));
    table->setItem(1, 0, new QTableWidgetItem("Dynamic Array"));
    table->setItem(2, 0, new QTableWidgetItem("Linked List"));
    table->setItem(3, 0, new QTableWidgetItem("Linked List"));
    table->setItem(4, 0, new QTableWidgetItem("Dynamic Array"));
    table->setItem(5, 0, new QTableWidgetItem("Dynamic Array"));
    table->setItem(6, 0, new QTableWidgetItem("Linked List"));
    table->setItem(7, 0, new QTableWidgetItem("Linked List"));
    table->setItem(8, 0, new QTableWidgetItem("Dynamic Array"));
    table->setItem(9, 0, new QTableWidgetItem("Dynamic Array"));
    table->setItem(10, 0, new QTableWidgetItem("Linked List"));
    table->setItem(11, 0, new QTableWidgetItem("linked List"));
    table->setItem(12, 0, new QTableWidgetItem("Dynamic Array"));
    table->setItem(13, 0, new QTableWidgetItem("Dynamic Array"));
    table->setItem(14, 0, new QTableWidgetItem("Linked List"));
    table->setItem(15, 0, new QTableWidgetItem("linked List"));
    table->setItem(16, 0, new QTableWidgetItem("Dynamic Array"));
    table->setItem(17, 0, new QTableWidgetItem("Dynamic Array"));
    table->setItem(18, 0, new QTableWidgetItem("Linked List"));
    table->setItem(19, 0, new QTableWidgetItem("linked List"));
    table->setItem(0, 1, new QTableWidgetItem("int"));
    table->setItem(1, 1, new QTableWidgetItem("int"));
    table->setItem(2, 1, new QTableWidgetItem("int"));
    table->setItem(3, 1, new QTableWidgetItem("int"));
    table->setItem(4, 1, new QTableWidgetItem("float"));
    table->setItem(5, 1, new QTableWidgetItem("float"));
    table->setItem(6, 1, new QTableWidgetItem("float"));
    table->setItem(7, 1, new QTableWidgetItem("float"));
    table->setItem(8, 1, new QTableWidgetItem("char"));
    table->setItem(9, 1, new QTableWidgetItem("char"));
    table->setItem(10, 1, new QTableWidgetItem("char"));
    table->setItem(11, 1, new QTableWidgetItem("char"));
    table->setItem(12, 1, new QTableWidgetItem("string"));
    table->setItem(13, 1, new QTableWidgetItem("string"));
    table->setItem(14, 1, new QTableWidgetItem("string"));
    table->setItem(15, 1, new QTableWidgetItem("string"));
    table->setItem(16, 1, new QTableWidgetItem("string"));
    table->setItem(17, 1, new QTableWidgetItem("string"));
    table->setItem(18, 1, new QTableWidgetItem("string"));
    table->setItem(19, 1, new QTableWidgetItem("string"));
    table->setItem(0, 2, new QTableWidgetItem("ascending comparator"));
    table->setItem(1, 2, new QTableWidgetItem("descending comparator"));
    table->setItem(2, 2, new QTableWidgetItem("ascending comparator"));
    table->setItem(3, 2, new QTableWidgetItem("descending comparator"));
    table->setItem(4, 2, new QTableWidgetItem("ascending comparator"));
    table->setItem(5, 2, new QTableWidgetItem("descending comparator"));
    table->setItem(6, 2, new QTableWidgetItem("ascending comparator"));
    table->setItem(7, 2, new QTableWidgetItem("descending comparator"));
    table->setItem(8, 2, new QTableWidgetItem("ascending comparator"));
    table->setItem(9, 2, new QTableWidgetItem("descending comparator"));
    table->setItem(10, 2, new QTableWidgetItem("ascending comparator"));
    table->setItem(11, 2, new QTableWidgetItem("descending comparator"));
    table->setItem(12, 2, new QTableWidgetItem("ascending comparator by size"));
    table->setItem(13, 2, new QTableWidgetItem("descending comparator by size"));
    table->setItem(14, 2, new QTableWidgetItem("ascending comparator by size"));
    table->setItem(15, 2, new QTableWidgetItem("descending comparator by size"));
    table->setItem(16, 2, new QTableWidgetItem("ascending comparator by ABC"));
    table->setItem(17, 2, new QTableWidgetItem("descending comparator by ABC"));
    table->setItem(18, 2, new QTableWidgetItem("ascending comparator by ABC"));
    table->setItem(19, 2, new QTableWidgetItem("descending comparator by ABC"));
    TestShakerSort testShakerSort;
    TestShellSort testShellSort;
    int amount1_ShakerSort_ForTXT{};
    double time1_ShakerSort_ForTXT{};
    int amount1_ShellSort_ForTXT{};
    double time1_ShellSort_ForTXT{};
    testShakerSort.testInt_ascendingComparator_DynamicArray_ShakerSort(time1_ShakerSort_ForTXT, amount1_ShakerSort_ForTXT);
    QTableWidgetItem *item10_ShakerSort_ForTXT = new QTableWidgetItem(QString::number(amount1_ShakerSort_ForTXT));
    table->setItem(0, 3, item10_ShakerSort_ForTXT);
    QTableWidgetItem *item11_ShakerSort_ForTXT = new QTableWidgetItem(QString::number(time1_ShakerSort_ForTXT));
    table->setItem(0, 4, item11_ShakerSort_ForTXT);
    testShellSort.testInt_ascendingComparator_DynamicArray_ShellSort(time1_ShellSort_ForTXT, amount1_ShellSort_ForTXT);
    QTableWidgetItem *item10_ShellSort_ForTXT = new QTableWidgetItem(QString::number(time1_ShellSort_ForTXT));
    table->setItem(0, 5, item10_ShellSort_ForTXT);
    int amount2_ShakerSort_ForTXT{};
    double time2_ShakerSort_ForTXT{};
    int amount2_ShellSort_ForTXT{};
    double time2_ShellSort_ForTXT{};
    testShakerSort.testInt_descendingComparator_DynamicArray_ShakerSort(time2_ShakerSort_ForTXT, amount2_ShakerSort_ForTXT);
    QTableWidgetItem *item20_ShakerSort_ForTXT = new QTableWidgetItem(QString::number(amount2_ShakerSort_ForTXT));
    table->setItem(1, 3, item20_ShakerSort_ForTXT);
    QTableWidgetItem *item21_ShakerSort_ForTXT = new QTableWidgetItem(QString::number(time2_ShakerSort_ForTXT));
    table->setItem(1, 4, item21_ShakerSort_ForTXT);
    testShellSort.testInt_descendingComparator_DynamicArray_ShellSort(time2_ShellSort_ForTXT, amount2_ShellSort_ForTXT);
    QTableWidgetItem *item20_ShellSort_ForTXT = new QTableWidgetItem(QString::number(time2_ShellSort_ForTXT));
    table->setItem(1, 5, item20_ShellSort_ForTXT);
    int amount3_ShakerSort_ForTXT{};
    double time3_ShakerSort_ForTXT{};
    int amount3_ShellSort_ForTXT{};
    double time3_ShellSort_ForTXT{};
    testShakerSort.testInt_ascendingComparator_LinkedList_ShakerSort(time3_ShakerSort_ForTXT, amount3_ShakerSort_ForTXT);
    QTableWidgetItem *item30_ShakerSort_ForTXT = new QTableWidgetItem(QString::number(amount3_ShakerSort_ForTXT));
    table->setItem(2, 3, item30_ShakerSort_ForTXT);
    QTableWidgetItem *item31_ShakerSort_ForTXT = new QTableWidgetItem(QString::number(time3_ShakerSort_ForTXT));
    table->setItem(2, 4, item31_ShakerSort_ForTXT);
    testShellSort.testInt_ascendingComparator_LinkedList_ShellSort(time3_ShellSort_ForTXT, amount3_ShellSort_ForTXT);
    QTableWidgetItem *item30_ShellSort_ForTXT = new QTableWidgetItem(QString::number(time3_ShellSort_ForTXT));
    table->setItem(2, 5, item30_ShellSort_ForTXT);
    int amount4_ShakerSort_ForTXT{};
    double time4_ShakerSort_ForTXT{};
    int amount4_ShellSort_ForTXT{};
    double time4_ShellSort_ForTXT{};
    testShakerSort.testInt_descendingComparator_LinkedList_ShakerSort(time4_ShakerSort_ForTXT, amount4_ShakerSort_ForTXT);
    QTableWidgetItem *item40_ShakerSort_ForTXT = new QTableWidgetItem(QString::number(amount4_ShakerSort_ForTXT));
    table->setItem(3, 3, item40_ShakerSort_ForTXT);
    QTableWidgetItem *item41_ShakerSort_ForTXT = new QTableWidgetItem(QString::number(time4_ShakerSort_ForTXT));
    table->setItem(3, 4, item41_ShakerSort_ForTXT);
    testShellSort.testInt_descendingComparator_LinkedList_ShellSort(time4_ShellSort_ForTXT, amount4_ShellSort_ForTXT);
    QTableWidgetItem *item40_ShellSort_ForTXT = new QTableWidgetItem(QString::number(time4_ShellSort_ForTXT));
    table->setItem(3, 5, item40_ShellSort_ForTXT);
    int amount5_ShakerSort_ForTXT{};
    double time5_ShakerSort_ForTXT{};
    int amount5_ShellSort_ForTXT{};
    double time5_ShellSort_ForTXT{};
    testShakerSort.testFloat_ascendingComparator_DynamicArray_ShakerSort(time5_ShakerSort_ForTXT, amount5_ShakerSort_ForTXT);
    QTableWidgetItem *item50_ShakerSort_ForTXT = new QTableWidgetItem(QString::number(amount5_ShakerSort_ForTXT));
    table->setItem(4, 3, item50_ShakerSort_ForTXT);
    QTableWidgetItem *item51_ShakerSort_ForTXT = new QTableWidgetItem(QString::number(time5_ShakerSort_ForTXT));
    table->setItem(4, 4, item51_ShakerSort_ForTXT);
    testShellSort.testFloat_ascendingComparator_DynamicArray_ShellSort(time5_ShellSort_ForTXT, amount5_ShellSort_ForTXT);
    QTableWidgetItem *item50_ShellSort_ForTXT = new QTableWidgetItem(QString::number(time5_ShellSort_ForTXT));
    table->setItem(4, 5, item50_ShellSort_ForTXT);
    int amount6_ShakerSort_ForTXT{};
    double time6_ShakerSort_ForTXT{};
    int amount6_ShellSort_ForTXT{};
    double time6_ShellSort_ForTXT{};
    testShakerSort.testFloat_descendingComparator_DynamicArray_ShakerSort(time6_ShakerSort_ForTXT, amount6_ShakerSort_ForTXT);
    QTableWidgetItem *item60_ShakerSort_ForTXT = new QTableWidgetItem(QString::number(amount6_ShakerSort_ForTXT));
    table->setItem(5, 3, item60_ShakerSort_ForTXT);
    QTableWidgetItem *item61_ShakerSort_ForTXT = new QTableWidgetItem(QString::number(time6_ShakerSort_ForTXT));
    table->setItem(5, 4, item61_ShakerSort_ForTXT);
    testShellSort.testFloat_descendingComparator_DynamicArray_ShellSort(time6_ShellSort_ForTXT, amount6_ShellSort_ForTXT);
    QTableWidgetItem *item60_ShellSort_ForTXT = new QTableWidgetItem(QString::number(time6_ShellSort_ForTXT));
    table->setItem(5, 5, item60_ShellSort_ForTXT);
    int amount7_ShakerSort_ForTXT{};
    double time7_ShakerSort_ForTXT{};
    int amount7_ShellSort_ForTXT{};
    double time7_ShellSort_ForTXT{};
    testShakerSort.testFloat_ascendingComparator_LinkedList_ShakerSort(time7_ShakerSort_ForTXT, amount7_ShakerSort_ForTXT);
    QTableWidgetItem *item70_ShakerSort_ForTXT = new QTableWidgetItem(QString::number(amount7_ShakerSort_ForTXT));
    table->setItem(6, 3, item70_ShakerSort_ForTXT);
    QTableWidgetItem *item71_ShakerSort_ForTXT= new QTableWidgetItem(QString::number(time7_ShakerSort_ForTXT));
    table->setItem(6, 4, item71_ShakerSort_ForTXT);
    testShellSort.testFloat_ascendingComparator_LinkedList_ShellSort(time7_ShellSort_ForTXT, amount7_ShellSort_ForTXT);
    QTableWidgetItem *item70_ShellSort_ForTXT = new QTableWidgetItem(QString::number(time7_ShellSort_ForTXT));
    table->setItem(6, 5, item70_ShellSort_ForTXT);
    int amount8_ShakerSort_ForTXT{};
    double time8_ShakerSort_ForTXT{};
    int amount8_ShellSort_ForTXT{};
    double time8_ShellSort_ForTXT{};
    testShakerSort.testFloat_descendingComparator_LinkedList_ShakerSort(time8_ShakerSort_ForTXT, amount8_ShakerSort_ForTXT);
    QTableWidgetItem *item80_ShakerSort_ForTXT = new QTableWidgetItem(QString::number(amount8_ShakerSort_ForTXT));
    table->setItem(7, 3, item80_ShakerSort_ForTXT);
    QTableWidgetItem *item81_ShakerSort_ForTXT = new QTableWidgetItem(QString::number(time8_ShakerSort_ForTXT));
    table->setItem(7, 4, item81_ShakerSort_ForTXT);
    testShellSort.testFloat_descendingComparator_LinkedList_ShellSort(time8_ShellSort_ForTXT, amount8_ShellSort_ForTXT);
    QTableWidgetItem *item80_ShellSort_ForTXT = new QTableWidgetItem(QString::number(time8_ShellSort_ForTXT));
    table->setItem(7, 5, item80_ShellSort_ForTXT);
    int amount9_ShakerSort_ForTXT{};
    double time9_ShakerSort_ForTXT{};
    int amount9_ShellSort_ForTXT{};
    double time9_ShellSort_ForTXT{};
    testShakerSort.testChar_ascendingComparator_DynamicArray_ShakerSort(time9_ShakerSort_ForTXT, amount9_ShakerSort_ForTXT);
    QTableWidgetItem *item90_ShakerSort_ForTXT = new QTableWidgetItem(QString::number(amount9_ShakerSort_ForTXT));
    table->setItem(8, 3, item90_ShakerSort_ForTXT);
    QTableWidgetItem *item91_ShakerSort_ForTXT = new QTableWidgetItem(QString::number(time9_ShakerSort_ForTXT));
    table->setItem(8, 4, item91_ShakerSort_ForTXT);
    testShellSort.testChar_ascendingComparator_DynamicArray_ShellSort(time9_ShellSort_ForTXT, amount9_ShellSort_ForTXT);
    QTableWidgetItem *item90_ShellSort_ForTXT = new QTableWidgetItem(QString::number(amount9_ShellSort_ForTXT, time9_ShellSort_ForTXT));
    table->setItem(8, 5, item90_ShellSort_ForTXT);
    int amount10_ShakerSort_ForTXT{};
    double time10_ShakerSort_ForTXT{};
    int amount10_ShellSort_ForTXT{};
    double time10_ShellSort_ForTXT{};
    testShakerSort.testChar_descendingComparator_DynamicArray_ShakerSort(time10_ShakerSort_ForTXT, amount10_ShakerSort_ForTXT);
    QTableWidgetItem *item100_ShakerSort_ForTXT = new QTableWidgetItem(QString::number(amount10_ShakerSort_ForTXT));
    table->setItem(9, 3, item100_ShakerSort_ForTXT);
    QTableWidgetItem *item101_ShakerSort_ForTXT = new QTableWidgetItem(QString::number(time10_ShakerSort_ForTXT));
    table->setItem(9, 4, item101_ShakerSort_ForTXT);
    testShellSort.testChar_descendingComparator_DynamicArray_ShellSort(time10_ShellSort_ForTXT, amount10_ShellSort_ForTXT);
    QTableWidgetItem *item100_ShellSort_ForTXT = new QTableWidgetItem(QString::number(time10_ShellSort_ForTXT));
    table->setItem(9, 5, item100_ShellSort_ForTXT);
    int amount11_ShakerSort_ForTXT{};
    double time11_ShakerSort_ForTXT{};
    int amount11_ShellSort_ForTXT{};
    double time11_ShellSort_ForTXT{};
    testShakerSort.testChar_ascendingComparator_LinkedList_ShakerSort(time11_ShakerSort_ForTXT, amount11_ShakerSort_ForTXT);
    QTableWidgetItem *item110_ShakerSort_ForTXT = new QTableWidgetItem(QString::number(amount11_ShakerSort_ForTXT));
    table->setItem(10, 3, item110_ShakerSort_ForTXT);
    QTableWidgetItem *item111_ShakerSort_ForTXT= new QTableWidgetItem(QString::number(time11_ShakerSort_ForTXT));
    table->setItem(10, 4, item111_ShakerSort_ForTXT);
    testShellSort.testChar_ascendingComparator_LinkedList_ShellSort(time11_ShellSort_ForTXT, amount11_ShellSort_ForTXT);
    QTableWidgetItem *item110_ShellSort_ForTXT = new QTableWidgetItem(QString::number(time11_ShellSort_ForTXT));
    table->setItem(10, 5, item110_ShellSort_ForTXT);
    int amount12_ShakerSort_ForTXT{};
    double time12_ShakerSort_ForTXT{};
    int amount12_ShellSort_ForTXT{};
    double time12_ShellSort_ForTXT{};
    testShakerSort.testChar_descendingComparator_LinkedList_ShakerSort(time12_ShakerSort_ForTXT, amount12_ShakerSort_ForTXT);
    QTableWidgetItem *item120_ShakerSort_ForTXT = new QTableWidgetItem(QString::number(amount12_ShakerSort_ForTXT));
    table->setItem(11, 3, item120_ShakerSort_ForTXT);
    QTableWidgetItem *item121_ShakerSort_ForTXT = new QTableWidgetItem(QString::number(time12_ShakerSort_ForTXT));
    table->setItem(11, 4, item121_ShakerSort_ForTXT);
    testShellSort.testChar_descendingComparator_LinkedList_ShellSort(time12_ShellSort_ForTXT, amount12_ShellSort_ForTXT);
    QTableWidgetItem *item120_ShellSort_ForTXT = new QTableWidgetItem(QString::number(time12_ShellSort_ForTXT));
    table->setItem(11, 5, item120_ShellSort_ForTXT);
    int amount13_ShakerSort_ForTXT{};
    double time13_ShakerSort_ForTXT{};
    int amount13_ShellSort_ForTXT{};
    double time13_ShellSort_ForTXT{};
    testShakerSort.testChar_descendingComparator_LinkedList_ShakerSort(time13_ShakerSort_ForTXT, amount13_ShakerSort_ForTXT);
    QTableWidgetItem *item130_ShakerSort_ForTXT = new QTableWidgetItem(QString::number(amount13_ShakerSort_ForTXT));
    table->setItem(12, 3, item130_ShakerSort_ForTXT);
    QTableWidgetItem *item131_ShakerSort_ForTXT = new QTableWidgetItem(QString::number(time13_ShakerSort_ForTXT));
    table->setItem(12, 4, item131_ShakerSort_ForTXT);
    testShellSort.testChar_descendingComparator_LinkedList_ShellSort(time13_ShellSort_ForTXT, amount13_ShellSort_ForTXT);
    QTableWidgetItem *item130_ShellSort_ForTXT = new QTableWidgetItem(QString::number(time13_ShellSort_ForTXT));
    table->setItem(12, 5, item130_ShellSort_ForTXT);
    int amount14_ShakerSort_ForTXT{};
    double time14_ShakerSort_ForTXT{};
    int amount14_ShellSort_ForTXT{};
    double time14_ShellSort_ForTXT{};
    testShakerSort.testChar_descendingComparator_LinkedList_ShakerSort(time14_ShakerSort_ForTXT, amount14_ShakerSort_ForTXT);
    QTableWidgetItem *item140_ShakerSort_ForTXT = new QTableWidgetItem(QString::number(amount14_ShakerSort_ForTXT));
    table->setItem(13, 3, item140_ShakerSort_ForTXT);
    QTableWidgetItem *item141_ShakerSort_ForTXT = new QTableWidgetItem(QString::number(time14_ShakerSort_ForTXT));
    table->setItem(13, 4, item141_ShakerSort_ForTXT);
    testShellSort.testChar_descendingComparator_LinkedList_ShellSort(time14_ShellSort_ForTXT, amount14_ShellSort_ForTXT);
    QTableWidgetItem *item140_ShellSort_ForTXT = new QTableWidgetItem(QString::number(time14_ShellSort_ForTXT));
    table->setItem(13, 5, item140_ShellSort_ForTXT);
    int amount15_ShakerSort_ForTXT{};
    double time15_ShakerSort_ForTXT{};
    int amount15_ShellSort_ForTXT{};
    double time15_ShellSort_ForTXT{};
    testShakerSort.testChar_descendingComparator_LinkedList_ShakerSort(time15_ShakerSort_ForTXT, amount15_ShakerSort_ForTXT);
    QTableWidgetItem *item150_ShakerSort_ForTXT = new QTableWidgetItem(QString::number(amount15_ShakerSort_ForTXT));
    table->setItem(14, 3, item150_ShakerSort_ForTXT);
    QTableWidgetItem *item151_ShakerSort_ForTXT = new QTableWidgetItem(QString::number(time15_ShakerSort_ForTXT));
    table->setItem(14, 4, item151_ShakerSort_ForTXT);
    testShellSort.testChar_descendingComparator_LinkedList_ShellSort(time15_ShellSort_ForTXT, amount15_ShellSort_ForTXT);
    QTableWidgetItem *item150_ShellSort_ForTXT = new QTableWidgetItem(QString::number(time15_ShellSort_ForTXT));
    table->setItem(14, 5, item150_ShellSort_ForTXT);
    int amount16_ShakerSort_ForTXT{};
    double time16_ShakerSort_ForTXT{};
    int amount16_ShellSort_ForTXT{};
    double time16_ShellSort_ForTXT{};
    testShakerSort.testChar_descendingComparator_LinkedList_ShakerSort(time16_ShakerSort_ForTXT, amount16_ShakerSort_ForTXT);
    QTableWidgetItem *item160_ShakerSort_ForTXT = new QTableWidgetItem(QString::number(amount16_ShakerSort_ForTXT));
    table->setItem(15, 3, item160_ShakerSort_ForTXT);
    QTableWidgetItem *item161_ShakerSort_ForTXT = new QTableWidgetItem(QString::number(time16_ShakerSort_ForTXT));
    table->setItem(15, 4, item161_ShakerSort_ForTXT);
    testShellSort.testChar_descendingComparator_LinkedList_ShellSort(time16_ShellSort_ForTXT, amount16_ShellSort_ForTXT);
    QTableWidgetItem *item160_ShellSort_ForTXT = new QTableWidgetItem(QString::number(time16_ShellSort_ForTXT));
    table->setItem(15, 5, item160_ShellSort_ForTXT);
    int amount17_ShakerSort_ForTXT{};
    double time17_ShakerSort_ForTXT{};
    int amount17_ShellSort_ForTXT{};
    double time17_ShellSort_ForTXT{};
    testShakerSort.testChar_descendingComparator_LinkedList_ShakerSort(time17_ShakerSort_ForTXT, amount17_ShakerSort_ForTXT);
    QTableWidgetItem *item170_ShakerSort_ForTXT = new QTableWidgetItem(QString::number(amount17_ShakerSort_ForTXT));
    table->setItem(16, 3, item170_ShakerSort_ForTXT);
    QTableWidgetItem *item171_ShakerSort_ForTXT = new QTableWidgetItem(QString::number(time17_ShakerSort_ForTXT));
    table->setItem(16, 4, item171_ShakerSort_ForTXT);
    testShellSort.testChar_descendingComparator_LinkedList_ShellSort(time17_ShellSort_ForTXT, amount17_ShellSort_ForTXT);
    QTableWidgetItem *item170_ShellSort_ForTXT = new QTableWidgetItem(QString::number(time17_ShellSort_ForTXT));
    table->setItem(16, 5, item170_ShellSort_ForTXT);
    int amount18_ShakerSort_ForTXT{};
    double time18_ShakerSort_ForTXT{};
    int amount18_ShellSort_ForTXT{};
    double time18_ShellSort_ForTXT{};
    testShakerSort.testChar_descendingComparator_LinkedList_ShakerSort(time18_ShakerSort_ForTXT, amount18_ShakerSort_ForTXT);
    QTableWidgetItem *item180_ShakerSort_ForTXT = new QTableWidgetItem(QString::number(amount18_ShakerSort_ForTXT));
    table->setItem(17, 3, item180_ShakerSort_ForTXT);
    QTableWidgetItem *item181_ShakerSort_ForTXT = new QTableWidgetItem(QString::number(time18_ShakerSort_ForTXT));
    table->setItem(17, 4, item181_ShakerSort_ForTXT);
    testShellSort.testChar_descendingComparator_LinkedList_ShellSort(time18_ShellSort_ForTXT, amount18_ShellSort_ForTXT);
    QTableWidgetItem *item180_ShellSort_ForTXT = new QTableWidgetItem(QString::number(time18_ShellSort_ForTXT));
    table->setItem(17, 5, item180_ShellSort_ForTXT);
    int amount19_ShakerSort_ForTXT{};
    double time19_ShakerSort_ForTXT{};
    int amount19_ShellSort_ForTXT{};
    double time19_ShellSort_ForTXT{};
    testShakerSort.testChar_descendingComparator_LinkedList_ShakerSort(time19_ShakerSort_ForTXT, amount19_ShakerSort_ForTXT);
    QTableWidgetItem *item190_ShakerSort_ForTXT = new QTableWidgetItem(QString::number(amount19_ShakerSort_ForTXT));
    table->setItem(18, 3, item190_ShakerSort_ForTXT);
    QTableWidgetItem *item191_ShakerSort_ForTXT = new QTableWidgetItem(QString::number(time19_ShakerSort_ForTXT));
    table->setItem(18, 4, item191_ShakerSort_ForTXT);
    testShellSort.testChar_descendingComparator_LinkedList_ShellSort(time19_ShellSort_ForTXT, amount19_ShellSort_ForTXT);
    QTableWidgetItem *item190_ShellSort_ForTXT = new QTableWidgetItem(QString::number(time19_ShellSort_ForTXT));
    table->setItem(18, 5, item190_ShellSort_ForTXT);
    return table;
}

QWidget* createMainPage(QStackedWidget *stackedWidget) {
    QWidget *page = new QWidget;

    QVBoxLayout *layout = new QVBoxLayout(page);
    QLabel *label = new QLabel;
    label->setText("<font color = 'darkCyan', span style = 'font-size: 20px;'>Sorting</font>");
    label->setAlignment(Qt::AlignHCenter);
    layout->addWidget(label);
    QPushButton *buttonToPage1 = new QPushButton("Run the tests", page);
    buttonToPage1->setStyleSheet("color: darkCyan; background-color: darkGray");
    QPushButton *buttonToPage2 = new QPushButton("Start sorting", page);
    buttonToPage2->setStyleSheet("color: darkCyan; background-color: darkGray");

    layout->addWidget(label);
    layout->addWidget(buttonToPage1);
    layout->addWidget(buttonToPage2);
    page->setLayout(layout);

    QObject::connect(buttonToPage1, &QPushButton::clicked, [=]() { stackedWidget->setCurrentIndex(1); });
    QObject::connect(buttonToPage2, &QPushButton::clicked, [=]() { stackedWidget->setCurrentIndex(2); });

    return page;
}

QWidget* createPage1(QStackedWidget *stackedWidget) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QLabel *label1 = new QLabel;
    label1->setText("<font color = 'darkCyan', span style = 'font-size: 20px;'>Tests</font>");
    label1->setAlignment(Qt::AlignHCenter);
    QPushButton *buttonHome = new QPushButton("Go home", page);
    buttonHome->setStyleSheet("color: darkCyan; background-color: darkGray");
    QLabel *label2 = new QLabel;
    label2->setText("<font color = 'darkCyan', span style = 'font-size: 20px;'>Random sequences</font>");
    label2->setAlignment(Qt::AlignHCenter);
    QLabel *label3 = new QLabel;
    label3->setText("<font color = 'red', span style = 'font-size: 15px;'>The sorting time is indicated in ms</font>");
    QLabel *label4 = new QLabel;
    label4->setText("<font color = 'darkCyan', span style = 'font-size: 20px;'>Sequences from files</font>");
    label4->setAlignment(Qt::AlignHCenter);
    QLabel *label5 = new QLabel;
    label5->setText("<font color = 'red', span style = 'font-size: 15px;'>The sorting is indicated in ms</font>");

    QTableWidget *table1 = createTable1();
    QTableWidget *table2 = createTable2();

    layout->addWidget(label1);
    layout->addWidget(label2);
    layout->addWidget(label3);
    layout->addWidget(table1);
    layout->addWidget(label4);
    layout->addWidget(label5);
    layout->addWidget(table2);
    layout->addWidget(buttonHome);
    page->setLayout(layout);

    QObject::connect(buttonHome, &QPushButton::clicked, [=]() { stackedWidget->setCurrentIndex(0); });

    return page;
}

QWidget* createPage2(QStackedWidget *stackedWidget) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);

    QLabel *label = new QLabel;
    label->setText("<font color = 'darkCyan', span style = 'font-size: 20px;'>Sorting</font>");
    label->setAlignment(Qt::AlignHCenter);

    QPushButton *buttonToPage3 = new QPushButton("Start sorting", page);
    buttonToPage3->setStyleSheet("color: darkCyan; background-color: darkGray");
    QPushButton *buttonHome = new QPushButton("Go home", page);
    buttonHome->setStyleSheet("color: darkCyan; background-color: darkGray");
    QPushButton *chooseFileButton = new QPushButton("Choose file", page);
    chooseFileButton->setStyleSheet("color: darkCyan; background-color: darkGray");

    QComboBox *comboBox1 = new QComboBox;
    createComboBox1(comboBox1);

    QComboBox *comboBox2 = new QComboBox;
    createComboBox2(comboBox2);

    QComboBox *comboBox3 = new QComboBox;
    createComboBox3(comboBox3);

    QObject::connect(comboBox1, &QComboBox::currentIndexChanged, [=]() {
        int currentIndex1 = updateSelectedIndex1(comboBox1);/*currentIndex1 меняется правильно*/
    });
    QObject::connect(comboBox2, &QComboBox::currentIndexChanged, [=]() {
        int currentIndex2 = updateSelectedIndex2(comboBox2);
    });
    QObject::connect(comboBox3, &QComboBox::currentIndexChanged, [=]() {
        int currentIndex3 = updateSelectedIndex3(comboBox3);
    });

    layout->addWidget(label);
    layout->addWidget(chooseFileButton);
    layout->addWidget(comboBox1);
    layout->addWidget(comboBox2);
    layout->addWidget(comboBox3);
    layout->addWidget(buttonToPage3);
    layout->addWidget(buttonHome);
    page->setLayout(layout);

    QObject::connect(buttonToPage3, &QPushButton::clicked, [=]() { stackedWidget->setCurrentIndex(3); });
    QObject::connect(buttonHome, &QPushButton::clicked, [=]() { stackedWidget->setCurrentIndex(0); });
    QObject::connect(chooseFileButton, &QPushButton::clicked, [&]() {
        filePath = selectFile();
        if (!filePath.empty()) {
            qDebug() << "Choosing file:" << QString::fromStdString(filePath);
            startSorting();
        } else {
            qDebug() << "No file selected";
        }
    });

    return page;
}
QWidget* createPage3(QStackedWidget *stackedWidget) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QLabel *label = new QLabel;
    label->setText("<font color = 'darkCyan', span style = 'font-size: 20px;'>Result</font>");
    label->setAlignment(Qt::AlignHCenter);
    QPushButton *buttonHome = new QPushButton("Go home", page);
    buttonHome->setStyleSheet("color: darkCyan; background-color: darkGray");
    QPushButton *openFile = new QPushButton("Open result file");
    openFile->setStyleSheet("color: darkCyan; background-color: darkGray");


    layout->addWidget(label);
    layout->addWidget(openFile);
    layout->addWidget(buttonHome);
    page->setLayout(layout);

    QObject::connect(buttonHome, &QPushButton::clicked, [=]() { stackedWidget->setCurrentIndex(0); });
    QObject::connect(openFile, &QPushButton::clicked, []() {
        QDesktopServices::openUrl(QUrl("result.txt"));
    });

    return page;
}

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QWidget *mainWindow = new QWidget;
    QStackedWidget *stackedWidget = new QStackedWidget(mainWindow);
    stackedWidget->addWidget(createMainPage(stackedWidget));
    stackedWidget->addWidget(createPage1(stackedWidget));
    stackedWidget->addWidget(createPage2(stackedWidget));
    stackedWidget->addWidget(createPage3(stackedWidget));

    QVBoxLayout *mainLayout = new QVBoxLayout(mainWindow);
    mainLayout->addWidget(stackedWidget);

    mainWindow->setLayout(mainLayout);
    mainWindow->resize(935, 500);
    mainWindow->setWindowTitle("Sorting");
    mainWindow->setStyleSheet("background-color: lightGray");
    mainWindow->show();

    return app.exec();
}
