#include "Task7.h"

#include <fstream>
#include <vector>
#include <ctype.h>


void CreatFileAllAvtoNomers();
void CreatFileTrueFalseAvtoNomers();


void functionZadanie7()
{
cout<< "=========================================================================" <<endl;
cout<< "                            Задание 7.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;
cout << "Определить, какие из автомобильных номеров во входящем файле INPUT.TXT" <<endl;
cout << "соответствуют принятому государственному стандарту, а какие нет." <<endl;
cout << "В выходной файл OUTPUT.TXT вывести N строк, в i-й строке должно содержаться" <<endl;
cout << "\"Yes\" если соотв-щая i-я запись номера верна стандарту и \"No\" в прот-ом случае." <<endl;


CreatFileAllAvtoNomers();

CreatFileTrueFalseAvtoNomers();

cout<<endl<<endl;

}


//=========================================================


void CreatFileAllAvtoNomers()
{
   std::ofstream out;
   out.open("INPUT.TXT");

   if (out.is_open())
    {
      out << "P204BT" << std::endl;
      out << "A315DB" << std::endl;
      out << "ABC216" << std::endl;
      out << "XY182YZJK" << std::endl;
      out << "D148BH" << std::endl;
      out << "PG204B" << std::endl;
      out << "K333DL" << std::endl;
      out << "ABC216" << std::endl;
      out << "XO182YZ" << std::endl;
      out << "Z999BH" << std::endl;
    }
}


//=========================================================


void CreatFileTrueFalseAvtoNomers()
{
  std::vector<string> vectorAllNumber;
  std::string line;

  fstream fin("INPUT.TXT", fstream::in);


  // читает номера в вектор

  while (std::getline(fin, line))
  {
     vectorAllNumber.push_back(line);
  }


int razmer_vect = vectorAllNumber.size();

std::vector<std::string> vect_rezult(razmer_vect, "YES");


std::string stroka;
bool arr_bool[6];


//for(int i=0; i<rzmrvect; i++)
//             cout<< vect[i] <<endl;


for(int i=0; i < razmer_vect; i++)
{
   stroka = vectorAllNumber[i];


   if(stroka.length() != 6) vect_rezult[i] = "NO";


   // определяет отдельную строку на соответствие истине
   if(stroka.length() == 6)
   {
      for(int i=0; i<6; i++)
                 arr_bool[i] = isdigit(stroka[i]);

      // смотрим каждый символ строки на истинность
      if(arr_bool[0] == 1) vect_rezult[i] = "NO";
      if(arr_bool[1] == 0) vect_rezult[i] = "NO";
      if(arr_bool[2] == 0) vect_rezult[i] = "NO";
      if(arr_bool[3] == 0) vect_rezult[i] = "NO";
      if(arr_bool[4] == 1) vect_rezult[i] = "NO";
      if(arr_bool[5] == 1) vect_rezult[i] = "NO";
   }
}



std::ofstream out;
out.open("OUTPUT.TXT");

if (out.is_open())
 {
   for(int i=0; i<10; i++)
    {
      out << vectorAllNumber[i] <<"     "<< vect_rezult[i] << std::endl;

    }

 }

cout<<endl;
cout<< "В рабочей директории был создан файл, с содержимым:" <<endl;
cout<<endl;

for(int i=0; i<10; i++)
    cout<< vectorAllNumber[i] <<"     "<< vect_rezult[i] <<endl;



}



























