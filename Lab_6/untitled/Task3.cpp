#include "Task3.h"

#include <vector>
#include <algorithm>

void functionZadanie3()
{

cout<< "=========================================================================" <<endl;
cout<< "                            ������� 3.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;
cout << "���ࠡ���� �ணࠬ��, ����� �뢮��� �� �࠭ ᮤ�ন��� ���⥩���, ᭠砫�" <<endl;
cout << "� ��אַ� ���浪�, ��⮬ � ���⭮� ���浪� (� �ਬ������� ���⭮�� �����)." <<endl;


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
