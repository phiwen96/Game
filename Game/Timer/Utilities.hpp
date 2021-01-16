#pragma once

template <class T>
struct Type{};

template<class T>
class Utility : public T{
public:
      Utility(){
            
      }
      template<class U> Utility(const U* u) : T(u) {}
      template<class U> Utility(U&& u) : T((U&&)u) {}
      template<class U, class V> Utility(U&& u, const V* v) : T((U&&)u, v) {}
      Utility& run(function<void()> func){
            func();
            return *this;
      }
      
};

