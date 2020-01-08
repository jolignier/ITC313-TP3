//
// Created by ipro on 08/01/2020.
//

#include <fstream>
#include <iostream>
#include "Encrypt.h"

Encrypt::Encrypt() {}
string Encrypt::get_cipher() const {
    return m_cipher;
}

string Encrypt::get_plain() const {
    return m_plain;
}

bool Encrypt::read(bool isPlain, string filename) {
    ifstream file(filename.c_str());
    bool isOK;
    if(file) {
        isOK = true;
        string line, message;
        while(getline(file, line)){
            message += line + "\n";
        }
        if (isPlain){
            m_plain = message;
        } else {
            m_cipher = message;
        }
    } else {
        isOK = false;
    }
    return isOK;
}

bool Encrypt::write(bool isPlain, string filename) {
    ofstream file(filename.c_str());
    bool isOK;

    if(file) {
        isOK = true;
        if (isPlain) {
            file << m_plain;
        } else {
            file << m_cipher;
        }
    } else {
        isOK = false;
    }
    return isOK;
}
