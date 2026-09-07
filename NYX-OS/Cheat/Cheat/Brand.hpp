#pragma once

namespace globals
{
    namespace brand
    {
        inline constexpr const char* signature   = "NYX OS";
        inline constexpr const char* name        = "NYX OS";
        inline constexpr const char* version     = "1.0.0";
        inline constexpr const char* author      = "NYX";
        inline constexpr const char* createdBy   = "NYX Development";
        inline constexpr const char* fullTitle   = "NYX OS | v1.0.0";
        inline constexpr const char* consoleTitle= "NYX OS v1.0.0 | NYX Development";
        inline constexpr const char* welcome     = "Welcome to NYX OS";
        inline constexpr const char* logPrefix   = "NYX OS";
        inline constexpr const char* watermark   = "NYX OS";
        inline constexpr const char* activeHeader= "NYX OS";
        inline constexpr const char* codeSignature = "NYX OS v1.0.0";
        inline constexpr const char* codeStamp   = "NYX";
        inline constexpr const char* footer      = "NYX Development";
        inline constexpr const char* bannerLine  = "NYX OS - FiveM External";
    }
}

namespace revers_brand
{
    inline constexpr const char* kSignature    = globals::brand::signature;
    inline constexpr const char* kAuthor       = globals::brand::author;
    inline constexpr const char* kCreatedBy    = globals::brand::createdBy;
    inline constexpr const char* kFullTitle    = globals::brand::fullTitle;
    inline constexpr const char* kWelcome      = globals::brand::welcome;
    inline constexpr const char* kWatermark    = globals::brand::watermark;
    inline constexpr const char* kStamp        = globals::brand::codeStamp;
    inline constexpr const char* kCodeSignature= globals::brand::codeSignature;
}

#define REVERS_STAMP(tag) \
    static const char nyx_os_stamp_##tag[] = "NYX OS v1.0.0";

static const char nyx_os_stamp_Brand_hpp[] = "NYX OS v1.0.0";
