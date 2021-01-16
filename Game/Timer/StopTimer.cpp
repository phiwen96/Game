#include "StopTimer.hpp"
#include "Utilities.hpp"
#include "TimerStopped.hpp"

using € = StopTimer;


StopTimer::StopTimer(system_clock::time_point&& time_started) : m_time_started((system_clock::time_point&&) time_started){
      
}


Utility<TimerStopped> StopTimer::stop(const char* msg){
      return Utility<TimerStopped>((system_clock::time_point&&) m_time_started, msg);
}

