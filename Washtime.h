#ifndef TP1_MODELOS_WASH_H
#define TP1_MODELOS_WASH_H


class Washtime {

private:
    int clothNumber;
    int time;
    bool checked;

public:
    Washtime();

    Washtime(int c, int t);

    void setValues(int clothNumber, int time);

    void setTime(int t);

    int getTime();

    void setClothNumber(int c);

    void setClothChecked();

    bool clothChecked ();
};

#endif //TP1_MODELOS_WASH_H
