#include "Task5.h"

#include <vector>
#include <list>

void functionZadanie5()
{

cout<< "=========================================================================" <<endl;
cout<< "                            ������� 5.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;
cout <<"���ࠡ���� �ணࠬ��, ����� �������� � ����� ᯨ᪠ ����⢥���� �ᥫ" <<endl;
cout <<"�����, ���祭�� ���ண� ࠢ�� �।���� ��䬥��᪮�� ��� ��� ����⮢"<<endl;
cout<<endl;

cout<<"������ �����:"<<endl<<endl;

list<float> lst = {1.23, 2.34, 3.45, 4.56, 5.67, 6.78, 7.89};

for(auto iter=lst.begin(); iter != lst.end(); iter++)
                                      cout<< *iter << "  ";

cout<<endl;
//-------------------------------------------------------------

float srednArifmet=0;

for (auto iter = lst.begin(); iter != lst.end(); iter++)
 {
    srednArifmet = srednArifmet + *iter;
 }

srednArifmet = srednArifmet / lst.size();

cout<<endl;
cout<< "�।��� ��䬥��᪮� ࠢ��:  "<< srednArifmet <<endl;
cout<<endl<<endl;
//--------------------------------------------------------------

cout<< "������塞 � ����� �����." <<endl;
cout<<endl;

lst.push_back(srednArifmet);

for(auto iter=lst.begin(); iter != lst.end(); iter++)
                                      cout<< *iter << "  ";

cout<<endl<<endl<<endl<<endl;

}

