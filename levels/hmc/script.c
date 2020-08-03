#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/hmc/header.h"

const LevelScript level_hmc_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _hmc_segment_7SegmentRomStart, _hmc_segment_7SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _cave_mio0SegmentRomStart, _cave_mio0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group6_mio0SegmentRomStart, _group6_mio0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group6_geoSegmentRomStart, _group6_geoSegmentRomEnd), 
	LOAD_MIO0(0x06, _group17_mio0SegmentRomStart, _group17_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0xb, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_7), 
	JUMP_LINK(script_func_global_18), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_HAZY_MAZE_DOOR, hazy_maze_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_PLATFORM, hmc_geo_0005A0), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_ARROW_PLATFORM, hmc_geo_0005B8), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_ELEVATOR_PLATFORM, hmc_geo_0005D0), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_ROLLING_ROCK, hmc_geo_000548), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_PIECE, hmc_geo_000570), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_SMALL_PIECE, hmc_geo_000588), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_RED_GRILLS, hmc_geo_000530), 

	AREA(1, hmc_area_1),
		WARP_NODE(0x0A, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF3, LEVEL_HMC, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 3669, 306, -4, 0, 0, 0, 0x00000000, bhvBigBoulderGenerator),
		OBJECT(MODEL_NONE, -275, -174, -118, 0, 0, 0, 0x00000000, bhvBigBoulderGenerator),
		OBJECT(MODEL_NONE, 1795, -339, -3640, 0, 0, 0, 0x00020000, bhvWarp),
		OBJECT(MODEL_NONE, -1984, -1477, 13198, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, 2132, -916, 13291, 0, 0, 0, 0x000B0000, bhvWarp),
		TERRAIN(hmc_area_1_collision),
		MACRO_OBJECTS(hmc_area_1_Area_Root_Snowhead_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_SNOW),
	END_AREA(),

	AREA(2, hmc_area_2),
		WARP_NODE(0x0A, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 4535, -1982, 2080, 76, -36, -107, 0x000A0000, bhvInstantActiveWarp),
		OBJECT(MODEL_STAR, 2680, -1493, -2965, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_STAR, 2674, -1474, -3258, 0, 0, 0, 0x01000000, bhvStar),
		OBJECT(MODEL_STAR, 2676, -1502, -2787, 0, 0, 0, 0x02000000, bhvStar),
		OBJECT(MODEL_STAR, 2670, -1501, -2595, 0, 0, 0, 0x03000000, bhvStar),
		OBJECT(MODEL_STAR, 2679, -1496, -2408, 0, 0, 0, 0x04000000, bhvStar),
		OBJECT(MODEL_STAR, 2682, -1477, -2147, 0, 0, 0, 0x05000000, bhvStar),
		OBJECT(MODEL_STAR, 2678, -1479, -1930, 0, 0, 0, 0x06000000, bhvStar),
		OBJECT(MODEL_STAR, 2658, -1495, -1760, 0, 0, 0, 0x07000000, bhvStar),
		OBJECT(MODEL_STAR, 2642, -1517, -1580, 0, 0, 0, 0x08000000, bhvStar),
		OBJECT(MODEL_STAR, 2613, -1540, -1342, 0, 0, 0, 0x10000000, bhvStar),
		TERRAIN(hmc_area_2_collision),
		MACRO_OBJECTS(hmc_area_2_Area_Root_Village_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_SNOW),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
