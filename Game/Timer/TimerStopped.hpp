#pragma once
#include "Time.hpp"

template <class T> class Utility;



class TimerStopped : public Time {
public:
      TimerStopped(system_clock::time_point&& time_started, const char* msg = "");
      Utility<Time> print();
      
     
      
private:
      system_clock::duration m_time_elapsed;
};
