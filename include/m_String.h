#ifndef __M_STRING_H__
#define __M_STRING_H__

class m_string
{
    public:
        m_string();
        m_string(const char* str);
        m_string(const m_string& other);
        ~m_string();

        m_string& operator=(const m_string& other);
        const char* c_str() const;
    private:
        char* data; 

};
#endif
