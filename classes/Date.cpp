#include <iostream>
#include <string>
using namespace std;

class Date {
    private:
        int month;
        int day;
    public:
        Date(int month, int day) {
            this->month = month;
            this->day = day;
        }

        string toString() {
            string ans = "";
            string cero = to_string(0);
            if (this->day < 10) {
                if (this->month < 10) {
                    ans = cero + to_string(this->month) + "/" + cero + to_string(this->day);
                } else {
                    ans = to_string(this->month) + "/" + cero + to_string(this->day);
                }
            } else {
                if (this->month < 10) {
                    ans = cero + to_string(this->month) + "/" + to_string(this->day);
                } else {
                    ans = to_string(this->month) + "/" + to_string(this->day);
                }
            }

            return ans;
        }

        int getDay() {
            return this->day;
        }

        int getMonth() {
            return this->month;
        }

        void nextDay() {
            if (this->daysInMonth() == 31) {
                if (this->day == 31) {
                    this->day = 1;
                    if (this->month == 12) {
                        this->month = 1;
                    } else {
                        this->month++;
                    }
                } else {
                    this->day++;
                }
            } else if (this->daysInMonth() == 30) {
                if (this->day == 30) {
                    this->day = 1;
                    if (this->month == 12) {
                        this->month = 1;
                    } else {
                        this->month++;
                    }
                } else {
                    this->day++;
                }
            }
            else if (this->daysInMonth() == 28) {
                if (this->day == 28) {
                    this->day = 1;
                    if (this->month == 12) {
                        this->month = 1;
                    } else {
                        this->month++;
                    }
                } else {
                    this->day++;
                }
            }
        }

        int daysInMonth() {
            int ans = -1;
            switch(this->month) {
                case 1:
                    ans = 31;
                    break;
                case 2:
                    ans = 28;
                    break;
                case 3:
                    ans = 31;
                    break;
                case 4:
                    ans = 30;
                    break;
                case 5:
                    ans = 31;
                    break;
                case 6:
                    ans = 30;
                    break;
                case 7:
                    ans = 31;
                    break;
                case 8:
                    ans = 31;
                    break;
                case 9:
                    ans = 30;
                    break;
                case 10:
                    ans = 31;
                    break;
                case 11:
                    ans = 30;
                    break;
                case 12:
                    ans = 31;
            }
            return ans;
        }

};
