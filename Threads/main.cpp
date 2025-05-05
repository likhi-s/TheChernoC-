#include <iostream>
#include <thread>
using namespace std;

static bool s_Finished = false;
void doWork()
{
    cout<<"Started Thread Id :"<<this_thread::get_id()<<endl;
    while(!s_Finished)
    {
        cout << "Hello World!" << endl;
        this_thread::sleep_for(1s);

    }
}
int main()
{
    thread worker(doWork);
    cin.get();
    s_Finished = true;
    worker.join();
    cout<<"Finished"<<endl;
    cout<<"Finished Thread Id :"<<this_thread::get_id()<<endl;

    cin.get();


    return 0;
}
