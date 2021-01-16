#include "Character.hpp"
#include "AspectDefinitions.hpp"
#include "Time.hpp"
#include "StopTimer.hpp"
#include "StartTimer.hpp"
#include "TimerStopped.hpp"
#include "Utilities.hpp"



//using boost::signals2;



struct Query{
      enum Argument { age, name } argument;
      const char* result;
};

struct People{
      boost::signals2::signal<void(Query&)> queries;
}; People people;

class Person{
      int m_age;
      const char* m_name;
public:
      void setName(const char* name)
      {
            m_name = name;
            Query q{Query::Argument::name, m_name};
            people.queries(q);
      }
};

struct Test{
      connection conn;
      Test(){
            conn = people.queries.connect([](Query& q){
                  if ( q.argument == Query::Argument::name ) {
                        cout << q.result << endl;
                  }
            });
      }
};


int main(){
      
      connection c;
      
      Time timer;
      timer.start("test1").run([]{
            Character Oscar("Oscar");
            Character Philip("Philip");
            Character Tim("Tim");
            
            Philip.meet(&Oscar);
            Philip.meet(&Tim);
//            Test t1;
//            Person p1;
//            p1.setName("Philip");
      }).stop().print();
      
      
      
      return 0;
      

      
      Character Oscar("Oscar");
      Character Philip("Philip");
      Character Tim("Tim");

      Philip.meet(&Oscar);
      Philip.meet(&Tim);
//      Tim.meet(&Oscar);
      
      
      
      
    return 0;
}
