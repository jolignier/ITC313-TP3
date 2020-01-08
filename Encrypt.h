//
// Created by ipro on 08/01/2020.
//

#ifndef UNTITLED1_ENCRYPT_H
#define UNTITLED1_ENCRYPT_H

#include <string>

using namespace std;

class Encrypt {

protected:
    string m_plain;
    string m_cipher;

public:
    Encrypt();
    string get_plain() const;
    string get_cipher() const;

    bool read(bool isPlain, string filename);
    bool write(bool isPlain, string filename);

     string encode() ;
     string decode() ;

};


#endif //UNTITLED1_ENCRYPT_H
