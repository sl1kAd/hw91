#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    priority_queue <int> priority_q;  // объявляем приоритетную очередь

    cout << "Введите 7 чисел: " << endl;

    for (int j = 0; j < 7; j++) 
    {
        int a; cin >> a;

        priority_q.push(a);  // добавляем элементы в очередь
    }
    // выводим первый
    cout << "Первый элемент очереди: " << priority_q.top();  // элемент
}