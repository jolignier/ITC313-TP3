//
// Created by ipro on 08/01/2020.
//

#include "Caesar.h"
#include <string>
#include <iostream>

Caesar::Caesar(int shift) {
    m_shift = shift%26;
}

void Caesar::setPlainMessage(string message){
    m_plain = message;

}
void Caesar::setCipherMessage(string message){
    m_cipher = message;
}

void Caesar::encode() {
    m_cipher = "";
    for (int i = 0; i < m_plain.length(); ++i) {
        int car = toascii(m_plain.at(i));
        if (!isChar(car)) {
            m_cipher += (char) (car);
        } else {
            m_cipher += (char)(car) + m_shift;
        }

    }

}

void Caesar::decode() {
    m_plain = "";
    for (int i = 0; i < m_plain.length(); ++i) {
        int car = toascii(m_plain.at(i));
        if (!isChar(car)) {
            m_cipher += (char)(car);
        } else {
            m_cipher += (char)(car) - m_shift;
        }

    }
}

bool Caesar::isChar(int car){
    bool res;
    if (car > 65 && car <90) {
        // car is a upper case
        res = true;
    }else if (car > 97 && car < 122) {
        // Car is a lower case
        res = true;
    }else {
        res = false;
    }
    return res;
}
