
#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel { // a class called "YouTubeChannel"
private: // do not expose the class properties
    string name;
    int subscribersCount;
    list<string> publishedVideoTitles;
protected:
    string ownerName; // this is visible on chld and can be modified

public: // expose only apropriated methods to the user

    // class constructor it has the same name of the class
    YouTubeChannel(string _name, string _owner) {
        name = _name;
        ownerName = _owner;
        subscribersCount = 0;
    }


    // class methods
    void GetInfo() {
        cout << "********** Channel **********" << endl;
        cout << "Name: " << name << endl;
        cout << "Owner: " << ownerName << endl;
        cout << "Sbuscribers: " << subscribersCount << endl << endl;

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
};


class CookingYouTubeChannel: public YouTubeChannel {
    // YouTubeChannel is the base class
    // CookingYouTubeChannel is the derived class
    // 
    // that is inheritance

public:
    CookingYouTubeChannel(string _name, string _ownerName): YouTubeChannel(_name, _ownerName) {
        // constructor
    }
    void Practice() {
        // derived class method visable only for this class
        cout << "********** Description ***********" << endl;
        cout << ownerName <<" is practicing cooking, learning new recipes and experimenting with spices ...\n\n";
    }

};






int main()
{
    YouTubeChannel ytbChannel("ABMS Telecom", "Marcelo"); // the father

    ytbChannel.PublishVideo("1. Arduino My Frist Steps");
    ytbChannel.PublishVideo("2. Arduino IDE and Hello World! Code");
    ytbChannel.PublishVideo("3. Basic sensors");

    ytbChannel.Subscribe(); // 1
    ytbChannel.Subscribe(); // +1
    ytbChannel.Subscribe(); // +1
    ytbChannel.Unsubscribe(); // -1
    ytbChannel.Subscribe(); // +1
    ytbChannel.Subscribe(); // +1

    ytbChannel.GetInfo();




    CookingYouTubeChannel cookingChannel1("Amy's Kitchen", "Amy"); // the child
    CookingYouTubeChannel cookingChannel2("John's Kitchen Channel", "John");

    cookingChannel1.PublishVideo("Apple pie");
    cookingChannel1.PublishVideo("Chocolate cake");
    cookingChannel1.Subscribe(); // +1
    cookingChannel1.Subscribe(); // +1
    cookingChannel1.Subscribe(); // +1
    cookingChannel1.GetInfo();
    cookingChannel1.Practice();
    cookingChannel2.Practice();
    



    system("pause");
    return 0;

}
