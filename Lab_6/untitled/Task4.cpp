#include "Task4.h"

#include <vector>
#include <list>



vector<int> & funcNewVector(vector<int> &vect, list<int> &lst)
{
    auto iter = lst.begin();

    int j=1;

    for(int i=0; i<lst.size()/2+1; i++)
     {
        vect[j] = *iter;
        j+=2;

        std::advance(iter,2);

      }
    return vect;
}



void functionZadanie4()
{

cout<< "=========================================================================" <<endl;
cout<< "                            Задание 4.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;
cout << "Разработать программу, которая берёт 2 параметра: вектор и список." <<endl;
cout << "Функция должна построить и вернуть новый вектор, полученный из исходного" <<endl;
cout << "заменой чётных элементов вектора на нечётные элементы списка." <<endl;
cout<<endl;


vector<int> vect = {3, 5, 4, 5, 9, 20, 3, 23, 12};

cout<<"Вектор в который вставляем элементы:"<<endl<<endl;
for(int i=0; i<vect.size(); i++)
                     cout<< vect[i] << "  ";


list<int> lst = {-5, -9, -3, -15, -126, -33, -50};

cout<<endl<<endl;

cout<<"Лист из которого берем элементы:"<<endl<<endl;
for(auto iter=lst.begin(); iter != lst.end(); iter++)
                                      cout<< *iter << "  ";


cout<<endl<<endl;


cout<<"Результирующий вектор:"<<endl<<endl;

vector<int> v = funcNewVector(vect, lst);

for(int i=0; i<9; i++)
            cout<< v[i] << "  ";

cout<<endl<<endl<<endl<<endl;

}

