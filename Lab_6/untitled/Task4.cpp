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
cout<< "                            ������� 4.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;
cout << "���ࠡ���� �ணࠬ��, ����� ����� 2 ��ࠬ���: ����� � ᯨ᮪." <<endl;
cout << "�㭪�� ������ ����ந�� � ������ ���� �����, ����祭�� �� ��室����" <<endl;
cout << "������� ����� ����⮢ ����� �� ������ ������ ᯨ᪠." <<endl;
cout<<endl;


vector<int> vect = {3, 5, 4, 5, 9, 20, 3, 23, 12};

cout<<"����� � ����� ��⠢�塞 ������:"<<endl<<endl;
for(int i=0; i<vect.size(); i++)
                     cout<< vect[i] << "  ";


list<int> lst = {-5, -9, -3, -15, -126, -33, -50};

cout<<endl<<endl;

cout<<"���� �� ���ண� ��६ ������:"<<endl<<endl;
for(auto iter=lst.begin(); iter != lst.end(); iter++)
                                      cout<< *iter << "  ";


cout<<endl<<endl;


cout<<"���������騩 �����:"<<endl<<endl;

vector<int> v = funcNewVector(vect, lst);

for(int i=0; i<9; i++)
            cout<< v[i] << "  ";

cout<<endl<<endl<<endl<<endl;

}

