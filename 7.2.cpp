#include<iostream>
using namespace std;
class stream
{
    public:
    stream()
    {
        cout<<"stream ctor\n";
    }
    void open()
{
    cout<<"stream opened\n";
}
};
class InStream:virtual public stream{};
class OutStream:virtual public stream{};
class IOStream:public InStream , public OutStream{};
int main()
{
    IOStream io;
    io.open();
    return 0;
}