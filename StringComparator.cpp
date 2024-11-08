#include <string>
#include "Person.h"
int ascendingComparatorString_BySize(const std::string &a, const std::string &b)
{
    if (a.size() < b.size()) return -1;
    if (a.size() > b.size()) return 1;
    return 0;
}
int descendingComparatorString_BySize(const std::string &a, const std::string &b)
{
    if (a.size() < b.size()) return 1;
    if (a.size() > b.size()) return -1;
    return 0;
}
int ascendingComparatorString_ByABC(const std::string &a, const std::string &b)
{
    if (a.at(0) < b.at(0)) return -1;
    if (a.at(0) > b.at(0)) return 1;
    return 0;
}
int descendingComparatorString_ByABC(const std::string &a, const std::string &b)
{
    if (a.at(0) < b.at(0)) return 1;
    if (a.at(0) > b.at(0)) return -1;
    return 0;
}

int ascendingComparatorString_BySize_person_byFirstName(const Person &a, const Person &b)
{
    if ((a.getFirstName()).size() < (b.getFirstName().size())) return -1;
    if ((a.getFirstName()).size() > (b.getFirstName()).size()) return 1;
    return 0;
}
int ascendingComparatorString_BySize_person_bySecondName(const Person &a, const Person &b)
{
    if ((a.getSecondName()).size() < (b.getSecondName()).size()) return -1;
    if ((a.getSecondName()).size() > (b.getSecondName()).size()) return 1;
    return 0;
}
int ascendingComparatorString_BySize_person_byThirdName(const Person &a, const Person &b)
{
    if ((a.getThirdName()).size() < (b.getThirdName()).size()) return -1;
    if ((a.getThirdName()).size() > (b.getThirdName()).size()) return 1;
    return 0;
}
int ascendingComparatorString_BySize_person_byFavoriteFruit(const Person &a, const Person &b)
{
    if ((a.getFavoriteFruit()).size() < (b.getFavoriteFruit()).size()) return -1;
    if ((a.getFavoriteFruit()).size() > (b.getFavoriteFruit()).size()) return 1;
    return 0;
}
int ascendingComparatorString_BySize_person_byFavoriteVegetable(const Person &a, const Person &b)
{
    if ((a.getFavoriteVegetable()).size() < (b.getFavoriteVegetable()).size()) return -1;
    if ((a.getFavoriteVegetable()).size() > (b.getFavoriteVegetable()).size()) return 1;
    return 0;
}
int descendingComparatorString_BySize_person_byFirstName(const Person &a, const Person &b)
{
    if ((a.getFirstName()).size() < (b.getFirstName().size())) return 1;
    if ((a.getFirstName()).size() > (b.getFirstName()).size()) return -1;
    return 0;
}
int descendingComparatorString_BySize_person_bySecondName(const Person &a, const Person &b)
{
    if ((a.getSecondName()).size() < (b.getSecondName()).size()) return 1;
    if ((a.getSecondName()).size() > (b.getSecondName()).size()) return -1;
    return 0;
}
int descendingComparatorString_BySize_person_byThirdName(const Person &a, const Person &b)
{
    if ((a.getThirdName()).size() < (b.getThirdName()).size()) return 1;
    if ((a.getThirdName()).size() > (b.getThirdName()).size()) return -1;
    return 0;
}
int descendingComparatorString_BySize_person_byFavoriteFruit(const Person &a, const Person &b)
{
    if ((a.getFavoriteFruit()).size() < (b.getFavoriteFruit()).size()) return 1;
    if ((a.getFavoriteFruit()).size() > (b.getFavoriteFruit()).size()) return -1;
    return 0;
}
int descendingComparatorString_BySize_person_byFavoriteVegetable(const Person &a, const Person &b)
{
    if ((a.getFavoriteVegetable()).size() < (b.getFavoriteVegetable()).size()) return 1;
    if ((a.getFavoriteVegetable()).size() > (b.getFavoriteVegetable()).size()) return -1;
    return 0;
}
int ascendingComparatorString_ByABC_person_byFirstName(const Person &a, const Person &b)
{
    if ((a.getFirstName()).at(0) < (b.getFirstName()).at(0)) return -1;
    if ((a.getFirstName()).at(0) > (b.getFirstName()).at(0)) return 1;
    return 0;
}
int ascendingComparatorString_ByABC_person_bySecondName(const Person &a, const Person &b) {
    if ((a.getSecondName()).at(0) < (b.getSecondName()).at(0)) return -1;
    if ((a.getSecondName()).at(0) > (b.getSecondName()).at(0)) return 1;
    return 0;
}
int ascendingComparatorString_ByABC_person_byThirdName(const Person &a, const Person &b) {
    if ((a.getThirdName()).at(0) < (b.getThirdName()).at(0)) return -1;
    if ((a.getThirdName()).at(0) > (b.getThirdName()).at(0)) return 1;
    return 0;
}
int ascendingComparatorString_ByABC_person_byFavoriteFruit(const Person &a, const Person &b) {
    if ((a.getFavoriteFruit()).at(0) < (b.getFavoriteFruit()).at(0)) return -1;
    if ((a.getFavoriteFruit()).at(0) > (b.getFavoriteFruit()).at(0)) return 1;
    return 0;
}
int ascendingComparatorString_ByABC_person_byFavoriteVegetable(const Person &a, const Person &b) {
    if ((a.getFavoriteVegetable()).at(0) < (b.getFavoriteVegetable()).at(0)) return -1;
    if ((a.getFavoriteVegetable()).at(0) > (b.getFavoriteVegetable()).at(0)) return 1;
    return 0;
}
int descendingComparatorString_ByABC_person_byFirstName(const Person &a, const Person &b)
{
    if ((a.getFirstName()).at(0) < (b.getFirstName()).at(0)) return 1;
    if ((a.getFirstName()).at(0) > (b.getFirstName()).at(0)) return -1;
    return 0;
}
int descendingComparatorString_ByABC_person_bySecondName(const Person &a, const Person &b) {
    if ((a.getSecondName()).at(0) < (b.getSecondName()).at(0)) return 1;
    if ((a.getSecondName()).at(0) > (b.getSecondName()).at(0)) return -1;
    return 0;
}
int descendingComparatorString_ByABC_person_byThirdName(const Person &a, const Person &b) {
    if ((a.getThirdName()).at(0) < (b.getThirdName()).at(0)) return 1;
    if ((a.getThirdName()).at(0) > (b.getThirdName()).at(0)) return -1;
    return 0;
}
int descendingComparatorString_ByABC_person_byFavoriteFruit(const Person &a, const Person &b) {
    if ((a.getFavoriteFruit()).at(0) < (b.getFavoriteFruit()).at(0)) return 1;
    if ((a.getFavoriteFruit()).at(0) > (b.getFavoriteFruit()).at(0)) return -1;
    return 0;
}
int descendingComparatorString_ByABC_person_byFavoriteVegetable(const Person &a, const Person &b) {
    if ((a.getFavoriteVegetable()).at(0) < (b.getFavoriteVegetable()).at(0)) return 1;
    if ((a.getFavoriteVegetable()).at(0) > (b.getFavoriteVegetable()).at(0)) return -1;
    return 0;
}