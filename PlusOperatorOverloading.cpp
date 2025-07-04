#include<iostream>
using namespace std;

class CoMplex
{
   private:
   int real;
   int img;
   public:
   CoMplex(){}
   CoMplex(int real , int img):real(real),img(img){}
   
   friend CoMplex operator+( const CoMplex &obj1,const CoMplex &obj2)
   {
      return CoMplex(obj1.real+obj2.real , obj1.img+obj2.img);
   }
   
   int getreal() 
   {
       return real;
   }
   
   int getImg() 
   {
       return img;
   }
    
};

int main()
{
    CoMplex obj1(5,10);
    CoMplex obj2(15,20);
    
    CoMplex obj3 = obj1 + obj2;
    
    cout<<"Sum is = "<<obj3.getreal() <<" +i "<<obj3.getImg()<<endl;
    return 0;
}
