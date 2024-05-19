#include "Task2.h"

#include <algorithm>
#include <vector>

void functionZadanie2()
{

cout<< "=========================================================================" <<endl;
cout<< "                            Задание 2.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;
cout << "Сгенерировать контейнер из N псевдослучайных чисел. Вывести в консоль" <<endl;
cout << "содержимое контейнера через пробел, по 10 элементов в строке. Определить" <<endl;
cout << "сколько уникальных чисел в вашем контейнере и вывести это количество в консоль." <<endl;

vector<int> vect;

    int val=0;

    for(int i=0;i<20;i++)
    {
        val = rand() % 1000 +1;
        vect.push_back(val);
    }

    cout<<endl;
    cout<<"Набор псевдослучайных чисел:"<<endl<<endl;

    int n=0;
    for(int i=0; i<2; i++)
    {
      for(int j=0; j<10; j++)
      {
          cout<< vect[n] << "  ";
          n++;
      }
      cout<<endl;
    }

    cout<<endl;

    std::sort(vect.begin(), vect.end());
    int count = std::unique(vect.begin(), vect.end()) - vect.begin();

    cout<<"Количество уникальных чисел в контейнере = "<< count <<endl;



cout<<endl<<endl<<endl<<endl;

}
