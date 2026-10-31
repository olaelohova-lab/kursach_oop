class room { // комната

};

class fight : public room { // боевой

};
class enemy : public fight { // враг

};
class action : public fight { // действие

};
class riddle : public room { // задача

};
class equat : virtual public riddle { // уравнение

};
class interact : virtual public riddle { // взаимодействие 

};
class device : public equat { // устройство

};
//bebe