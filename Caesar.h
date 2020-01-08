//
// Created by ipro on 08/01/2020.
//

#ifndef ITC313_TP3_CAESAR_H
#define ITC313_TP3_CAESAR_H


#include "Encrypt.h"

using namespace std;

class Caesar: public Encrypt {
private:
    int m_shift;

    bool isChar(int car);

public:
    Caesar(int shift);

    void encode();
    void decode();

    void setPlainMessage(string message);
    void setCipherMessage(string message);

    void setShift(int shift);

};


#endif //ITC313_TP3_CAESAR_H
