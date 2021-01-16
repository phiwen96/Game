#include "ReputationObserver.hpp"
#include "Character.hpp"

void ReputationObserver::field_changed(Character*, int handling){
      
}
void ReputationObserver::update_a_connection_made_another_new_connection(Character* myConnection, int& myRepOfHim, Character* other){
      cout << ((Character*)this)->name() << ":" << myConnection -> name() << " - " << other -> name() << endl;
}
