#include "Tests.h"
#include "Vector.h"
#include <iostream>
#include "TimeSeries.h"
#include "RandomHelper.h"
#include "TimeSeriesTemplate.h"

void test_series()
{
	std::cout << "test_series:" << "\n";
	std::cout << "Wait approximately. 5 sec for data with:" << "\n";
	std::cout << "Approximately: Mean duration~50 and  Mean value~1 " << "\n";


	time_series series;
	for (size_t i = 0; i < 100; i++)
	{
		const auto value = random_value();
		series.add(value);

		delay();
	}
	std::cout << "Mean duration:" << series.mean_duration() << "\n";
	std::cout << "Mean value:" << series.mean_value() << "\n";
	std::cout << "\n";
}
//Opgave b)
void test_series_template_double()
{
	std::cout << "test_series_template_double:" << "\n";
	std::cout << "Wait approximately. 5 sec for data with:" << "\n";
	std::cout << "Approximately: Mean duration~50 and  Mean value~1 " << "\n";

	time_series_template<double> series;
    for (time_t i = 0; i < 100; i++) {
        const auto value = random_value();
        series.add(value);

        delay();
    }
	
	std::cout << "Mean duration:" << series.mean_duration() << "\n";
	std::cout << "Mean value:" << series.mean_value() << "\n";
    std::cout << "\n";
}
//Opgave c)
void test_series_template_vector()
{
	std::cout << "test_series_template_vector:" << "\n";
	std::cout << "Wait approximately. 5 sec for data with:" << "\n";
	std::cout << "Approximately: Mean duration~50 and  Mean value~(1,1) " << "\n";

	// replace with time_series_template on type vector
    time_series_template<vector> series;
    for (time_t i = 0; i<100;i++) {
        vector vec;
        vec.x = random_value();
        vec.y = random_value();
        series.add(vec);

        delay();
    }
	
	
	std::cout << "Mean duration:" << series.mean_duration() << "\n";
	std::cout << "Mean value:" << series.mean_value().to_string() << "\n";
}
