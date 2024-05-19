#include "Task6.h"

#include <map>

void functionZadanie6()
{

cout<< "=========================================================================" <<endl;
cout<< "                            Задание 6.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;
cout << "Разработать программу, которая возьмёт в себя 3 пары значений, введённых" <<endl;
cout << "пользователем из консоли. Пары значений должны иметь тип \"номер, строка\"."<<endl;
cout << "Необходимо вывести введеные элементы в отсортированном порядке."<<endl;
cout<<endl<<endl;

//--------------------------------------------------------------------------------

cout<<"Данная программа собирает топ-3 Ваших любимых ягод."<<endl<<endl;

std::map<unsigned, std::string> products;
unsigned reiting=0;
std::string product;

for(int i=1, j=3; i<4; i++, j--)
 {
   reiting = j;
   cout<<"Пожалуйста, введите рейтинг:  "<< reiting <<endl;
//   std::cin >> reiting;


   product = "ягода-"+ std::to_string(i);
   cout<<"Пожалуйста, введите название ягоды:  "<< product <<endl;
//   std::cin >> product;


   products.insert(std::make_pair(reiting, product));
 }

cout<<endl;
cout<<"Через оператор std::cin с консоли были введены поочередно"<<endl;
cout<<"все рейтинги и названия ягод."<<endl;
cout<<endl<<endl;
cout<<"Результат после сортировки данных:"<<endl<<endl;

for (const auto& element : products)
        std::cout << element.first << "-рейтинг:    " << element.second << std::endl;


cout<<endl<<endl<<endl<<endl;

}


