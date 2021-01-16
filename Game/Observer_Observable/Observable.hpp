#pragma once
//#include "Vector.hpp"
#include "Observer.hpp"

//template <class T> class Observer;

template <class T>
class Observable
{
public:
      
//      void notify(){
//            m_observers.for_each([](const T & observer){
//                  observer.Observer::update ();
//            });
//      }
      template<class U> void notify(function<void(T*)> func){
            for (auto i = m_observers.begin(); i != m_observers.end(); ++i) {
                  func((T*)(*i));
            }
      }
      void subscribe (Observer<T>* observer){
            m_observers.push_back (observer);
      }
      void unsubscribe        (Observer<T>* observer){
            
      }
      
      
      
      
      
      
      
      
      
      
      
      
private:
      vector < Observer <T>* > m_observers;
      
      boost::signals2::signal<void()> m_queueries;
      
};
