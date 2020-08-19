// tower_door.c.inc

void bhv_tower_door_loop(void) {
    cur_obj_scale(o->oBehParams2ndByte / 127.0f);
    o->hitboxRadius = 180 * o->oBehParams2ndByte / 127.0f + 30;
    o->hitboxHeight = 360 * o->oBehParams2ndByte / 127.0f;
    o->hitboxDownOffset = 180 * o->oBehParams2ndByte / 127.0f;
   if (o->oInteractStatus & INT_STATUS_TOUCHED_BOB_OMB) {
        obj_explode_and_spawn_coins(80.0f, 0);
        create_sound_spawner(SOUND_GENERAL_WALL_EXPLOSION);
    }
}
