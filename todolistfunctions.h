#ifndef utils //this means if not defined, then we just place a name after the ifndef
#define utils //if utils has niot been deined in the first line it should be defined

namespace todo{
    void assign();

    void upload();
    
    void todolist(int response);
}

void view();

void remove();

void del(int response);


#endif
//the reason for the # statement is to prevent this from being included in the code more than once in a code because that creates complications. 