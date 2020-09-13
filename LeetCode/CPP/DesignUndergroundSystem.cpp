// Author: Pranjal Kaler
// LeetCode: https://leetcode.com/problems/design-underground-system/ 

#include <bits/stdc++.h>

class UndergroundSystem {

	// map for trip ID -> (source station, start time)
	std :: map <int, std :: pair<std :: string, int>> onGoingTrip;

	// map for (source, destination) -> (total trips, avg)
	std :: map <std :: pair<std :: string, std :: string>, std :: pair<int, double>> database;
	
public:
	UndergroundSystem() {
		
	}
	
	void checkIn(int id, std :: string stationName, int t) {
		std :: pair<std :: string, int> newTrip(stationName, t);
		onGoingTrip.insert({id, newTrip});
	}
	
	void checkOut(int id, std :: string stationName, int t) {
		auto trip = onGoingTrip.find(id); // itr to map <(id) -> (station, startTime)>
		if(trip != onGoingTrip.end()) {

			std :: pair<std :: string, std :: string> stations(trip->second.first, stationName);
			auto tripDataForODPair = database.find(stations); // itr to map <(start,end) -> (totalTrips,avg)>
			
			if(tripDataForODPair != database.end()) {

				auto& tripData = tripDataForODPair->second;
				tripData.second = (tripData.first*tripData.second + (t - trip->second.second))/(++tripData.first);

			}
			else {

				std :: pair<int, double> tripData(1, t - trip->second.second);
				database.insert({stations, tripData});

			}
			onGoingTrip.erase(trip);
		}
	}
	
	double getAverageTime(std :: string startStation, std :: string endStation) {
		auto ODPair = std :: pair<std :: string, std :: string>(startStation, endStation);
		return (database.find(ODPair))->second.second;
	}
};
 
int main() {
	UndergroundSystem undergroundSystem;
	undergroundSystem.checkIn(45, "Leyton", 3);
	undergroundSystem.checkIn(32, "Paradise", 8);
	undergroundSystem.checkIn(27, "Leyton", 10);
	undergroundSystem.checkOut(45, "Waterloo", 15);
	undergroundSystem.checkOut(27, "Waterloo", 20);
	undergroundSystem.checkOut(32, "Cambridge", 22);
	std :: cout << undergroundSystem.getAverageTime("Paradise", "Cambridge") << std :: endl;
	// return 14. There was only one travel from "Paradise" (at time 8) to "Cambridge" (at time 22)
	
	std :: cout << undergroundSystem.getAverageTime("Leyton", "Waterloo") << std :: endl;
	// return 11. There were two travels from "Leyton" to "Waterloo", a customer with id=45 from time=3 to time=15
	// and a customer with id=27 from time=10 to time=20. So the average time is ( (15-3) + (20-10) ) / 2 = 11
	
	undergroundSystem.checkIn(10, "Leyton", 24);
	std :: cout << undergroundSystem.getAverageTime("Leyton", "Waterloo") << std :: endl; //return 11.00000

	undergroundSystem.checkOut(10, "Waterloo", 38);
	std :: cout << undergroundSystem.getAverageTime("Leyton", "Waterloo") << std :: endl; // return 12.00000
}
