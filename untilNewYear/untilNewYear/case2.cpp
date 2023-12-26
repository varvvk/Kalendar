#include "case2.h"
#include "furTree.h"
#include <ctime>
#include <iomanip>
#include <thread>
#include <chrono> //библиотека для работы со временем 

int case2() {
	using namespace std;

	system("color F4");
	tm newYearDate = {};
	newYearDate.tm_year = 2024 - 1900;
	newYearDate.tm_mon = 0;
	newYearDate.tm_mday = 1;
	newYearDate.tm_hour = 0;
	newYearDate.tm_min = 0;
	newYearDate.tm_sec = 0;

	chrono::system_clock::time_point nowTime = chrono::system_clock::now();
	chrono::system_clock::time_point eventTime = chrono::system_clock::from_time_t(mktime(&newYearDate));

	chrono::duration<int> timeDifference = chrono::duration_cast<chrono::duration<int>>(eventTime - nowTime);

	int daysUntil = timeDifference.count() / (60 * 60 * 24);
	int hoursUntil = (timeDifference.count() % (60 * 60 * 24)) / 3600;
	int minutesUntil = (timeDifference.count() % 3600) / 60;
	int secondsUntil = timeDifference.count() % 60;

	furTree();
	cout << "\n" << setw(60) << setfill(' ') << "ДО НОВОГО ГОДА" << endl;
	while (daysUntil > 0 || hoursUntil > 0 || minutesUntil > 0 || secondsUntil > 0) {
		cout << "\r" << daysUntil << " дней " << hoursUntil << " часов " << minutesUntil << " минут " << secondsUntil << " секунд " << flush;
		this_thread::sleep_for(chrono::seconds(1));

		nowTime = chrono::system_clock::now();
		timeDifference = chrono::duration_cast<chrono::duration<int>>(eventTime - nowTime);
		daysUntil = timeDifference.count() / (60 * 60 * 24);
		hoursUntil = (timeDifference.count() % (60 * 60 * 24)) / 3600;
		minutesUntil = (timeDifference.count() % 3600) / 60;
		secondsUntil = timeDifference.count() % 60;
	}
	cout << "С Новым Годом!!\n";
	return 0;
}