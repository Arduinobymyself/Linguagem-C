
#include <iostream>
#include <string>
#include <list>
using namespace std;


struct YouTubeChannel {
    // member of a struc are public by default
    string Name;
    int SubscribersCount;
    YouTubeChannel(string name, int subscribersCount) {// constructor
        Name = name;
        SubscribersCount = subscribersCount;
    }

    bool operator==(const YouTubeChannel& channel) const {
        return this->Name == channel.Name;
    }
};

ostream& operator<<(ostream& COUT, YouTubeChannel& ytbChannel) {
    COUT << "Name: " << ytbChannel.Name << endl;
    COUT << "Subscribers: " << ytbChannel.SubscribersCount << endl;
    return COUT;
}

struct MyCollection {
    list<YouTubeChannel>myChannels;
    
    void operator+=(YouTubeChannel& ytbChannel) {
        this->myChannels.push_back(ytbChannel);
    }

    void operator-=(YouTubeChannel& ytbChannel) {
        this->myChannels.remove(ytbChannel);
    }
};

ostream& operator<<(ostream& COUT, MyCollection& myCollection) {
    for (YouTubeChannel ytbchannel : myCollection.myChannels)
        COUT << ytbchannel << endl;
    return COUT;
}




int main()
{
    YouTubeChannel ytb1 = YouTubeChannel("ABMS", 17000);
    YouTubeChannel ytb2 = YouTubeChannel("Arduino", 37000);
    YouTubeChannel ytb3 = YouTubeChannel("Cooking", 45000);


    // cout << ytb1; 
    // show an error, we need to overload the << (insertion) operator to recotgnize how to handle our  user defined type
    // after overload
    cout << ytb1; // now cout knows how to print the struct
    cout << "---------------------------------------------------\n\n";

    // cout << ytb1 << ytb2; // error again cout do not know how to handle multiple arguments of type struct
    cout << ytb1 << ytb2; // after the function returned ostream reference
    operator<<(cout, ytb1);// same as cout << ytb1 but calling the operator function
    cout << "---------------------------------------------------\n\n";

    MyCollection myCollection;
    myCollection += ytb1; // needs to overload operator +=
    myCollection += ytb2;
    myCollection += ytb3;
    cout << myCollection;
    cout << "---------------------------------------------------\n\n";

    myCollection -= ytb2; // needs to overload oprators -= and ==
    cout << myCollection;
    cout << "---------------------------------------------------\n\n";


    system("pause");
    return 0;
}
