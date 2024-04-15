#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Date {
    int day;
    int month;
    int year;

    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    bool isValidDate() const {
        if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
            return false;
        if (month == 4 || month == 6 || month == 9 || month == 11)
            return (day <= 30);
        if (month == 2)
            return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? (day <= 29) : (day <= 28);
        return true;
    }

    void newDate(int d, int m, int y) {
        if (isValidDate()) {
            day = d;
            month = m;
            year = y;
        } else {
            cout << "Invalid date!" << endl;
        }
    }

    string getDayOfWeek() const {
        // Implementation of the algorithm to calculate the day of the week goes here
        return "Monday"; // Placeholder
    }

    int calculateDifference(const Date& date) const {
        // Implementation of the difference calculation goes here
        return 0; // Placeholder
    }

    void printDate() const {
        string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
        cout << months[month - 1] << " " << day << ", " << year << endl;
    }

    bool operator<(const Date& date) const {
        if (year != date.year) return year < date.year;
        if (month != date.month) return month < date.month;
        return day < date.day;
    }
};

int main() {
    vector<Date> dates;

    // Example usage
    Date d1(1, 1, 2023);
    Date d2(15, 6, 2022);
    Date d3(5, 12, 2024);

    dates.push_back(d1);
    dates.push_back(d2);
    dates.push_back(d3);

    // Sorting the vector of dates
    sort(dates.begin(), dates.end());

    // Displaying sorted dates
    cout << "Sorted Dates:" << endl;
    for (const auto& date : dates) {
        date.printDate();
    }

    return 0;
}
