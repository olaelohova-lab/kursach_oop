#include <iostream>
#include <string>
using namespace std;

class room { // комната
  int count;
  string script; // условие что надо сделать
  protected:
  bool compl;
};

class fight : public room { // боевой
  int all_enemy; // lkz
};
class enemy : public fight { // враг
  string name;
  int hp, atc, def;
  static int c_enemy; // для подсчета, если хп в ноль значит и общее кол-во уменьшается
};
class action : public fight { // действие

};
class riddle : public room { // задача
  protected:
  int count; // количество рычагов для ответа и управления
};
class equat : virtual public riddle { // уравнение
  string body; // 
  int ans; //
  int n;
  bool* massiv; // в методе будет высчитываться с помощью ans и заполняться с конца, выделяться память по ridl 
};
class interact : virtual public riddle { // взаимодействие
  bool* lever;
};
class device : public equat { // устройство
  bool castle;
};
//bebe
