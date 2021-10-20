#include <iostream>

using namespace std;

int main()
{

    priority_queue <int> priority_q; 
    
    cout << "Press 7 numb: " << endl;

    for (int j = 0; j < 7; j++) 
    {
        int a; cin >> a;

        priority_q.push(a);  
    }
   
    cout << "Первый элемент очереди: " << priority_q.top(); 
}
