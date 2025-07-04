//Overload compare operator 

#include<iostream>
using namespace std;


class Performance
{
  private:
  float percentage;
  
  public:
  Performance(float percentage) : percentage(percentage){}
  
 friend bool operator==(const Performance& lhs,const Performance& rhs)
 {
     if(lhs.percentage == rhs.percentage )
     {
        return true;
     }
     return false;
 }
 
 friend bool operator>(const Performance& lhs,const Performance& rhs)
 {
          if(lhs.percentage > rhs.percentage )
     {
        return true;
     }
     return false;
 }
  
};

int main()
{
    Performance obj1(95);
    Performance obj2(100);
    
    if(obj1==obj2)
    {
        cout<<"Bothe perfomed the same"<<endl;
    }
    else if(obj1>obj2)
    {
        cout<<"obj1 is greater than obj2"<<endl;
    }
    else
    {
        cout<<"obj1 is lesser than obj2"<<endl;
    }
    
    
    return 0;
}
