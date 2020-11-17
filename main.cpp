#include <iostream>

using namespace std;
class introduction
{
public:
    void name()
    {
        cout<< "Name - Mitali Bose\n\n";
    }
    void rollno()
    {
        cout<<"Roll.no - 06\n\n";
    }
    void stream()
    {
        cout<<"Stream - EXTC\n\n";
    }
    void college()
    {
        cout<<"College - Vidyavardhini's College of Engineering and Technology\n\n";
    }
};

int main()
{
    introduction obj;
    obj.name();
    obj.rollno();
    obj.stream();
    obj.college();
    return 0;
}
