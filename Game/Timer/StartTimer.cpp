#include "StartTimer.hpp"
#include "StopTimer.hpp"
#include "Utilities.hpp"
using € = StartTimer;



Utility<StopTimer> StartTimer::start(const char* msg){
      cout << "Starting timer: " << msg << endl;
      return Utility<StopTimer>(system_clock::now());
}
