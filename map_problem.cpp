#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

void Election2019(char party[], int seats[], int n)
{
    map<char,int> mp;

    for(int i = 0; i < n; i++)
    {
        mp[party[i]] = seats[i]; // party name as key, seat count as value
    }

    // Display map
    for(auto i : mp){
        cout << i.first << " " << i.second << endl;
    }

    // Find maximum seats
    int maxSeats = -1;
    for(auto i : mp) {
        maxSeats = max(maxSeats, i.second);
    }

    cout << maxSeats << endl;
}

int main()
{
    int n;
    char party[100];
    int seats[100]; 

    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> seats[i];  // Seats first
    }

    for(int i = 0; i < n; i++)
    {
        cin >> party[i];  // Then parties
    }

    Election2019(party, seats, n);

    return 0;
}
