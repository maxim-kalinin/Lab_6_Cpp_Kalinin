#include "Task2.h"

#include <algorithm>
#include <vector>

void functionZadanie2()
{

cout<< "=========================================================================" <<endl;
cout<< "                            ������� 2.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;
cout << "������஢��� ���⥩��� �� N �ᥢ����砩��� �ᥫ. �뢥�� � ���᮫�" <<endl;
cout << "ᮤ�ন��� ���⥩��� �१ �஡��, �� 10 ����⮢ � ��ப�. ��।�����" <<endl;
cout << "᪮�쪮 㭨������ �ᥫ � ��襬 ���⥩��� � �뢥�� �� ������⢮ � ���᮫�." <<endl;

vector<int> vect;

    int val=0;

    for(int i=0;i<20;i++)
    {
        val = rand() % 1000 +1;
        vect.push_back(val);
    }

    cout<<endl;
    cout<<"����� �ᥢ����砩��� �ᥫ:"<<endl<<endl;

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

    cout<<"������⢮ 㭨������ �ᥫ � ���⥩��� = "<< count <<endl;



cout<<endl<<endl<<endl<<endl;

}
