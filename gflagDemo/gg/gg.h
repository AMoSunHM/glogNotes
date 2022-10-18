#pragma once

#include "gflags/gflags.h"

DECLARE_string(routing_conf_file);
DECLARE_string(routing_node_name);

DECLARE_double(min_length_for_lane_change);
DECLARE_bool(enable_change_lane_in_result);
DECLARE_uint32(routing_response_history_interval_ms);
