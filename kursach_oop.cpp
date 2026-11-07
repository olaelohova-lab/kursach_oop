#include <iostream>
#include <string>
using namespace std;


class room { // комната абстрактный класс
  static int count_r; // общее количество комнат
  string script; // условие что надо сделать
  protected:
  int num_r; // номер комнаты
  bool compl;
  void virtual complite() = 0;
  public:
  room();
  room(int _num);
};

class fight : public room { // боевой
  int all_enemy; // lkz
  void complite(); // вызываем get_count_e, если 0, true
  public:
  fight();
  fight();
};
class enemy : public fight { // враг
  string name;
  int hp, atc, def;
  static int c_enemy; // для подсчета, если хп в ноль значит и общее кол-во уменьшается
  public:
  static int get_count_e();
  public:
  enemy();
  enemy();
};
class action : public fight { // действие
  public:
  action();
  action();
};

class riddle : public room { // задача
  protected:
  int count; // количество рычагов для ответа и управления
  public:
  riddle();
  riddle();
};

class equat : virtual public riddle { // уравнение
  string body; // тело функции
  int ans; //ответ
  bool massiv[4]; // в методе будет высчитываться с помощью ans и заполняться с конца, выделяться память по ridl 
  public:
  equat();
  equat();
};

class interact : virtual public riddle { // взаимодействие
  bool lever[4];
  void change_l(int n);
  public:
  interact();
  interact();
};

class device : public equat { // устройство
  bool castle; // Замок (закрыт или открыт)
  void complite(); // если lever==massiv то true
  public:
  device();
  device();
};
