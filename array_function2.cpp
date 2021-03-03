#include <iostream>
#include <limits> // Dùng cho limit of buffer: std::numeric_limits<std::streamsize>::max()

using std::cout;
/*
How to input to a string?
And How to stop input at the middle ?
And How do we know How many element?
*/
void print_array(int array[], int size)
{
    //cout << size << std::endl;
    for(int i = 0; i < size; i++) {
        cout << array[i] << '\t';
    }
    cout << std::endl;
}
int main()
{
    const int SIZE = 100;
    int guesses[SIZE] ;
    int count = 0;
    for(int i =0; i < SIZE; i++)
    {
        if(std::cin >> guesses[i]) // return cin -> true of input worked
        {
            count++;
            // input work
        }
        else
        {
            // invalid character
            break;
        }
    }
    print_array(guesses, count); // NOT print_array(guesses, SIZE);
    
    std::cin.clear(); 
    /*
    Hình nhu cin.clear() có tác dụng là xóa kiểu dữ liệu đã nhập sai :)) Ex: từ int sang char
    Có dòng này thì khi dùng lại std::cin >> test : nó lấy lun giá trị đã sai trước đó lun
    Solution: 
    std::cin.ignore(number character , delimiter )
    */
    //std::cin.ignore(1000, '\n'); //1000 là số đại thôi, cần lấy max buffer 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::string test;
    std::cin >> test;
    std::cout << test << std::endl;
    
    // NOTE: std::cin is in Non working state, because else{} we donot direct it to something else by using >>
    // Solution: we need to clear that state
    //std::cin.clear();


}
// PROBLEM:
// We cannot stop the array 
/*
int main()
{
    const int SIZE = 10;
    int guesses[SIZE] ;
    for(int i = 0; i < SIZE ; i++)
    {
        std::cin >> guesses[i];
    }
    print_array(guesses, SIZE); 
}
*/
