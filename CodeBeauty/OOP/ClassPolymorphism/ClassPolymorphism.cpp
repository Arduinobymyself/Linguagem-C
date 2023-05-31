
#include <iostream>
#include <list>
using namespace std;

/*
Polymorphism describes he ability of an object for example to have multiple forms
that means taht you can have 2 or more of the same base class 
those objects can have the method that has the same name but different implementation meaning different
behavior
*/

class YouTubeChannel { // a class called "YouTubeChannel"
private: // do not expose the class properties
    string name;
    int subscribersCount;
    list<string> publishedVideoTitles;
protected:
    string ownerName; // this is visible on child and can be modified
    int ContentQuality;

public: // expose only apropriated methods to the user

    // class constructor it has the same name of the class
    YouTubeChannel(string _name, string _owner) {
        name = _name;
        ownerName = _owner;
        subscribersCount = 0;
        ContentQuality = 0;
    }


    // class methods
    void GetInfo() {
        cout << "********** Channel **********" << endl;
        cout << "Name: " << name << endl;
        cout << "Owner: " << ownerName << endl;
        cout << "Sbuscribers: " << subscribersCount << endl;
        cout << "Content Quality:" << ContentQuality << endl << endl;

        cout << "********** Videos ***********" << endl;
        for (string videoTitle : publishedVideoTitles) {
            cout << videoTitle << endl;
        }
        cout << "*****************************\n\n\n\n";
    }

    void Subscribe() {
        subscribersCount++;
    }

    void Unsubscribe() {
        if (subscribersCount > 0) {
            subscribersCount--;
        }
    }

    void PublishVideo(string title) {
        publishedVideoTitles.push_back(title);
    }

    void CheckAnalytics() {
        if (ContentQuality < 5) 
            cout << name << " has bad quality content." << endl;
        else 
            cout << name << " has a great quality content." << endl;
        cout << "\n\n";
    }
};


class CookingYouTubeChannel : public YouTubeChannel {
    // YouTubeChannel is the base class
    // CookingYouTubeChannel is the derived class
    // inherits from the base class

public:
    CookingYouTubeChannel(string _name, string _ownerName) : YouTubeChannel(_name, _ownerName) {
        // constructor
    }

    void Practice() {
        ContentQuality++;
        // derived class method visable only for this class
        cout << "********** Description ***********" << endl;
        cout << ownerName << " is practicing cooking, learning new recipes and experimenting with spices ...\n\n";
    }

};


class SingersYouTubeChannel : public YouTubeChannel {
    // YouTubeChannel is the base class
    // CookingYouTubeChannel is the derived class
    // inherits from the base class

public:
    SingersYouTubeChannel(string _name, string _ownerName) : YouTubeChannel(_name, _ownerName) {
        // constructor
    }

    void Practice() {
        ContentQuality++;
        // derived class method visable only for this class
        cout << "********** Description ***********" << endl;
        cout << ownerName << " is taking singing classes, learning new songs, learning how to dance ... \n\n";
    }

};




int main()
{
    YouTubeChannel ytbChannel("ABMS Telecom", "Marcelo"); // the father
    
    CookingYouTubeChannel cookingChannel1("Amy's Kitchen", "Amy"); // the child
    CookingYouTubeChannel cookingChannel2("John's Kitchen Channel", "John");
    SingersYouTubeChannel singersChannel("John Sings", "John");

    ytbChannel.PublishVideo("1. Arduino My Frist Steps");
    ytbChannel.PublishVideo("2. Arduino IDE and Hello World! Code");
    ytbChannel.PublishVideo("3. Basic sensors");
    ytbChannel.Subscribe(); // 1
    ytbChannel.Subscribe(); // +1
    ytbChannel.Subscribe(); // +1
    ytbChannel.Unsubscribe(); // -1
    ytbChannel.Subscribe(); // +1
    ytbChannel.Subscribe(); // +1
    //----------------------------------------------------

    cookingChannel1.PublishVideo("Apple pie");
    cookingChannel1.PublishVideo("Chocolate cake");
    cookingChannel1.Subscribe(); // +1
    cookingChannel1.Subscribe(); // +1
    cookingChannel1.Subscribe(); // +1
    cookingChannel1.Practice();
    cookingChannel1.Practice();
    cookingChannel1.Practice();
    //----------------------------------------------------


    cookingChannel2.Practice();
    //----------------------------------------------------


    singersChannel.Subscribe();
    singersChannel.Subscribe();
    singersChannel.Subscribe();
    singersChannel.Practice();
    singersChannel.Practice();
    singersChannel.Practice();
    singersChannel.Practice();
    singersChannel.Practice();
    singersChannel.Practice();
    singersChannel.Practice();
    //----------------------------------------------------

    ytbChannel.GetInfo();
    cookingChannel1.GetInfo();
    cookingChannel2.GetInfo();
    singersChannel.GetInfo();


    // using pointer to point to an object of derived class and store taht to a pointer of base class
    YouTubeChannel* ytb1 = &cookingChannel1;
    YouTubeChannel* ytb2 = &singersChannel;
    ytb1->CheckAnalytics(); // invoke this methot from base class via pointer
    ytb2->CheckAnalytics();

    system("pause");
    return 0;

}
