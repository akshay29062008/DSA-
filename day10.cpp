#include <iostream>

bool isLeapYear(int year) {
    // A year is a leap year if it is divisible by 4,
    // except for end-of-century years, which must be divisible by 400.
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool isValidDate(int day, int month, int year) {
    // 1. Validate Year and Month ranges
    // (Gregorian calendar officially started in 1582, or use year >= 1 for proleptic)
    if (year < 1 || month < 1 || month > 12 || day < 1) {
        return false;
    }

    // 2. Determine the maximum days in the given month
    int daysInMonth[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // Adjust February for leap years
    if (month == 2 && isLeapYear(year)) {
        daysInMonth[2] = 29;
    }

    // 3. Validate Day against the maximum days for that month
    return day <= daysInMonth[month];
}

int main() {
    int day, month, year;

    std::cout << "Enter date (DD MM YYYY): ";
    if (!(std::cin >> day >> month >> year)) {
        std::cout << "Invalid input format.\n";
        return 1;
    }

    if (isValidDate(day, month, year)) {
        std::cout << day << "/" << month << "/" << year << " is a VALID date.\n";
    } else {
        std::cout << day << "/" << month << "/" << year << " is an INVALID date.\n";
    }

    return 0;
}
