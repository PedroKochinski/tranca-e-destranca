#ifndef USER_INTERFACE_HPP
#define USER_INTERFACE_HPP

#include <string>

namespace carro{

class UserInterface{

    public:
        UserInterface();
        virtual ~UserInterface() = default;
    
        int displayOperations();
        void clearScreen();

        void exitMessage();
        void pauseMessage();
        void okMessage();
        void invalidMessage();

        void displayMessage(std::string msg);


        std::string lerBufferString(std::string msg);
        int lerBufferInt(std::string msg);

    private:
        int bufferint;
        std::string bufferstr;
};

}

#endif