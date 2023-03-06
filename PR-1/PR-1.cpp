// PR-1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

//----описание типа struct для одного элемента массива--------------------
struct Student 
{
    char FIO[30];
    int Ball[5];
    float SrBall;
};
const int N = 25;  // размер массива - группа

//-----описание функции вывода на экран массива типа Student--------------
void showStudent(Student St[], int size) {
    cout << endl << "List Studens" << endl;

    for (int k = 0; k < size; k++) {
        cout << endl << St[k].FIO << ' ' << St[k].SrBall;

        for (int i = 0; i < 5; i++)  cout << ' ' << St[k].Ball[i];
    }
}

//------описание функции добавления в массив   элемента типа Student -----
void addStudent(Student St[], int size) {
    char str[30];

    for (int k = 0; k < size; k++) {
        cout << "FIO" << endl; cin.get(); cin.get(St[k].FIO, 30); cin.get();
        St[k].SrBall = 0;
        cout << "Ball" << endl;

        for (int i = 0; i < 5; i++) {
            cin >> St[k].Ball[i]; St[k].SrBall += St[k].Ball[i];
        }

        St[k].SrBall /= 5;
    }
}

//--------сортировка массива студентов по среднему баллу------------------
void sortSrBall(Student St[], int size) {
    Student tmp;

    for (int i = 0; i < size - 1; i++)

        for (int j = i + 1; j < size; j++)

            if (St[i].SrBall < St[j].SrBall) {
                tmp = St[i]; St[i] = St[j]; St[j] = tmp;
            }
}

//------------------------------------------------------------------------

int main() {

    //-- объявление массива структур

    Student G[N];

    int count = 0; // количество  студентов в группе

    cout << "count "; cin >> count;

    //--вызов функций обработки  массива G типа Student

    addStudent(G, count);

    showStudent(G, count);

    sortSrBall(G, count);

    showStudent(G, count);

    cout << endl;

    system("pause");

    return 0;

}

//------------------------------------------------------------------------

int main()
{
    std::cout << "Hello World!\n";
}

