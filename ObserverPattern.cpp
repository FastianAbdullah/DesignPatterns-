/*
* Consider a weather forecasting system with multiple weather stations 
and display boards. The stations collect data like temperature, humidity, 
etc. The display boards, located in various places, show this data. When 
weather conditions change at a station, the corresponding display boards 
need to be updated. The Observer pattern can efficiently manage this by 
having the stations as ‘Subjects’ and the display boards as ‘Observers’. 
The boards only update when there are actual changes, saving resources. 
New boards can easily subscribe to stations, and any board can 
unsubscribe when updates are no longer needed
*/
/*
#include <iostream>
using namespace std;

// Observer interface declares the update method, used by subjects.
class Observer {
public:
	virtual ~Observer() {}
	virtual void update(float temperature, float humidity, float windSpeed) = 0;
	virtual void print(float temperature, float humidity, float windSpeed) = 0;
};
// Subject interface declares a set of methods for managing subscribers.
class WeatherStation {
public:
	virtual ~WeatherStation() {}
	virtual void registerObserver(Observer* o) = 0;
	virtual void removeObserver(Observer* o) = 0;
	virtual void notifyObservers() = 0;
};
// Concrete Observers react to the updates issued by the Subject they had been attached 
class DisplayBoard : public Observer {
public:
	void update(float temperature, float humidity, float windSpeed) override {
		cout << "Current conditions: " << temperature << "C degrees, "
			<< humidity << "% humidity, " << windSpeed << " km/h wind speed\n";
	}
	
	void print(float temperature, float humidity, float windSpeed) override {
		cout << "Current conditions: " << temperature << "C degrees, "
			<< humidity << "% humidity, " << windSpeed << " km/h wind speed\n";
	}

};
// Concrete Subject owns some important state and notifies observers when the state 
class ConcreteWeatherStation : public WeatherStation {
private:
	Observer* observers[100]; // Array to hold observer pointers
	int observerCount = 0; // Count of registered observers
	float temperature = 0.0f;
	float humidity = 0.0f;
	float windSpeed = 0.0f;
public:
	// Register an observer
	void registerObserver(Observer* o) override {
		observers[observerCount++] = o;
	}
	// Remove an observer
	void removeObserver(Observer* o) override {
		for (int i = 0; i < observerCount; i++) {
			if (observers[i] == o) {
				for (int j = i; j < observerCount - 1; j++) {
					observers[j] = observers[j + 1];
				}
				observerCount--;
				break;
			}
		}
	}
	// Notify all observers about the change in state
	void notifyObservers() override {
		for (int i = 0; i < observerCount; i++) {
			observers[i]->update(temperature, humidity, windSpeed);
		}
	}
	// Called when measurements have changed
	void measurementsChanged() {
		notifyObservers();
	}
	// Set the measurements and notify observers 
	void setMeasurements(float temperature, float humidity, float windSpeed)
	{

		this->temperature = temperature;
		this->humidity = humidity;
		this->windSpeed = windSpeed;
		measurementsChanged();
	}

	void printObsersersData()
	{
		for (int i = 0; i < observerCount; i++) {
			observers[i]->print(temperature, humidity, windSpeed);
		}
	}
};
int main() {
	// Create a ConcreteWeatherStation (Subject)
	ConcreteWeatherStation* weatherStation = new ConcreteWeatherStation();
	// Create a DisplayBoard (Observer)
	DisplayBoard* displayBoard = new DisplayBoard();
	DisplayBoard* displayBoardw = new DisplayBoard();
	// We can add register as many observer as we can. 
	weatherStation->registerObserver(displayBoard);
	weatherStation->registerObserver(displayBoardw);
	// Set measurements
	weatherStation->setMeasurements(25.0f, 65.0f, 10.0f);
	// Cleaning up
	//weatherStation->notifyObservers();	//calling from weatherStation in setMeasurements

	weatherStation->setMeasurements(1.0f, 1.0f, 1.0f);
	
	weatherStation->printObsersersData();
	delete displayBoard;
	delete weatherStation;
	return 0;
}
*/