
#include <iostream>
#include <list>
using namespace std;

class youTubeChannel { // a class called youTubeChannel
public:
    string name;
    string ownerName;
    int subscribersCount;
    list<string> publishedVideotitles;
};


int main()
{
    youTubeChannel ytbChannel; // an object of the class "youTubeChannel
    ytbChannel.name = "ABMS Telecom";
    ytbChannel.ownerName = "Marcelo";
    ytbChannel.subscribersCount = 17000;
    ytbChannel.publishedVideotitles = { "1. Arduino By My Self", "2. Initializing", "3. Sensors" };

    cout << "Channel:" << endl;
    cout << "Name: " << ytbChannel.name << endl;
    cout << "Owner: " << ytbChannel.ownerName << endl;
    cout << "Sbuscribers: " << ytbChannel.subscribersCount << endl << endl
        ;
    
    cout << "Videos:" << endl;
    for (string videoTitle: ytbChannel.publishedVideotitles) {
        cout << videoTitle << endl;
    }







    system("pause");
    return 0;

}
