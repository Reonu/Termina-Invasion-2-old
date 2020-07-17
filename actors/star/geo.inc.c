// 0x16000EA0
const GeoLayout star_geo[] = {
   GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0x9B, 100),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
         GEO_SWITCH_CASE(6, geo_switch_anim_state),
         GEO_OPEN_NODE(),
            GEO_DISPLAY_LIST(LAYER_OPAQUE, star_seg3_dl_0302B870),
            GEO_DISPLAY_LIST(LAYER_OPAQUE, star_seg3_dl_green2),
            GEO_DISPLAY_LIST(LAYER_OPAQUE, star_seg3_dl_red2),
            GEO_DISPLAY_LIST(LAYER_OPAQUE, star_seg3_dl_orange2),
            GEO_DISPLAY_LIST(LAYER_OPAQUE, star_seg3_dl_yellow2),
            GEO_DISPLAY_LIST(LAYER_OPAQUE, star_seg3_dl_purple2),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
