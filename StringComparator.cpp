#include "ShakerSort.h"
#include <string>
int ascendingComparatorString_BySize(const std::string& a, const std::string& b)
{
    if (a.size() < b.size()) return -1;
    if (a.size() > b.size()) return 1;
    return 0;
}
int descendingComparatorString_BySize(const std::string& a, const std::string& b)
{
    if (a.size() < b.size()) return 1;
    if (a.size() > b.size()) return -1;
    return 0;
}
int ascendingComparatorString_ByABC(const std::string& a, const std::string& b)
{
    if (a.at(0) < b.at(0)) return -1;
    if (a.at(0) > b.at(0)) return 1;
    return 0;
}
int descendingComparatorString_ByABC(const std::string& a, const std::string& b)
{
    if (a.at(0) < b.at(0)) return 1;
    if (a.at(0) > b.at(0)) return -1;
    return 0;
}