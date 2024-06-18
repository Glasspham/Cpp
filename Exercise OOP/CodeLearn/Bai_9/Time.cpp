#include<iostream>
#include<string>
using namespace std;

class Time{
private:
    int hour;
    int minute;
    int second;
public:
    Time(int hour, int minute, int second){
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }

    void setTime(int hour, int minute, int second){
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }

    void setHour(int hour){ this->hour = hour; }
    int getHour(){ return hour; }

    void setSecond(int second){ this->second = second; }
    int getSecond(){ return second; }

    void setMinute(int minute){ this->minute = minute; }
    int getMinute(){ return minute; }

    void nextSecond(){
        second += 1;
        if(second > 59){
            second = 0;
            minute += 1;
            if(minute > 59){
                minute = 0;
                hour += 1;
                if(hour > 23)
                    hour = 0;
            }
        }
    }

    void previousSecond(){
        second -= 1;
        if(second < 0){
            second = 59;
            minute -= 1;
            if(minute < 0){
                minute = 59;
                hour -= 1;
                if(hour < 0)
                    hour = 23;
            }
        }
    }

    void display(){
        if(hour < 10) cout << '0' << hour << ':';
        else cout << hour << ':';
        if(minute < 10) cout << '0' << minute << ':';
        else cout << minute << ':';
        if(second < 10) cout << '0' << second;
        else cout << second;
        cout << endl;
    }
};