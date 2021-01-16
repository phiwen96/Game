#include "ReputationObservable.hpp"
#include "Character.hpp"
#include "Observer.hpp"
#include "ReputationObserver.hpp"




void ReputationObservable::notify_just_met(Character* me, int& reputation, Character* other){
      Observable<Character>::notify<ReputationObserver>([&me, &reputation, &other](ReputationObserver* observer){
            observer->update_a_connection_made_another_new_connection(me, reputation, other);
      });
}
