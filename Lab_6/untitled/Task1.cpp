#include "Task1.h"


void functionZadanie1()
{

cout<< "=========================================================================" <<endl;
cout<< "                            ������� 1.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;
cout << "�������� ⠡���� 1 � 2, ��⥬�⨧����騥 ���ଠ�� � ������ STL." <<endl;
cout<<endl<<endl;
cout<< "                                 ������ 1."<<endl<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<"| �������� �����  |  ���ᨢ (array)  |  ����� (vector)  |  ���᮪ (list)    |"<<endl;
cout<<"|                  |                  |                   |                   |"<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<"| ����� ������⥪� |     <array>      |     <vector>      |     <list>        |"<<endl;
cout<<"| ���������       |                  |                   |                   |"<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<"|                  |                  |  vector<int> vect |  list<int,3> lst  |"<<endl;
cout<<"| ���⠪��        | array<int,3> arr |  = { 11,22,33 };  |  = { 11,22,33 };  |"<<endl;
cout<<"| ���樠����樨    |  = { 11,22,33 }  |                   |                   |"<<endl;
cout<<"|                  |                  | vect.push_back(1) |  lst.push_back()  |"<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<"| ������ ᯮᮡ��� |   �� �������     |   �� �������      |   �� ������    |"<<endl;
cout<<"| ����� �������   |                  |                   | list<int>::       |"<<endl;
cout<<"| ����� � ������- |   arr[i]         |    vect[i]        | iterator it =     |"<<endl;
cout<<"| �� �����?       |   arr.at(i)      |    vect.at(i)     | lst.begin();      |"<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<"|                  |                  |                   | �����. � ��    |"<<endl;
cout<<"| ����� �� ���-��� | �����. � ��   | �����. � ��    | ���� �� �����  |"<<endl;
cout<<"| ���� ��������.  | ���� �� ����� | ���� �� �����  | �����.        |"<<endl;
cout<<"| ����� ��ࠧ��.   | ������.         | ������.          | � ��砫� ᯨ᪠:  |"<<endl;
cout<<"| � ����� ��஭�. |                  |                   | list.push_front() |"<<endl;
cout<<"|                  |                  |                   | � ����� ᯨ᪠:   |"<<endl;
cout<<"|                  |                  |                   | list.push_back()  |"<<endl;
cout<<"|                  |                  |                   | �� ������:     |"<<endl;
cout<<"|                  |                  |                   | list.insert(it,0) |"<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<"|                  |                  |                   | �����. � ��    |"<<endl;
cout<<"| ����� �� 㤠���� | �����. � ��   | �����. � ��    | ���� �� �����  |"<<endl;
cout<<"| ��������.        | ���� �� ����� | ���� �� �����  | �����.        |"<<endl;
cout<<"| ����� ��ࠧ��.   | ������.         | ������.          | � ��砫� ᯨ᪠:  |"<<endl;
cout<<"| � ����� ��஭�. |                  |                   | list.pop_front()  |"<<endl;
cout<<"|                  |                  |                   | � ���� ᯨ᪠:   |"<<endl;
cout<<"|                  |                  |                   | list.pop_back()   |"<<endl;
cout<<"|                  |                  |                   | �� ������:     |"<<endl;
cout<<"|                  |                  |                   | std::advance(it,3)|"<<endl;
cout<<"|                  |                  |                   | list.erase(it)    |"<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<"| ����� ᯮᮡ��   |                  |                   |                   |"<<endl;
cout<<"| 㧭��� ���-��    |  array.size();   |  vector.size();   |  list.size();     |"<<endl;
cout<<"| ��-⮢ � �����? |                  |                   |                   |"<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<"| ������ �� �����  | �� �।������.   | �� �।������.    | �� ����.          |"<<endl;
cout<<"| ��⮬������   | �ᯮ��. ��⮤:  | �ᯮ��. ��⮤:   | �ᯮ��. ��⮤:   |"<<endl;
cout<<"| ���-��� ������  | std::sort();     | std::sort();      | std::list::sort   |"<<endl;
cout<<"| �᫨ ��, �����?  |                  |                   | list.sort();      |"<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<"| �� ����� ��-��� |                  |                   |                   |"<<endl;
cout<<"| ��ꥪ� �����    | �ᥣ�� �����.    | �ᥣ�� �����.     | �ᥣ�� �����.     |"<<endl;
cout<<"| ����� ᮤ�ঠ��  |                  |                   |                   |"<<endl;
cout<<"| ��� ��� �����    |                  |                   |                   |"<<endl;
cout<<"| ����-��� ���祭? |                  |                   |                   |"<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<"|                  | ������� ������� | ������� �������  | �������� ���祭�� |"<<endl;
cout<<"| ����� ᯥ��-�� | perem = array[i] | perem = vector[i] | � ����� ᯨ᪠    |"<<endl;
cout<<"| �㭪樨 �����    | �������� ������� | �������� �������  | push_back(val)    |"<<endl;
cout<<"| �ਬ-�� � ������.| array[i] = perem | array[i] = perem  | � ��砫� ᯨ᪠   |"<<endl;
cout<<"| �� ��� ������?  |                  |                   | push_front(val)   |"<<endl;
cout<<"|                  | ���� �������   | ���� �������    | ��⠢��� �������  |"<<endl;
cout<<"|                  | p = arr.front()  | per = vect.front()| �� ������      |"<<endl;
cout<<"|                  | ��᫥���� ���-�� | ��᫥���� ������� | insert(iter,val)  |"<<endl;
cout<<"|                  | p = arr.back()   | per = vect.back() | ������� �������   |"<<endl;
cout<<"|                  |                  |                   | �� ������      |"<<endl;
cout<<"|                  | ������ ���⥩-� | ������ ���⥩-�  | erase(iter)       |"<<endl;
cout<<"|                  | array.size();    | vector.size();    | ������� �� ��-�� |"<<endl;
cout<<"|                  |                  |                   | clear();          |"<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;

cout<<endl<<endl<<endl;

cout<< "                                 ������ 2."<<endl<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<"| �������� �����  | �����-� ᯨ᮪ |    ��� (deque)    |      �������      |"<<endl;
cout<<"|                  |   forvard list   |                   |    map/multimap   |"<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<"| ����� ������⥪� |  <forward_list>  |      <deque>      |      <map>        |"<<endl;
cout<<"| ���������       |                  |                   |                   |"<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<"|                  |                  |                   | map<string,int>mp |"<<endl;
cout<<"| ���⠪��        |forward_list<int> |  deque<int> dque  | ={ {'bread', 30}, |"<<endl;
cout<<"| ���樠����樨    | lst = {11,22,33} |  = { 11,22,33 };  |   {'milk', 80} }; |"<<endl;
cout<<"|                  |                  |                   | std::pair<int,str>|"<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<"| ������ ᯮᮡ��� | �� ������     | �� �������        | for(auto el: map) |"<<endl;
cout<<"| ����� �������   | auto iter =      | int val = dque[i] |  el.first         |"<<endl;
cout<<"| ����� � ������- | frvdlist.begin() | dque.front();     |  el.second        |"<<endl;
cout<<"| �� �����?       | iter++;          | dque.back();      | ��� �� �� ����-�|"<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<"|                  | �����.           | � ��砫� ��।�  |                   |"<<endl;
cout<<"| ����� �� ���-��� | � ��砫� ᯨ᪠: | push_front(val)   | �����.            |"<<endl;
cout<<"| ���� ��������.  | lst.push_front() |                   | map.insert(pair<>)|"<<endl;
cout<<"| ����� ��ࠧ��.   |                  | � ����� ��।�   |                   |"<<endl;
cout<<"| � ����� ��஭�. | �� ������:    | push_back(val)    | std::pair         |"<<endl;
cout<<"|                  | lst.insert(it,v) |                   | <int,char>(4,'D') |"<<endl;
cout<<"|                  |                  | ���-�� ������ val |                   |"<<endl;
cout<<"|                  |                  | �� ���-� ����-�|                   |"<<endl;
cout<<"|                  |                  | insert(iter, val) |                   |"<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<"|                  | �����.           | ������ �������   |                   |"<<endl;
cout<<"| ����� �� 㤠���� | � ��砫� ᯨ᪠: | �� �����:     | �����.            |"<<endl;
cout<<"| ��������.        | flst.pop_front() | deque.erase(iter) |                   |"<<endl;
cout<<"| ����� ��ࠧ��.   | ��᫥ �����: |                   | erase('milk');    |"<<endl;
cout<<"| � ����� ��஭�. | erase_after(iter)| ������ ����,   |                   |"<<endl;
cout<<"|                  | ������ ��������:| ��᫥���� ����-�� |                   |"<<endl;
cout<<"|                  | erase_after(b,e) | pop_front()       |                   |"<<endl;
cout<<"|                  | ����-�� �� ����:| pop_back()        |                   |"<<endl;
cout<<"|                  | clear()          | ������ ��:      |                   |"<<endl;
cout<<"|                  |                  | clear()           |                   |"<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<"| ����� ᯮᮡ��   | ��⮤��:         |                   |                   |"<<endl;
cout<<"| 㧭��� ���-��    | distance(beg,end)|  deque.size();    |   map.size();     |"<<endl;
cout<<"| ��-⮢ � �����? |                  |                   |                   |"<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<"| ������ �� �����  |                  | �� �।������.    | �� ����.          |"<<endl;
cout<<"| ��⮬������   | �� ����.         | �ᯮ��. ��⮤:   | ������塞� ���-  |"<<endl;
cout<<"| ���-��� ������  | �ᯮ��. ��⮤:  | std::sort();      | �����, �ࠧ�      |"<<endl;
cout<<"| �᫨ ��, �����?  | frvdlist.sort(); | �� ����ࠬ     | ��⮬���᪨     |"<<endl;
cout<<"|                  |                  | it.begin() it.end | ���������.      |"<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<"| �� ����� ��-��� |                  |                   | �� ᮤ�ন� ���-  |"<<endl;
cout<<"| ��ꥪ� �����    | �ᥣ�� �����.    | �ᥣ�� �����.     | ������� ���祩.   |"<<endl;
cout<<"| ����� ᮤ�ঠ��  |                  |                   | ���祭�� �����    |"<<endl;
cout<<"| ��� ��� �����    |                  |                   | ���� ���������.   |"<<endl;
cout<<"| ����-��� ���祭? |                  |                   |                   |"<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<"|                  | ��⠢��� N      | ������-� ᮤ��-�� |                   |"<<endl;
cout<<"| ����� ᯥ��-�� | ��쥪⮢ val     | ���⥩-� �� ���- | �஢�ઠ ������  |"<<endl;
cout<<"| �㭪樨 �����    | ��᫥ �����  | ����� ��㣮��     | �������:         |"<<endl;
cout<<"| �ਬ-�� � ������.| insert_after     | ���⥩���        | map.count('aple') |"<<endl;
cout<<"| �� ��� ������?  | (iter, N, val)   | assign(begin,end) |                   |"<<endl;
cout<<"|                  |                  |                   | �����頥� 1      |"<<endl;
cout<<"|                  | ����-� N ����-�� | ������-� ᮤ��-�� | �᫨ ������� ���� |"<<endl;
cout<<"|                  | ��砫� � �����   | ���⥩-� N  ���- | 0 - �᫨          |"<<endl;
cout<<"|                  | ����஢       | ���⠬� � ����- | ���������.      |"<<endl;
cout<<"|                  | iter.begin()     | ���� val          |                   |"<<endl;
cout<<"|                  | iter.end()       | assign(n, value)  |                   |"<<endl;
cout<<"|                  | erase_after(b,e) |                   |                   |"<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;


cout<<endl<<endl<<endl<<endl;

}

