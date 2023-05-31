
#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel { // a class called "YouTubeChannel"
private: // do not expose the class properties
    string name;
    string ownerName;
    int subscribersCount;
    list<string> publishedVideoTitles;

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


int main()
{
    YouTubeChannel ytbChannel("ABMS Telecom", "Marcelo"); // an object of the class "YouTubeChannel

    // old style without encapsulation
    /*ytbChannel.publishedVideoTitles.push_back("1. Arduino My Frist Steps");
    ytbChannel.publishedVideoTitles.push_back("2. Arduino IDE and Hello World! Code");
    ytbChannel.publishedVideoTitles.push_back("3. Basic sensors");
    ytbChannel.subscribersCount = 17000;*/

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



    system("pause");
    return 0;

}
