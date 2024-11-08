#pragma once
#include <string>
#include <iostream>

class Person
{
private:
	std::string firstName = "";
	std::string secondName = "";
	std::string thirdName = "";
	int birthDay{};
	int birthMonth{};
	int birthYear{};
	int passportSeries{};
	int passportNumber{};
	int dayOfIssuePassport{};
	int monthOfIssuePassport{};
	int yearOfIssuePassport{};
	int numberOfSisters{};
	int numberOfBrothers{};
	int fullYears{};
	int yearOfAdmissionToSchool{};
	int yearOfGraduation{};
	float height{};
	float weight{};
	std::string favoriteFruit = "";
	std::string favoriteVegetable = "";
public:
	Person() {}
	Person(std::string firstName, std::string secondName, std::string thirdName, int birthDay, int birthMonth, int birthYear, int passportSeries, int passportNumber, int dayOfIssuePassport, int monthOfIssuePassport, int yearOfIssuePassport, int numberOfSisters, int numberOfBrothers, int fullYears, int yearOfAdmissionToSchool, int yearOfGraduation, float height, float weight, std::string favoriteFruit, std::string favoriteVegetable)
	{
		this->firstName = firstName;
		this->secondName = secondName;
		this->thirdName = thirdName;
		this->birthDay = birthDay; 
		this->birthMonth = birthMonth;
		this->birthYear = birthYear;
		this->passportSeries = passportSeries;
		this->passportNumber = passportNumber;
		this->dayOfIssuePassport = dayOfIssuePassport;
		this->monthOfIssuePassport = monthOfIssuePassport;
		this->yearOfIssuePassport = yearOfIssuePassport;
		this->numberOfSisters = numberOfSisters;
		this->numberOfBrothers = numberOfBrothers;
		this->fullYears = fullYears;
		this->yearOfAdmissionToSchool = yearOfAdmissionToSchool;
		this->yearOfGraduation = yearOfGraduation;
		this->height = height;
		this->weight = weight;
		this->favoriteFruit = favoriteFruit;
		this->favoriteVegetable = favoriteVegetable;
	}
	std::string getFirstName() const
	{
		return this->firstName;
	}
	std::string getSecondName() const {
		return this->secondName;
	}
	std::string getThirdName() const
	{
		return this->thirdName;
	}
	int getBirthDay() const
	{
		return this->birthDay;
	}
	int getBirthMonth() const
	{
		return this->birthMonth;
	}
	int getBirthYear() const
	{
		return this->birthYear;
	}
	int getPassportSeries() const
	{
		return this->passportSeries;
	}
	int getPassportNumber() const
	{
		return this->passportNumber;
	}
	int getDayOfIssuePassport() const
	{
		return this->dayOfIssuePassport;
	}
	int getMonthOfIssuePassport() const
	{
		return this->monthOfIssuePassport;
	}
	int getYearOfIssuePassport() const
	{
		return this->yearOfIssuePassport;
	}
	int getNumberOfSisters() const
	{
		return this->numberOfSisters;
	}
	int getNumberOfBrothers() const
	{
		return this->numberOfBrothers;
	}
	int getFullYears() const
	{
		return this->fullYears;
	}
	int getYearOfAdmissionToSchool() const
	{
		return this->yearOfAdmissionToSchool;
	}
	int getYearOfGraduation() const
	{
		return this->yearOfGraduation;
	}
	float getHeight() const
	{
		return this->height;
	}
	float getWeight() const
	{
		return this->weight;
	}
	std::string getFavoriteFruit() const
	{
		return this->favoriteFruit;
	}
	std::string getFavoriteVegetable() const
	{
		return this->favoriteVegetable;
	}
	void setFirstName(std::string otherFirstName) {
		this->firstName = otherFirstName;
	}
	void setSecondName(std::string otherSecondName) {
		this->secondName = otherSecondName;
	}
	void setThirdName(std::string otherThirdName) {
		this->thirdName = otherThirdName;
	}
	void setBirthDay(int otherBirthDay) {
		this->birthDay = otherBirthDay;
	}
	void setBirthMonth(int otherBirthMonth) {
		this->birthMonth = otherBirthMonth;
	}
	void setBirthYear(int otherBirthYear) {
		this->birthYear = otherBirthYear;
	}
	void setPassportSeries(int otherPassportSeries) {
		this->passportSeries = otherPassportSeries;
	}
	void setPassportNumber(int otherPassportNumber) {
		this->passportNumber = otherPassportNumber;
	}
	void setDayOfIssuePassport(int otherDayOfIssuePassport) {
		this->dayOfIssuePassport = otherDayOfIssuePassport;
	}
	void setMonthOfIssuePassport(int otherMonthOfIssuePassport) {
		this->monthOfIssuePassport = otherMonthOfIssuePassport;
	}
	void setYearOfIssuePassport(int otherYearOfIssuePassport) {
		this->yearOfIssuePassport = otherYearOfIssuePassport;
	}
	void setNumberOfSisters(int otherNumberOfSisters) {
		this->numberOfSisters = otherNumberOfSisters;
	}
	void setNumberOfBrothers(int otherNumberOfBrothers) {
		this->numberOfBrothers = otherNumberOfBrothers;
	}
	void setFullYears(int otherFullYears) {
		this->fullYears = otherFullYears;
	}
	void setYearOfAdmissionToSchool(int otherYearOfAdmissionToSchool) {
		this->yearOfAdmissionToSchool = otherYearOfAdmissionToSchool;
	}
	void setYearOfGraduation(int otherYearOfGraduation) {
		this->yearOfGraduation = otherYearOfGraduation;
	}
	void setHeight(float otherHeight) {
		this->height = otherHeight;
	}
	void setWeight(float otherWeight) {
		this->weight = otherWeight;
	}
	void setFavoriteFruit(std::string otherFavoriteFruit) {
		this->favoriteFruit = otherFavoriteFruit;
	}
	void setFavoriteVegetable(std::string otherFavoriteVegetable) {
		this->favoriteVegetable = otherFavoriteVegetable;
	}
	bool operator == (const Person& other)
	{
		if (this->firstName == other.firstName && this->secondName == other.secondName && this->thirdName == other.thirdName && this->birthDay == other.birthDay && this->birthMonth == other.birthMonth && this->birthYear == other.birthYear && this->passportSeries == other.passportSeries && this->passportNumber == other.passportNumber && this->dayOfIssuePassport == other.dayOfIssuePassport && this->monthOfIssuePassport == other.monthOfIssuePassport && this->yearOfIssuePassport == other.yearOfIssuePassport && this->numberOfSisters == other.numberOfSisters && this->numberOfBrothers == other.numberOfBrothers && this->fullYears == other.fullYears && this->yearOfAdmissionToSchool == other.yearOfAdmissionToSchool && this->yearOfGraduation == other.yearOfGraduation && this->height == other.height && this->weight == other.weight && this->favoriteFruit == other.favoriteFruit && this->favoriteVegetable == other.favoriteVegetable)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	friend std::ostream& operator << (std::ostream& os, const Person& person)//��������
	{
		os << person.firstName << " " << person.secondName << " " << person.thirdName << " " << person.birthDay << " " << person.birthMonth << " " << person.birthYear << " " << person.passportSeries << " " << person.passportNumber << " " << person.dayOfIssuePassport << " " << person.monthOfIssuePassport << " " << person.yearOfIssuePassport << " " << person.numberOfSisters << " " << person.numberOfBrothers << " " << person.fullYears << " " << person.yearOfAdmissionToSchool << " " << person.yearOfGraduation << " " << person.height << " " << person.weight << " " << person.favoriteFruit << " " << person.favoriteVegetable << "\n";
		return os;
	}
	friend std::istream& operator >> (std::istream& is, Person& person)//��������
	{
		std::cout << "\nFirst name: ";
		is >> person.firstName;
		std::cout << "\nSecond name: ";
		is >> person.secondName;
		std::cout << "\nThird name: ";
		is >> person.thirdName;
		std::cout << "\nBirth day: ";
		is >> person.birthDay;
		std::cout << "\nBirth month: ";
		is >> person.birthMonth;
		std::cout << "\nBirth year: ";
		is >> person.birthYear;
		std::cout << "\nPassport series: ";
		is >> person.passportSeries;
		std::cout << "\nPassport number: ";
		is >> person.passportNumber;
		std::cout << "\nDay of issue passport: ";
		is >> person.dayOfIssuePassport;
		std::cout << "\nMonth of issue passport: ";
		is >> person.monthOfIssuePassport;
		std::cout << "\nYear of issue passport: ";
		is >> person.yearOfIssuePassport;
		std::cout << "\nNumber of sisters: ";
		is >> person.numberOfSisters;
		std::cout << "\nNumber of brothers: ";
		is >> person >> person.numberOfBrothers;
		std::cout << "\nFull years: ";
		is >> person.fullYears;
		std::cout << "\nYear of admission to school: ";
		is >> person.yearOfAdmissionToSchool;
		std::cout << "\nYear of graduation: ";
		is >> person.yearOfGraduation;
		std::cout << "\nHeight: ";
		is >> person.height;
		std::cout << "\nWeight: ";
		is >> person.weight;
		std::cout << "\nFavorite fruit: ";
		is >> person.favoriteFruit;
		std::cout << "\nFavorite vegetable: ";
		is >> person.favoriteVegetable;
		return is;
	}
};