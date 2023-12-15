#include <application/GcApplication.h>
#include <sdk/core.h>
#include <spdlog/spdlog.h>

using namespace nms;

// This is a barebones plugin which just tells you if the player's moving. Feel free to customise this how you see fit!

// Called when the plugin is first loaded
RENMS_ENTRY void PluginMain()
{
    spdlog::info("Hello from the plugin!\n");
}

// Called every frame of GcApplication::Update
RENMS_ENTRY void PluginUpdate()
{
    cGcApplication *gApplication = renms_sdk::GetApplication();

    if (gApplication->mpData->mSimulation.mPlayer.mbMoving)
    {
        spdlog::info("Player's moving!");
    }
}