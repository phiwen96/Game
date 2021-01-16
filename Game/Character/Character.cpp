#include "Character.hpp"
#include "CharacterConnection.hpp"
using € = Character;


€::Character(const char* name) : m_name(name), m_connections(new CharacterConnections){
      
}
string €::name() const{
      return m_name;
}
void €::name(string name){
      m_name = name;
}
void €::meet(Character* tim){
//      cout << m_name << ":" << tim->name() << endl;
      int* howIRateThem = m_connections->add_connection(tim);
      if ( !howIRateThem ) {
            return;
      }
      ReputationObservable::notify_just_met(this, *howIRateThem, tim);
      tim -> subscribe(this);
      this -> subscribe(tim);
      
}
