#include "gg.h"


DEFINE_string(routing_conf_file,
              "../../../modules/routing/conf/routing_config.pb.txt",
              "default routing conf data file");

DEFINE_string(routing_node_name, "routing", "the name for this node");

DEFINE_double(min_length_for_lane_change, 1.0,
              "meters, which is 100 feet.  Minimum distance needs to travel on "
              "a lane before making a lane change. Recommended by "
              "https://www.oregonlaws.org/ors/811.375");

DEFINE_bool(enable_change_lane_in_result, true,
            "contain change lane operator in result");

DEFINE_uint32(routing_response_history_interval_ms, 1000,
              "ms, emit routing resposne for this time interval");