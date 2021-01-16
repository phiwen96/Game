#pragma once


class Character;

class CharacterConnections {
public:
      CharacterConnections();
      ~CharacterConnections();
      
public:
      int* add_connection(Character*);
      
      
      
private:
      
      unordered_map<Character*, int*>::iterator find(Character*);
      
      unordered_map<Character*, int*> m_connections;
      
};
