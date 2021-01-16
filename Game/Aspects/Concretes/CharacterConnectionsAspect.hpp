#pragma once

template <class NextAspect, class Data>

class CharacterConnectionsAspect : public NextAspect
{
public:
      CharacterConnectionsAspect(Data data) : NextAspect(data)
      {
            
      }
      
};
