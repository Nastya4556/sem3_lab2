#pragma once
#include <string>
#include <iostream>

class Person//сделать побольше описаний(полей 20-30), сортировать не прям весь person, а только параметры, которые выбрал пользователь, у каждого из которых есть отдельный number 
{
private:
	std::string name = "";
	std::string surname = "";
	std::string patronymic = "";
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
	Person(std::string name, std::string surname, std::string patronymic, int birthDay, int birthMonth, int birthYear, int passportSeries, int passportNumber, int dayOfIssuePassport, int monthOfIssuePassport, int yearOfIssuePassport, int numberOfSisters, int numberOfBrothers, int fullYears, int yearOfAdmissionToSchool, int yearOfGraduation, float height, float weight, std::string favoriteFruit, std::string favoriteVegetable)
	{
		this->name = name;
		this->surname = surname;
		this->patronymic = patronymic;
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
	std::string getName() const
	{
		return this->name;
	}
	std::string getSurname() const
	{
		return this->surname;
	}
	std::string getPatronymic() const
	{
		return this->patronymic;
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
	bool operator == (const Person& other)
	{
		if (this->name == other.name && this->surname == other.surname && this->patronymic == other.patronymic && this->birthDay == other.birthDay && this->birthMonth == other.birthMonth && this->birthYear == other.birthYear && this->passportSeries == other.passportSeries && this->passportNumber == other.passportNumber && this->dayOfIssuePassport == other.dayOfIssuePassport && this->monthOfIssuePassport == other.monthOfIssuePassport && this->yearOfIssuePassport == other.yearOfIssuePassport && this->numberOfSisters == other.numberOfSisters && this->numberOfBrothers == other.numberOfBrothers && this->fullYears == other.fullYears && this->yearOfAdmissionToSchool == other.yearOfAdmissionToSchool && this->yearOfGraduation == other.yearOfGraduation && this->height == other.height && this->weight == other.weight && this->favoriteFruit == other.favoriteFruit && this->favoriteVegetable == other.favoriteVegetable)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	friend std::ostream& operator << (std::ostream& os, const Person& person)//доделать
	{
		os << person.name << " " << person.surname << " " << person.patronymic << " " << person.birthDay << " " << person.birthMonth << " " << person.birthYear << " " << person.passportSeries << " " << person.passportNumber << " " << person.dayOfIssuePassport << " " << person.monthOfIssuePassport << " " << person.yearOfIssuePassport << " " << person.numberOfSisters << " " << person.numberOfBrothers << " " << person.fullYears << " " << person.yearOfAdmissionToSchool << " " << person.yearOfGraduation << " " << person.height << " " << person.weight << " " << person.favoriteFruit << " " << person.favoriteVegetable << "\n";
		return os;
	}
	friend std::istream& operator >> (std::istream& is, Person& person)//доделать
	{
		std::cout << "\nName: ";
		is >> person.name;
		std::cout << "\nSurname: ";
		is >> person.surname;
		std::cout << "\nPatronymic: ";
		is >> person.patronymic;
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