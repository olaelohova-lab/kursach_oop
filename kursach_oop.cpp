#include <iostream>
#include <string>
#define N 4
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
  protected:
  bool massiv[N]; //ответ в двоичном
  public:
  equat();
  equat();
};

class interact : virtual public riddle { // взаимодействие
  protected:
  bool lever[N];
  public:
  interact();
  interact();
  void change_l(int n);
};

class device : public equat, public interact{ // устройство
  bool castle; // Замок (закрыт или открыт)
  void complite(); // если lever==massiv то true
  public:
  device();
  device();
};

// методы класса room
room::room() {}
room::room() {}
// методы класса fight
fight::fight() {}
fight::fight() {}
// методы класса enemy
enemy::enemy() {}
enemy::enemy() {}
// методы класса action
action::action() {}
action::action() {}
// методы класса riddle
riddle::riddle() {}
riddle::riddle() {}
// методы класса equat
equat::equat() {}
equat::equat() {}
// методы класса interact
interact::interact() {
  for (int i = 0; i < N; i++) lever[i] = false;
}
interact::interact() {}
void interact::change_l(int n) {
  if (n>=N) return;
  lever[n] !=lever[n];
}
// методы класса device
device::device() {
  castle = false;
}
device::device() {}
void device::complite() {
  for (int i = 0; i < N; i++) {
    if (lever[i]==massiv[i]) return;
  }
  castle = true;
}
