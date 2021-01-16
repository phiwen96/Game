#pragma once
#include "Observer.hpp"


class Character;




class ReputationObserver : public Observer<Character>{
public:
      void field_changed(Character*, int handling);
      void update_a_connection_made_another_new_connection(Character* myConnection, int& myRepOfHim, Character* other);
      
      
private:
      unordered_map<Character*, int> m_opinion;
      
};
