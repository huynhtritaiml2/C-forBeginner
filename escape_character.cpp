#include <iostream>
#include <string>

using std::cout;

/*
Escape Sequence: Chuỗi thoát NOT Escape Character 
Vì nó gồm có 2 kí tự: Ex: \n, \t 
\b : == backspace: delete a character in front of it
\v : vertical tav :)) 
\a : we can hear beep sound :)) in terminal, no in VSC 
\0 : terminating character, Kết thúc chuỗi 
\r : cursor về lại đầu dòng 
\f : giống \v, nhưng đã lỗi thời 

\t: tab
\n: new line
\' == '
\" == "
\\ == \


*/

int main()
{
    cout << "Hello\bThere" << std::endl; // HellThere
    
    cout << "Hello\vThere" << std::endl;
    /*
    Hello
         There
    */
    cout << "Hello\aThere" << std::endl; // Nghe được tiếng beep :)) 
    cout << "Hello\a\a\a\a\aThere" << std::endl; 
    // Chác tại nhanh quá nên cũng chỉ nghe 1 tiếng beep 
    
    cout << "Hello\0There 0" << std::endl; // Hello ****
    cout << "Hello\rThere r" << std::endl; // There , vì Hello bị There xóa rồi 
    cout << "Hello\fThere f" << std::endl; 
    /*
    Cách này đã lỗi thời 
    Hello
         There f
    */



}