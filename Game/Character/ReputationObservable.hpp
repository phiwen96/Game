#pragma once
#include "Observable.hpp"

class Character;


class ReputationObservable : public Observable<Character>{
public:
    
      void notify_just_met(Character* me, int& reputation, Character* other);
      
      
      
private:
      
};
