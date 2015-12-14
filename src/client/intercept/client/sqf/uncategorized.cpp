#include "uncategorized.hpp"
#include "client\pointers.hpp"
#include "common_helpers.hpp"


using namespace intercept::types;

namespace intercept {
	namespace sqf {
		namespace __uncategorized {
			std::vector<std::string> action_keys(std::string user_action_)
			{
				game_value act_keys = host::functions.invoke_raw_unary(client::__sqf::unary__actionkeys__string__ret__array, game_value(user_action_));
				std::vector<std::string> r_arr = __helpers::__convert_to_strings_vector(act_keys);

				host::functions.free_value(&act_keys);
				return r_arr;
			}


			std::string action_keys_names(std::string user_action_)
			{
				return game_value(host::functions.invoke_raw_unary(client::__sqf::unary__actionkeysnames__string_array__ret__string, user_action_));
			}

			std::string action_keys_names(std::string user_action_, float max_keys_)
			{
				game_value params({
					game_value(user_action_),
					game_value(max_keys_)
				});
				return game_value(host::functions.invoke_raw_unary(client::__sqf::unary__actionkeysnames__string_array__ret__string, params));
			}
			std::string action_keys_names(std::string user_action_, float max_keys_, std::string input_device_priority_)
			{
				game_value params({
					game_value(user_action_),
					game_value(max_keys_),
					game_value(input_device_priority_)
				});
				return game_value(host::functions.invoke_raw_unary(client::__sqf::unary__actionkeysnames__string_array__ret__string, params));
			}

			std::vector<std::string> action_keys_names_array(std::string user_action_)
			{
				game_value act_keys = host::functions.invoke_raw_unary(client::__sqf::unary__actionkeysnamesarray__string_array__ret__array, game_value(user_action_));
				std::vector<std::string> r_arr = __helpers::__convert_to_strings_vector(act_keys);

				host::functions.free_value(&act_keys);
				return r_arr;
			}

			std::vector<std::string> action_keys_names_array(std::string user_action_, float max_keys_)
			{
				game_value params({
					game_value(user_action_),
					game_value(max_keys_)
				});
				game_value act_keys = host::functions.invoke_raw_unary(client::__sqf::unary__actionkeysnamesarray__string_array__ret__array, params);
				std::vector<std::string> r_arr = __helpers::__convert_to_strings_vector(act_keys);

				host::functions.free_value(&act_keys);
				return r_arr;
			}
			std::vector<std::string> action_keys_names_array(std::string user_action_, float max_keys_, std::string input_device_priority_)
			{
				game_value params({
					game_value(user_action_),
					game_value(max_keys_),
					game_value(input_device_priority_)
				});

				game_value act_keys = host::functions.invoke_raw_unary(client::__sqf::unary__actionkeysnamesarray__string_array__ret__array, params);
				std::vector<std::string> r_arr = __helpers::__convert_to_strings_vector(act_keys);

				host::functions.free_value(&act_keys);
				return r_arr;
			}

			void activate_addons(std::vector<std::string> &addons_)
			{
                std::vector<game_value> addons;
                for (auto it : addons_)
                    addons.push_back(it);

				host::functions.invoke_raw_unary(client::__sqf::unary__activateaddons__array__ret__nothing, addons);
			}

			/* potential namespace: camera */
			void add_cam_shake(float power_, float duration_, float frequency_)
			{
				game_value params({
					game_value(power_),
					game_value(duration_),
					game_value(frequency_)
				});

				host::functions.invoke_raw_unary(client::__sqf::unary__addcamshake__array__ret__nothing, params);
			}

			/* potential namespace: items, inventory, campaign */
			void add_item_pool(std::string item_name_, float item_count_)
			{
				game_value params({
					game_value(item_name_),
					game_value(item_count_)
				});

				host::functions.invoke_raw_unary(client::__sqf::unary__additempool__array__ret__nothing, params);
			}

			void add_magazine_pool(std::string mag_name_, float mag_count_)
			{
				game_value params({
					game_value(mag_name_),
					game_value(mag_count_)
				});

				host::functions.invoke_raw_unary(client::__sqf::unary__addmagazinepool__array__ret__nothing, params);
			}

			void add_to_remains_collector(std::vector<object> objects_)
			{
                std::vector<game_value> objects;
                for (auto it : objects_)
                    objects.push_back(game_value(it));
                host::functions.invoke_raw_unary(client::__sqf::unary__addtoremainscollector__array__ret__nothing, objects);
			}

			void ais_finish_heal(object &wounded_, object &medic_, bool medic_can_heal_)
			{
				game_value params({
					wounded_,
					medic_,
					game_value(medic_can_heal_)
				});

				host::functions.invoke_raw_unary(client::__sqf::unary__aisfinishheal__array__ret__nothing, params);
			}

			std::vector<object> all_mission_objects(std::string type_)
			{
				return __helpers::__convert_to_objects_vector(host::functions.invoke_raw_unary(client::__sqf::unary__allmissionobjects__string__ret__array, game_value(type_)));
			}
		}
	}
}