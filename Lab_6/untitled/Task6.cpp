#include "Task6.h"

#include <map>

void functionZadanie6()
{

cout<< "=========================================================================" <<endl;
cout<< "                            ������� 6.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;
cout << "���ࠡ���� �ணࠬ��, ����� ������ � ᥡ� 3 ���� ���祭��, �������" <<endl;
cout << "���짮��⥫�� �� ���᮫�. ���� ���祭�� ������ ����� ⨯ \"�����, ��ப�\"."<<endl;
cout << "����室��� �뢥�� ������� ������ � �����஢����� ���浪�."<<endl;
cout<<endl<<endl;

//--------------------------------------------------------------------------------

cout<<"������ �ணࠬ�� ᮡ�ࠥ� ⮯-3 ���� ���� �."<<endl<<endl;

std::map<unsigned, std::string> products;
unsigned reiting=0;
std::string product;

for(int i=1, j=3; i<4; i++, j--)
 {
   reiting = j;
   cout<<"��������, ������ ३⨭�:  "<< reiting <<endl;
//   std::cin >> reiting;


   product = "��-"+ std::to_string(i);
   cout<<"��������, ������ �������� ��:  "<< product <<endl;
//   std::cin >> product;


   products.insert(std::make_pair(reiting, product));
 }

cout<<endl;
cout<<"��१ ������ std::cin � ���᮫� �뫨 ������� ����।��"<<endl;
cout<<"�� ३⨭�� � �������� �."<<endl;
cout<<endl<<endl;
cout<<"������� ��᫥ ���஢�� ������:"<<endl<<endl;

for (const auto& element : products)
        std::cout << element.first << "-३⨭�:    " << element.second << std::endl;


cout<<endl<<endl<<endl<<endl;

}


