#pragma once

template <class NextAspect, class Data>

class AspectBase
{
public:
      NextAspect operator->()
      {
            return m_data;
      }
      
protected:
      AspectBase(Data data) : m_data(data)
      {
            
      }
      
private:
      Data m_data;
      
};

