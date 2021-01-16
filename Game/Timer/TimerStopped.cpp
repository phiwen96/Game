#include "TimerStopped.hpp"
#include "Utilities.hpp"
using € = TimerStopped;


Utility<Time> €::print(){
      cout << (unsigned) (duration_cast<milliseconds>(m_time_elapsed).count()) << "ms" << endl;
      return Utility<Time>();
}
TimerStopped::TimerStopped(system_clock::time_point&& time_started, const char* msg) : m_time_elapsed(system_clock::now() - (system_clock::time_point)time_started){
      
}

