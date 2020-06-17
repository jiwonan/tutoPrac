#pragma once

#include <d3d9.h>
#include "texture_manager.h"
#include "game_background.h"

#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480

#define GAME_BACKGROUND_IMAGE 1000

extern LPDIRECT3D9 g_pD3D;
extern LPDIRECT3DDEVICE9 g_pd3dDevice;
extern HWND gWindowHandler;

extern TextureManager textureManager;
extern GameBackground gameBackground;