#include "Time.h"

Time::Time(int hr, int min, int sec)
{
  setTime(hr, min, sec);  
  //qualquer modificação posterior em setTime reflete no construtor
}

Time::Time(){
    time_t timestamp = time(&timestamp);
    struct tm datatime = *localtime(&timestamp);
    setTime(datatime.tm_hour,datatime.tm_min,datatime.tm_sec);
    
}

void Time::setTime(int h, int m, int s)
{
  setHour(h);
  setMinute(m);
  setSecond(s);  
}

std::string Time::toUniversal() const
{   return format("{:02d}:{:02d}:{:02d}", hour, minute, second);
}

std::string Time::toStandard() const
{
	return format("{:02d}:{:02d}:{:02d} {}", ( (hour == 0 || hour == 12) ? 12 : hour % 12 ), minute, second, (hour < 12 ? "AM" : "PM"));
}
