#include <iostream>
using namespace std;

class Academic{
    public:
    double marks;
};

class Sports{
    public:
    double sports_score;
};

class Result:Academic,Sports{
    public:
    void get(){
        cout<<"\nEnter academic marks out of 100 : ";
        cin>>marks;
        cout<<"\nEnter sports score out of 100 : ";
        cin>>sports_score;
    }
    void result(){
        cout<<"\n\nFinal result : "<<(marks+sports_score)<<" out of 200";
    }
};

int main(){

    Result res;
    res.get();
    res.result();

    return 0;
}