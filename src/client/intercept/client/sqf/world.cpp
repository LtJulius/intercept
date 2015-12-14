#include "client\pointers.hpp"
#include "common_helpers.hpp"

namespace intercept {
	namespace sqf {
		namespace world {
			float world_size() {
				return sqf::__helpers::__retrieve_nular_number(client::__sqf::nular__worldsize__ret__scalar);
			}

			std::string world_name()
			{
				return game_value(host::functions.invoke_raw_nular(client::__sqf::nular__worldname__ret__string));
			}

			float wind_str() {
				return __helpers::__retrieve_nular_number(client::__sqf::nular__windstr__ret__scalar);
			}

			float wind_dir() {
				return __helpers::__retrieve_nular_number(client::__sqf::nular__winddir__ret__scalar);
			}

			vector3 wind() {
				return __helpers::__retrieve_nular_vector3(client::__sqf::nular__wind__ret__array);
			}

			float waves() {
				return __helpers::__retrieve_nular_number(client::__sqf::nular__waves__ret__scalar);
			}

			float time() {
				return __helpers::__retrieve_nular_number(client::__sqf::nular__time__ret__scalar);
			}

			float time_multiplier() {
				return __helpers::__retrieve_nular_number(client::__sqf::nular__timemultiplier__ret__scalar);
			}
		}

	}
}