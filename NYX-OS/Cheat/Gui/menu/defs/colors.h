#pragma once
#include <imgui.h>
#include "../../../Cheat/Brand.hpp"
REVERS_STAMP(colors_h)

// ============================================================
//  NYX OS — Renk Paleti
//  Ana renk: Mor / Neon Purple  #8A00FF
// ============================================================

namespace c
{
    // Arka plan
    inline ImColor bg_default   = ImColor(8,   8,  12, 255);
    inline ImColor bg_christmas = ImColor(8,   8,  12, 255);
    inline ImColor bg           = ImColor(8,   8,  12, 255);
    inline ImColor bg0          = ImColor(8,   8,  12,   0);
    inline ImColor black        = ImColor(0,   0,   0, 255);
    inline ImColor black48      = ImColor(0,   0,   0, 122);
    inline ImColor black24      = ImColor(0,   0,   0,  61);

    inline ImColor sidebar_bg   = ImColor(10, 10,  15, 255);
    inline ImColor panel_bg     = ImColor(12, 12,  18, 255);
    inline ImColor panel_header = ImColor(14, 14,  20, 255);

    // Ana renk — Mor
    inline ImColor primary_default  = ImColor(138,   0, 255, 255);
    inline ImColor primary_christmas = ImColor(138,  0, 255, 255);
    inline ImColor primary    = ImColor(138,   0, 255, 255);
    inline ImColor primary48  = ImColor(138,   0, 255, 122);
    inline ImColor primary24  = ImColor(138,   0, 255,  61);
    inline ImColor primary12  = ImColor(138,   0, 255,  30);
    inline ImColor primary6   = ImColor(138,   0, 255,  15);
    inline ImColor primary0   = ImColor(138,   0, 255,   0);

    // İkincil renk — Açık mor
    inline ImColor secondary_default  = ImColor(100,  0, 200, 255);
    inline ImColor secondary_christmas = ImColor(100, 0, 200, 255);
    inline ImColor secondary   = ImColor(100,   0, 200, 255);
    inline ImColor secondary12 = ImColor(100,   0, 200,  30);
    inline ImColor secondary2  = ImColor(100,   0, 200,   5);
    inline ImColor secondary0  = ImColor(100,   0, 200,   0);

    // Beyaz tonları
    inline ImColor white    = ImColor(255, 255, 255, 255);
    inline ImColor white72  = ImColor(255, 255, 255, 255);
    inline ImColor white48  = ImColor(255, 255, 255, 240);
    inline ImColor white36  = ImColor(255, 255, 255, 220);
    inline ImColor white24  = ImColor(255, 255, 255, 190);
    inline ImColor white12  = ImColor(255, 255, 255, 120);
    inline ImColor white6   = ImColor(255, 255, 255,  60);
    inline ImColor white4   = ImColor(255, 255, 255,  40);
    inline ImColor white3   = ImColor(255, 255, 255,  30);
    inline ImColor white2   = ImColor(255, 255, 255,  20);
    inline ImColor white0   = ImColor(255, 255, 255,   0);

    inline ImColor gray      = ImColor(160, 160, 170, 255);
    inline ImColor gray2     = ImColor(120, 120, 130, 255);
    inline ImColor gray_dark = ImColor( 40,  40,  50, 255);

    // Checkbox
    inline ImColor checkbox_bg     = ImColor( 10,  10,  15, 255);
    inline ImColor checkbox_border = ImColor( 50,  10,  80, 255);
    inline ImColor checkbox_hover  = ImColor( 20,   5,  35, 255);
    inline ImColor checkbox_active = ImColor(138,   0, 255, 255);

    // Slider
    inline ImColor slider_bg   = ImColor( 10,  10,  15, 255);
    inline ImColor slider_fill = ImColor(138,   0, 255, 255);
    inline ImColor slider_grab = ImColor(255, 255, 255, 255);

    // Button
    inline ImColor button_bg     = ImColor( 15,  15,  20, 255);
    inline ImColor button_hover  = ImColor( 30,   5,  50, 255);
    inline ImColor button_active = ImColor(138,   0, 255, 255);

    // Tab
    inline ImColor tab_bg          = ImColor( 10,  10,  15, 255);
    inline ImColor tab_hover       = ImColor( 25,   5,  40, 255);
    inline ImColor tab_active      = ImColor(138,   0, 255, 255);
    inline ImColor tab_text        = ImColor(160, 160, 170, 255);
    inline ImColor tab_text_active = ImColor(255, 255, 255, 255);

    // Dropdown
    inline ImColor dropdown_bg       = ImColor( 10,  10,  15, 255);
    inline ImColor dropdown_border   = ImColor( 50,  10,  80, 255);
    inline ImColor dropdown_hover    = ImColor( 20,   5,  35, 255);
    inline ImColor dropdown_selected = ImColor(138,   0, 255,  40);

    // Durum renkleri
    inline ImColor info_primary    = ImColor(138,   0, 255, 255);
    inline ImColor info_secondary  = ImColor(170,  80, 255, 255);
    inline ImColor error_primary   = ImColor(231,  76,  60, 255);
    inline ImColor error_secondary = ImColor(255, 118, 117, 255);
    inline ImColor success_primary    = ImColor( 46, 204, 113, 255);
    inline ImColor success_secondary  = ImColor( 88, 214, 141, 255);
    inline ImColor warning_primary    = ImColor(243, 156,  18, 255);
    inline ImColor warning_secondary  = ImColor(247, 183,  49, 255);

    inline struct highlight_t {
        ImColor f = ImColor(180, 100, 255, 255);
        ImColor s = ImColor(138,   0, 255,   0);
    } highlight;

    inline struct info_highlight_t {
        ImColor f = ImColor(180, 100, 255, 255);
        ImColor s = ImColor(138,   0, 255,   0);
    } info_highlight;

    inline struct error_highlight_t {
        ImColor f = ImColor(245, 183, 177, 255);
        ImColor s = ImColor(231,  76,  60,   0);
    } error_highlight;
};
