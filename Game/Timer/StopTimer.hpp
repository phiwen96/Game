#pragma once

template <class T> class Utility;

class TimerStopped;

class StopTimer {
public:
      StopTimer(system_clock::time_point&& time_started);
      Utility<TimerStopped> stop(const char* msg = "");
     
      
private:
      system_clock::time_point m_time_started;
};
