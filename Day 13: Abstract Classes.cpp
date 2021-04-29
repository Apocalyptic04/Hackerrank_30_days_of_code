// Write your MyBook class here
class MyBook : Book{
        private:
            int price;
                public:
                    MyBook(string t,string a,int price):Book(t,a){
                            this->price = price;
                                }
                                    void display(){
                                            cout << "Title: " << title << endl << "Author: " << author << endl << "Price: " << price << endl;
                                                }
                                                };
    //   Class Constructor
    //   
    //   Parameters:
    //   title - The book's title.
    //   author - The book's author.
    //   price - The book's price.
    //
    // Write your constructor here
    
    
    //   Function Name: display
    //   Print the title, author, and price in the specified format.
    //
    // Write your method here
    
// End class

