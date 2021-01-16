#pragma once


template <class NextAspect, class Data>

class AspectWeaver
{
public:
      AspectWeaver (Data data) : m_data(data)
      {
            
      }
      
      NextAspect operator->()
      {
            return NextAspect (m_data);
      }
      
private:
      Data m_data;
};
