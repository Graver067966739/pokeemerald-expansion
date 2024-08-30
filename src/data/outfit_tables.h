#include "constants/global.h"
#include "constants/event_objects.h"

#if MODERN == 0
static const u8 sText_OutfitName_UsualGreen[] = _("USUAL GREEN");
static const u8 sText_OutfitDesc_UsualGreen[] = _(
    "The usual, but\nbasic OUTFIT.");

static const u8 sText_OutfitName_2[] = _("Fancy Attire");
static const u8 sText_OutfitDesc_2[] = _(
    "An outfit for\nspecial\noccasions");

static const u8 sText_OutfitName_3[] = _("Field Attire");
static const u8 sText_OutfitDesc_3[] = _(
    "A rugged\nOUTFIT");
#endif

static const u16 sRegionMapPlayerIcon_BrendanGfx[] = INCBIN_U16("graphics/pokenav/region_map/brendan_icon.4bpp");

static const u16 sRegionMapPlayerIcon_RSBrendanGfx[] = INCBIN_U16("graphics/pokenav/region_map/rs_brendan_icon.4bpp");

static const u16 sRegionMapPlayerIcon_MayGfx[] = INCBIN_U16("graphics/pokenav/region_map/may_icon.4bpp");

static const u16 sRegionMapPlayerIcon_RSMayGfx[] = INCBIN_U16("graphics/pokenav/region_map/rs_may_icon.4bpp");

//! TODO: Should the gfx here be seperated?

static const u8 sFrontierPassPlayerIcons_BrendanMay_Gfx[] = INCBIN_U8("graphics/frontier_pass/map_heads.4bpp");

static const u8 sFrontierPassPlayerIcons_RSBrendanMay_Gfx[] = INCBIN_U8("graphics/frontier_pass/rs_map_heads.4bpp");

#define REGION_MAP_GFX(m, f) { sRegionMapPlayerIcon_ ## m ## Gfx, sRegionMapPlayerIcon_ ## f ## Gfx }

// bandaids to avoid adding unnecessary merge conflicts
// remove these if you have them added/renamed yourself.
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_NORMAL     OBJ_EVENT_GFX_LINK_RS_BRENDAN
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_ACRO_BIKE  OBJ_EVENT_GFX_BRENDAN_ACRO_BIKE
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_SURFING    OBJ_EVENT_GFX_BRENDAN_SURFING
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_UNDERWATER OBJ_EVENT_GFX_BRENDAN_UNDERWATER
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_FIELD_MOVE OBJ_EVENT_GFX_BRENDAN_FIELD_MOVE
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_FISHING    OBJ_EVENT_GFX_BRENDAN_FISHING
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_WATERING   OBJ_EVENT_GFX_BRENDAN_WATERING
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_DECORATING OBJ_EVENT_GFX_BRENDAN_DECORATING
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_FIELD_MOVE OBJ_EVENT_GFX_BRENDAN_FIELD_MOVE

#define OBJ_EVENT_GFX_OUTFIT_RS_MAY_NORMAL     OBJ_EVENT_GFX_LINK_RS_MAY
#define OBJ_EVENT_GFX_OUTFIT_RS_MAY_ACRO_BIKE  OBJ_EVENT_GFX_MAY_ACRO_BIKE
#define OBJ_EVENT_GFX_OUTFIT_RS_MAY_SURFING    OBJ_EVENT_GFX_MAY_SURFING
#define OBJ_EVENT_GFX_OUTFIT_RS_MAY_UNDERWATER OBJ_EVENT_GFX_MAY_UNDERWATER
#define OBJ_EVENT_GFX_OUTFIT_RS_MAY_FIELD_MOVE OBJ_EVENT_GFX_MAY_FIELD_MOVE
#define OBJ_EVENT_GFX_OUTFIT_RS_MAY_FISHING    OBJ_EVENT_GFX_MAY_FISHING
#define OBJ_EVENT_GFX_OUTFIT_RS_MAY_WATERING   OBJ_EVENT_GFX_MAY_WATERING
#define OBJ_EVENT_GFX_OUTFIT_RS_MAY_DECORATING OBJ_EVENT_GFX_MAY_DECORATING
#define OBJ_EVENT_GFX_OUTFIT_RS_MAY_FIELD_MOVE OBJ_EVENT_GFX_MAY_FIELD_MOVE

const struct Outfit gOutfits[OUTFIT_COUNT] =
{
    [OUTFIT_NONE] = {
        .isHidden = TRUE
    },
    [OUTFIT_USUAL_GREEN] = {
        //! DESC: if sets to TRUE, it will not be shown in the OUTFIT menu if it's locked.
        .isHidden = FALSE,

        //! DESC: prices for purchasing them.
        .prices = { 0, 0 },

        //! agbcc doesnt like COMPOUND_STRING on my end
        //! DESC: outfit's name
        #if MODERN == 1
        .name = COMPOUND_STRING("USUAL GREEN"),
        #else
        .name = sText_OutfitName_UsualGreen,
        #endif

        //! DESC: outfit's description
        #if MODERN == 1
        .desc = COMPOUND_STRING("The usual, but\nbasic OUTFIT."),
        #else
        .desc = sText_OutfitDesc_UsualGreen,
        #endif

        //! DESC: trainer front & back pic index
        //! (see include/constants/trainers.h)
        .trainerPics = {
            [MALE] =   { TRAINER_PIC_BRENDAN, TRAINER_BACK_PIC_BRENDAN, },
            [FEMALE] = { TRAINER_PIC_MAY, TRAINER_BACK_PIC_MAY, },
        },

        //! DESC: overworld avatars, consisting of: walking, cycling,
        //! surfing, and underwater. (see include/constants/event_object.h)
        .avatarGfxIds = {
           [MALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_BRENDAN_NORMAL,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_BRENDAN_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_BRENDAN_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_BRENDAN_UNDERWATER
           },
           [FEMALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_MAY_NORMAL,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_MAY_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_MAY_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_MAY_UNDERWATER
           },
        },

        //! DESC: overworld anims, consisting of: field move, fishing,
        //! water, and decorating. (see include/constants/event_object.h)
        .animGfxIds = {
            [MALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_BRENDAN_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_BRENDAN_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_BRENDAN_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_BRENDAN_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_BRENDAN_FIELD_MOVE
            },
            [FEMALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_MAY_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_MAY_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_MAY_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_MAY_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_MAY_FIELD_MOVE
            },
        },

        //! DESC: head icons gfx&pal for region map
        .iconsRM = { sRegionMapPlayerIcon_BrendanGfx, sRegionMapPlayerIcon_MayGfx },

        //! DESC: head icons gfx&pal for frontier pass
        //! note that frontier pass needs to be in one sprite instead of two,
        //! unlike region map. (probably should split them tbh)
        .iconsFP = sFrontierPassPlayerIcons_BrendanMay_Gfx,
    },
    [OUTFIT_2] = {
        .isHidden = FALSE,
        .prices = { 200, 500 },
        #if MODERN == 1
        .name = COMPOUND_STRING("Fancy Attire"),
        .desc = COMPOUND_STRING("An outfit for\nspecial\noccasions"),
        #else
        .name = sText_OutfitName_2,
        .desc = sText_OutfitDesc_2,
        #endif
        .trainerPics = {
            [MALE]   = {TRAINER_PIC_BRENDAN, TRAINER_BACK_PIC_BRENDAN},
            [FEMALE] = {TRAINER_PIC_MAY, TRAINER_BACK_PIC_MAY}
        },
        .avatarGfxIds = {
           [MALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_BRENDAN2_NORMAL,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_BRENDAN2_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_BRENDAN2_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_BRENDAN2_UNDERWATER
           },
           [FEMALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_MAY2_NORMAL,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_MAY2_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_MAY2_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_MAY2_UNDERWATER
           },
        },
        .animGfxIds = {
            [MALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_BRENDAN2_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_BRENDAN2_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_BRENDAN2_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_BRENDAN2_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_BRENDAN2_FIELD_MOVE
            },
            [FEMALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_MAY2_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_MAY2_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_MAY2_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_MAY2_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_MAY2_FIELD_MOVE
            },
        },
        .iconsRM = { sRegionMapPlayerIcon_RSBrendanGfx, sRegionMapPlayerIcon_RSMayGfx },
        .iconsFP = sFrontierPassPlayerIcons_RSBrendanMay_Gfx,
    },
    
    [OUTFIT_3] = {
        .isHidden = TRUE,
        .prices = { 200, 500 },
        #if MODERN == 1
        .name = COMPOUND_STRING("Field Attire"),
        .desc = COMPOUND_STRING("A rugged,\noutfit."),
        #else
        .name = sText_OutfitName_3,
        .desc = sText_OutfitDesc_3,        	
        #endif
        .trainerPics = {
            [MALE]   = {TRAINER_PIC_BRENDAN, TRAINER_BACK_PIC_BRENDAN},
            [FEMALE] = {TRAINER_PIC_MAY, TRAINER_BACK_PIC_MAY}
        },
        .avatarGfxIds = {
           [MALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_BRENDAN3_NORMAL,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_BRENDAN3_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_BRENDAN3_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_BRENDAN3_UNDERWATER
           },
           [FEMALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_MAY3_NORMAL,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_MAY3_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_MAY3_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_MAY3_UNDERWATER
           },
        },
        .animGfxIds = {
            [MALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_BRENDAN3_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_BRENDAN3_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_BRENDAN3_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_BRENDAN3_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_BRENDAN3_FIELD_MOVE
            },
            [FEMALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_MAY3_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_MAY3_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_MAY3_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_MAY3_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_MAY3_FIELD_MOVE
            },
        },
        .iconsRM = { sRegionMapPlayerIcon_BrendanGfx, sRegionMapPlayerIcon_MayGfx },
        .iconsFP = sFrontierPassPlayerIcons_BrendanMay_Gfx,
    },
};
