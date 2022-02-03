#include<iostream>

using namespace std;

class distance{
    private:
        int m,cm,mm;
    public:
        void show_distance(){
            cout<<"in meter = "<<m<<"\n"<<"in cm = "<<cm<<"\n"<<"in mm = "<<mm<<"\n";
        }
        void set_distance(int mtr,int cm1,int mm1){
            m=mtr;
            cm=cm1;
            mm=mm1;
        }
};

int main(){
    class distance d1,d2;
    d1.set_distance(75,45,5);
    d1.show_distance();
    d2.set_distance(48,94,7);
    d2.show_distance();
    
}
