#pragma once
#include "ReputationObserver.hpp"
#include "ReputationObservable.hpp"
#include "AspectDefinitions.hpp"

using ConnectionsAspect = CHAR_CONN_ASP (CharacterConnectionsAspect, AspectBase, class CharacterConnections*);


class CharacterConnections;


class Character : public ReputationObserver, public ReputationObservable {
public:
      Character(const char* name);
      
      string name() const;
      void name(string name);
      
      void meet(Character*);
      
      
      
private:
      string m_name;
      
      ConnectionsAspect m_connections;
      connection conn;
//      CharacterConnections* m_connections;
      
      
};

