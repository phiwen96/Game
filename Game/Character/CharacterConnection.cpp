#include "CharacterConnection.hpp"
#include "Character.hpp"
using € = CharacterConnections;


€::CharacterConnections(){
      
}
€::~CharacterConnections(){
      
}
int* €::add_connection(Character* character){
      auto it = find(character);
      if ( it != m_connections.end() ) return nullptr;
      int* howIRateThem = new int(0);
      m_connections[character] = howIRateThem;
      return howIRateThem;
}

unordered_map<Character*, int*>::iterator €::find(Character* character){
      unordered_map<Character*, int*>::iterator it = m_connections.begin();
      for(; it != m_connections.end(); ++it){
            if ( (it->first) == character ) {
                  break;
            }
      }
      return it;
}
