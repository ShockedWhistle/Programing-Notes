#include <iostream>
using namespace std;

class Student{
    public:
        string name;
        string major;
        double gpa;

        Student(string aName, string aMajor, double aGpa){
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

        bool hasHonors(){ // Object Funnction
            if(gpa >= 3.5){
                return true;
            }
            return false;
        }
};

void objectFunctions(){

    Student student1("Jim", "Business", 2.4);
    Student student2("Pam", "Art", 3.6);

    cout << student1.hasHonors() << endl;; // Calls object function hasHonors()

}

class Book { // Creates a Class and spesifies what it will hold
    public:
        string title;
        string author;
        int pages;
        Book(string aTitle, string aAuthor, int aPages){ // Defines a Constructor that will run anytime an Object of this Class is made
        title = aTitle;
        author = aAuthor;
        pages = aPages;
    }
};

class Movie{
    private: // Private only accesable inside the Movie class can access it
        string rating;

    public: // Means that all under is public and all code can acces it.
        string title;
        string director;

        Movie(string aTitle, string aDirector, string aRating){
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }

        void setRating(string aRating){ // Setter if you want to set rating after object is made you must go through this
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){
                rating = aRating;
            }
            else{
                rating = "NR";
            }
        }
    string getRating(){
        return rating;
    }

};

void gettingsSetters(){

    Movie avengers("The Avengers", "Joss Whedon", "PG-13");

    avengers.setRating("Dog");

    cout << avengers.getRating() << endl;

}

class Chef{
    public:
        void makeChicken(){
            cout << "Chef makes Chicken." << endl;
        }
        void makeSalad(){
            cout << "Chef makes Salad." << endl;
        }
        void makeSpecialDish(){
            cout << "Chef makes BBQ Ribs." << endl;
        }
};

class ItalianChef: public Chef{ // After the colen is what this Class will Inherit
    public:
        void makePasta(){
            cout << "The chef made Pasta." << endl;
        }
        void makeSpecialDish(){
            cout << "The chef made Chicken Parmashan." << endl;
        }
};

void inheritance(){
    Chef chef;
    chef.makeChicken();

    ItalianChef italianchef;
    italianchef.makeChicken();
    italianchef.makePasta();

    chef.makeSpecialDish();
    italianchef.makeSpecialDish();
}

int main(){

    /*
    Book book1("Harry Potter"); // Defines an Object based off the Book class
    book1.title = "Harry Potter";
    book1.author ="JK Rowling";
    book1.pages = 500;

    Book book2("Lord of the Rings"); // Passing the title to the constructor.
    book2.title = "Lord of the Rings";
    book2.author = "Tolkein";
    book2.pages = 700;
    */

   Book book1("Harry Potter", "JK Rowling", 500);

    cout << book1.title << endl;

    objectFunctions();
    gettingsSetters();
    inheritance();
    return 0;
}