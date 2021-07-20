#include <cstdint>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bit>
#include <cmath>

namespace disruptor 
{
	namespace math 
	{
		/**
		* Please replace it with std::ceil2 when ever its
		* available in c++20.
		*/
		template<std::int32_t POWER>
		auto ceil_to_next_power_of(auto x) {
			auto result = POWER;
			while (result < x)  result <<= 1;
			return result;
		}

		auto ceil2(auto x)
		{
			return ceil_to_next_power_of<2>(x);
		}

		/**
		* Please replace it with std::ispow2 when ever its
		* available in c++20.
		*/
		template<int NUM>
		auto is_power_of(auto n)
		{
			if (n == 0) {
				return false;
			}
			else {
				using namespace std;
				return ceil(log2(n)) == floor(log2(n));
			}
		}

		auto ispow2(auto num) {
			return is_power_of<2>(num);
		}
	}
}

