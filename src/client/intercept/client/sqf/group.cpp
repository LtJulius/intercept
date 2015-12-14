#include "group.hpp"
#include "client\pointers.hpp"
#include "common_helpers.hpp"

namespace intercept {
    namespace sqf {
		namespace groups {
			bool group_icon_selectable() {
				return __helpers::__retrieve_nular_bool(client::__sqf::nular__groupiconselectable__ret__bool);
			}

			// TODO std::array<bool, 2> group_icons_visible();

			group grp_null() {
				return __helpers::__retrieve_nular_group(client::__sqf::nular__grpnull__ret__group);
			}
			void clear_group_icons(group value_) {
				host::functions.invoke_raw_unary(client::__sqf::unary__cleargroupicons__group__ret__nothing, value_);
			}

			group create_group(side value_) {
				return group(host::functions.invoke_raw_unary(client::__sqf::unary__creategroup__side__ret__group, value_));
			}

			void delete_group(group value_) {
				host::functions.invoke_raw_unary(client::__sqf::unary__deletegroup__group__ret__nothing, value_);
			}

			group group_from_net_id(const std::string& value_) {
				return group(host::functions.invoke_raw_unary(client::__sqf::unary__groupfromnetid__string__ret__group, value_));
			}

			std::string group_id(group value_) {
				return game_value(host::functions.invoke_raw_unary(client::__sqf::unary__groupid__group__ret__string, value_));
			}

			float group_owner(group value_) {
				return game_value(host::functions.invoke_raw_unary(client::__sqf::unary__groupowner__group__ret__scalar, value_));
			}

			bool set_group_owner(float value0_, group value1_) {
				return game_value(host::functions.invoke_raw_binary(client::__sqf::binary__setgroupowner__group__scalar__ret__bool, value0_, value1_));
			}

			object leader(group value_) {
				return object(host::functions.invoke_raw_unary(client::__sqf::unary__leader__group__ret__object, value_));
			}

			void group_radio(object value0_, const std::string& value1_) {
				host::functions.invoke_raw_binary(client::__sqf::binary__groupradio__object__string__ret__nothing, value0_, game_value(value1_));
			}

			void remove_group_icon(float value0_, group value1_) {
				host::functions.invoke_raw_binary(client::__sqf::binary__removegroupicon__group__scalar__ret__nothing, game_value(value0_), value1_);
			}

			void select_leader(object value0_, group value1_) {
				host::functions.invoke_raw_binary(client::__sqf::binary__selectleader__group__object__ret__nothing, value0_, value1_);
			}

			float current_waypoint(group value_) {
				return game_value(host::functions.invoke_raw_unary(client::__sqf::unary__currentwaypoint__group__ret__scalar, value_));
			}

			void set_group_icons_selectable(bool value_) {
				__helpers::__empty_unary_bool(client::__sqf::unary__setgroupiconsselectable__bool__ret__nothing, value_);
			}
		}
    }
}
