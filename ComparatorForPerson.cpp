#include "ComparatorForPerson.h"
#include "Person.h"

int ascendingComparator_person_byBirthDay(const Person &a, const Person &b) {
    if (a.getBirthDay() < b.getBirthDay()) return -1;
    if (a.getBirthDay() > b.getBirthDay()) return 1;
    return 0;
}
int ascendingComparator_person_byBirthMonth(const Person &a, const Person &b) {
    if (a.getBirthMonth() < b.getBirthMonth()) return -1;
    if (a.getBirthMonth() > b.getBirthMonth()) return 1;
    return 0;
}
int ascendingComparator_person_byBirthYear(const Person &a, const Person &b) {
    if (a.getBirthYear() < b.getBirthYear()) return -1;
    if (a.getBirthYear() > b.getBirthYear()) return 1;
    return 0;
}
int ascendingComparator_person_byPassportSeries(const Person &a, const Person &b) {
    if (a.getPassportSeries() < b.getPassportSeries()) return -1;
    if (a.getPassportSeries() > b.getPassportSeries()) return 1;
    return 0;
}
int ascendingComparator_person_byPassportNumber(const Person &a, const Person &b) {
    if (a.getPassportNumber() < b.getPassportNumber()) return -1;
    if (a.getPassportNumber() > b.getPassportNumber()) return 1;
    return 0;
}
int ascendingComparator_person_byDayOfIssuePassport(const Person &a, const Person &b) {
    if (a.getDayOfIssuePassport() < b.getDayOfIssuePassport()) return -1;
    if (a.getDayOfIssuePassport() > b.getDayOfIssuePassport()) return 1;
    return 0;
}
int ascendingComparator_person_byMonthOfIssuePassport(const Person &a, const Person &b) {
    if (a.getMonthOfIssuePassport() < b.getMonthOfIssuePassport()) return -1;
    if (a.getMonthOfIssuePassport() > b.getMonthOfIssuePassport()) return 1;
    return 0;
}
int ascendingComparator_person_byYearOfIssuePassport(const Person &a, const Person &b) {
    if (a.getYearOfIssuePassport() < b.getYearOfIssuePassport()) return -1;
    if (a.getYearOfIssuePassport() > b.getYearOfIssuePassport()) return 1;
    return 0;
}
int ascendingComparator_person_byNumberOfSisters(const Person &a, const Person &b) {
    if (a.getNumberOfSisters() < b.getNumberOfSisters()) return -1;
    if (a.getNumberOfSisters() > b.getNumberOfSisters()) return 1;
    return 0;
}
int ascendingComparator_person_byNumberOfBrothers(const Person &a, const Person &b) {
    if (a.getNumberOfBrothers() < b.getNumberOfBrothers()) return -1;
    if (a.getNumberOfBrothers() > b.getNumberOfBrothers()) return 1;
    return 0;
}
int ascendingComparator_person_byFullYears(const Person &a, const Person &b) {
    if (a.getFullYears() < b.getFullYears()) return -1;
    if (a.getFullYears() > b.getFullYears()) return 1;
    return 0;
}
int ascendingComparator_person_byYearOfAdmissionToSchool(const Person &a, const Person &b) {
    if (a.getYearOfAdmissionToSchool() < b.getYearOfAdmissionToSchool()) return -1;
    if (a.getYearOfAdmissionToSchool() > b. getYearOfAdmissionToSchool()) return 1;
    return 0;
}
int ascendingComparator_person_byYearOfGraduation(const Person &a, const Person &b) {
    if (a.getYearOfGraduation() < b.getYearOfGraduation()) return -1;
    if (a.getYearOfGraduation() > b.getYearOfGraduation()) return 1;
    return 0;
}
int ascendingComparator_person_Height(const Person &a, const Person &b) {
    if (a.getHeight() < b.getHeight()) return -1;
    if (a.getHeight() > b.getHeight()) return 1;
    return 0;
}
int ascendingComparator_person_byWeight(const Person &a, const Person &b) {
    if (a.getWeight() < b.getWeight()) return -1;
    if (a.getWeight() > b.getWeight()) return 1;
    return 0;
}
int descendingComparator_person_byBirthDay(const Person &a, const Person &b) {
    if (a.getBirthDay() < b.getBirthDay()) return 1;
    if (a.getBirthDay() > b.getBirthDay()) return -1;
    return 0;
}
int descendingComparator_person_byBirthMonth(const Person &a, const Person &b) {
    if (a.getBirthMonth() < b.getBirthMonth()) return 1;
    if (a.getBirthMonth() > b.getBirthMonth()) return -1;
    return 0;
}
int descendingComparator_person_byBirthYear(const Person &a, const Person &b) {
    if (a.getBirthYear() < b.getBirthYear()) return 1;
    if (a.getBirthYear() > b.getBirthYear()) return -1;
    return 0;
}
int descendingComparator_person_byPassportSeries(const Person &a, const Person &b) {
    if (a.getPassportSeries() < b.getPassportSeries()) return 1;
    if (a.getPassportSeries() > b.getPassportSeries()) return -1;
    return 0;
}
int descendingComparator_person_byPassportNumber(const Person &a, const Person &b) {
    if (a.getPassportNumber() < b.getPassportNumber()) return 1;
    if (a.getPassportNumber() > b.getPassportNumber()) return -1;
    return 0;
}
int descendingComparator_person_byDayOfIssuePassport(const Person &a, const Person &b) {
    if (a.getDayOfIssuePassport() < b.getDayOfIssuePassport()) return 1;
    if (a.getDayOfIssuePassport() > b.getDayOfIssuePassport()) return -1;
    return 0;
}
int descendingComparator_person_byMonthOfIssuePassport(const Person &a, const Person &b) {
    if (a.getMonthOfIssuePassport() < b.getMonthOfIssuePassport()) return 1;
    if (a.getMonthOfIssuePassport() > b.getMonthOfIssuePassport()) return -1;
    return 0;
}
int descendingComparator_person_byYearOfIssuePassport(const Person &a, const Person &b) {
    if (a.getYearOfIssuePassport() < b.getYearOfIssuePassport()) return 1;
    if (a.getYearOfIssuePassport() > b.getYearOfIssuePassport()) return -1;
    return 0;
}
int descendingComparator_person_byNumberOfSisters(const Person &a, const Person &b) {
    if (a.getNumberOfSisters() < b.getNumberOfSisters()) return 1;
    if (a.getNumberOfSisters() > b.getNumberOfSisters()) return -1;
    return 0;
}
int descendingComparator_person_byNumberOfBrothers(const Person &a, const Person &b) {
    if (a.getNumberOfBrothers() < b.getNumberOfBrothers()) return 1;
    if (a.getNumberOfBrothers() > b.getNumberOfBrothers()) return -1;
    return 0;
}
int descendingComparator_person_byFullYears(const Person &a, const Person &b) {
    if (a.getFullYears() < b.getFullYears()) return 1;
    if (a.getFullYears() > b.getFullYears()) return -1;
    return 0;
}
int descendingComparator_person_byYearOfAdmissionToSchool(const Person &a, const Person &b) {
    if (a.getYearOfAdmissionToSchool() < b.getYearOfAdmissionToSchool()) return 1;
    if (a.getYearOfAdmissionToSchool() > b. getYearOfAdmissionToSchool()) return -1;
    return 0;
}
int descendingComparator_person_byYearOfGraduation(const Person &a, const Person &b) {
    if (a.getYearOfGraduation() < b.getYearOfGraduation()) return 1;
    if (a.getYearOfGraduation() > b.getYearOfGraduation()) return -1;
    return 0;
}
int descendingComparator_person_Height(const Person &a, const Person &b) {
    if (a.getHeight() < b.getHeight()) return 1;
    if (a.getHeight() > b.getHeight()) return -1;
    return 0;
}
int descendingComparator_person_byWeight(const Person &a, const Person &b) {
    if (a.getWeight() < b.getWeight()) return 1;
    if (a.getWeight() > b.getWeight()) return -1;
    return 0;
}