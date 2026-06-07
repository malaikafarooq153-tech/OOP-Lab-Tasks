#include <iostream>
#include <string>
using namespace std;
struct MovieData
{
    string title;
    string director;
    int yearReleased;
    int runningTime;
};

class Movie
{
public:
    void displayMovie(MovieData m)
    {
        cout << "\n----- Movie Information -----" << endl;
        cout << "Title         : " << m.title << endl;
        cout << "Director      : " << m.director << endl;
        cout << "Year Released : " << m.yearReleased << endl;
        cout << "Running Time  : " << m.runningTime << " minutes" << endl;
    }
};

int main()
{
    MovieData movie1, movie2;
    Movie obj;

    cout << "Enter details for Movie 1" << endl;
    cout << "Title: ";
    getline(cin, movie1.title);

    cout << "Director: ";
    getline(cin, movie1.director);

    cout << "Year Released: ";
    cin >> movie1.yearReleased;

    cout << "Running Time (minutes): ";
    cin >> movie1.runningTime;
    cin.ignore();

    cout << "\nEnter details for Movie 2" << endl;
    cout << "Title: ";
    getline(cin, movie2.title);

    cout << "Director: ";
    getline(cin, movie2.director);

    cout << "Year Released: ";
    cin >> movie2.yearReleased;

    cout << "Running Time (minutes): ";
    cin >> movie2.runningTime;

    obj.displayMovie(movie1);
    obj.displayMovie(movie2);

    return 0;
}