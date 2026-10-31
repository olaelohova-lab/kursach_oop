class room { // комната

}

class fight : public room { // боевой

}
class enemy : public fight { // враг

}
class action : public fight { // действие

}
class riddle : public room { // задача

}
class equat : virtual public ridle { // уравнение

}
class interact : virtual public ridle { // взаимодействие 

}
class device : public equat { // устройство

}
