#include "Time.h"



Time::Time(int hr, int min, int sec){
    setTime(hr,min,sec);
}

void Time::setTime(int h, int m, int s){
    setHour(h);
    setMinute(m);
    setSecond(s);
}

//Não precisa ser declarada aqui, pois foi utilizado o método inline junto ao cabeçalho da função
//void setHour(int h){ hour = (h>=0 && h<24)? h :0 ;} //Método 1 - inline

void Time::setMinute( int m ){ //Método 2 - inline
    minute = (m >=0 && m<60)? m : 0;
} 

inline void Time::setSecond(int s){ //Método 3 - inline
    second = (s>=0 && s<60)? s:0;
}

/*
//Não precisa mais ser declarado aqui, pois foi usado o inline no .h
int getHour() const {return hour;}
int getMinute() const {return minute;}
int getSecond() const {return second;}
*/

string Time::toUniversal() const{
    return format("{:02d}:{:02d}:{:02d}", hour, minute, second);
}

string Time::toStandard() const{
    return format("{:02d}:{:02d}:{:02d} {}", ( (hour == 0 || hour == 12) ? 12 : hour % 12 ), minute, second, (hour < 12 ? "AM" : "PM"));
}

void Time::tick(){
    if(second == 59){
        if(minute == 59){
            if(hour == 23){
                hour = 0;
                minute = 0;
                second = 0;
            }
            else{
                hour++;
                minute = 0;
                second = 0;
            }
        }
        else{
            minute++;
            second = 0;
        }
    }
    else{
        second++;
    }
}
