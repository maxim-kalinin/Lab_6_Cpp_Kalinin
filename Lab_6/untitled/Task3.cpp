#include "Task3.h"

#include <vector>
#include <algorithm>

void functionZadanie3()
{

cout<< "=========================================================================" <<endl;
cout<< "                            Задание 3.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;
cout << "Разработать программу, которая выводит на экран содержимое контейнера, сначала" <<endl;
cout << "в прямом порядке, потом в обратном порядке (с применением обратного итератора)." <<endl;


cout<<endl;

vector<int> vect{1,2,3,4,5,6,7,8,9,10};

for ( int x : vect )
          cout << x << ' ';

cout<<endl;

std::reverse( vect.rbegin(), vect.rend() );

for ( int x : vect )
          cout << x << ' ';



cout<<endl<<endl<<endl<<endl;

}
