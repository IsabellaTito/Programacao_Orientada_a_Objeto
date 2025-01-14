#pragma once

#include <iostream>
#include <format>
using std::cout, std::endl, std::format;

#include <string>;
using std::string;

class Time{

    public:

        Time(int = 0, int = 0, int =0);

        void setTime(int, int, int);

        void setHour(int h){ hour = (h>=0 && h<24)? h :0 ;} //Método 1 - inline

        inline void setMinute( int m ); //Método 2 - inline

        void setSecond(int s); //Método 3 - inline

        int getHour() const {return hour;}
        int getMinute() const {return minute;}
        int getSecond() const {return second;}

        string toUniversal() const;
        string toStandard() const;

        void tick();


    private:

        int hour;
        int minute;
        int second;

};