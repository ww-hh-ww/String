#include"m_String.h"

m_string::m_string() : data(nullptr) {}

m_string::m_string(const char* str) {
    if (str) {
       
    } else {
        data = nullptr;
    }
}