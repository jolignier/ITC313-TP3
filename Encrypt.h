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
    string getPlain() const;
    string getCipher() const;

    bool read(bool isPlain, string filename);
    bool write(bool isPlain, string filename);

    /*
     * Abstract method to be implemented in child classes to
     * encode or decode according to their own algorithm
     */
    virtual void encode() = 0;
    virtual void decode() = 0;

};


#endif //UNTITLED1_ENCRYPT_H
