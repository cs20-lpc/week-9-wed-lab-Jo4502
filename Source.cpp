#include "ArrayQueue.hpp"
#include <iostream>
using namespace std;

int main() {
    ArrayQueue<int> q(3);

    q.enqueue(10);          //enqueue
    q.enqueue(20);

    cout << "front: " << q.front() << endl;          //front and back
    cout << "back: " << q.back() << endl; 

    q.dequeue();            //  dequeue

    cout << "front after dequeue: " << q.front() << endl;       // check front again

    q.enqueue(30);      // enqueue for circular 
    q.enqueue(40);

    cout << "front: " << q.front() << endl; 
    cout << "back: " << q.back() << endl;  

    q.clear();
    cout << " cleared" << endl;

    return 0;
}
