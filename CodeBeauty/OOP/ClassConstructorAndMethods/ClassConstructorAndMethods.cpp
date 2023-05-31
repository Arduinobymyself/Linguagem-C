
#include <iostream>
#include <list>
using namespace std;

class youTubeChannel { // a class called "youTubeChannel"
public:
    string name;
    string ownerName;
    int subscribersCount;
    list<string> publishedVideoTitles;

    youTubeChannel(string _name, string _owner) { // class constructor
        name = _name;
        ownerName = _owner;
        subscribersCount = 0;
    }

    void getInfo() { // class method
        cout << "\n\nChannel:" << endl;
        cout << "Name: " << name << endl;
        cout << "Owner: " << ownerName << endl;
        cout << "Sbuscribers: " << subscribersCount << endl << endl;

        cout << "Videos:" << endl;
        for (string videoTitle : publishedVideoTitles) {
            cout << videoTitle << endl;
        }
    }
};


int main()
{
    youTubeChannel ytbChannel1("ABMS Telecom", "Marcelo"); // an object of the class "youTubeChannel

    ytbChannel1.publishedVideoTitles.push_back("1. Arduino By My Self");
    ytbChannel1.publishedVideoTitles.push_back("2. Initializing");
    ytbChannel1.publishedVideoTitles.push_back("3. Sensors");
    ytbChannel1.subscribersCount = 17000;

    ytbChannel1.getInfo();



    youTubeChannel ytbChannel2("AmySings", "Amy"); // an object of the class "youTubeChannel
    ytbChannel2.getInfo();



    /*
    // thats old style
    ytbChannel1.name = "ABMS Telecom";
    ytbChannel1.ownerName = "Marcelo";
    ytbChannel1.subscribersCount = 17000;
    ytbChannel1.publishedVideoTitles = { "1. Arduino By My Self", "2. Initializing", "3. Sensors" };

    cout << "\n\nChannel:" << endl;
    cout << "Name: " << ytbChannel1.name << endl;
    cout << "Owner: " << ytbChannel1.ownerName << endl;
    cout << "Sbuscribers: " << ytbChannel1.subscribersCount << endl << endl;

    cout << "Videos:" << endl;
    for (string videoTitle : ytbChannel1.publishedVideoTitles) {
        cout << videoTitle << endl;
    }
    */


    /*
    // thats old style
    ytbChannel2.name = "AmySings";
    ytbChannel2.ownerName = "Amy";
    ytbChannel2.subscribersCount = 7000;
    ytbChannel2.publishedVideoTitles = { "Johny-B - Cover", "Lorelei - Cover", "Starway to Heaven - Cover" };

    cout << "\n\nChannel:" << endl;
    cout << "Name: " << ytbChannel2.name << endl;
    cout << "Owner: " << ytbChannel2.ownerName << endl;
    cout << "Sbuscribers: " << ytbChannel2.subscribersCount << endl << endl;

    cout << "Videos:" << endl;
    for (string videoTitle : ytbChannel2.publishedVideoTitles) {
        cout << videoTitle << endl;
    }
    */







    system("pause");
    return 0;

}
