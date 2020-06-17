#include "game_background.h"
#include "global.h"

GameBackground::GameBackground()
{
	BackgroundY = 0;
}

void GameBackground::Update()
{
	BackgroundY += 0.01f;
}

void GameBackground::Render()
{
	TextureElement* backgroundElement = textureManager.GetTexture(GAME_BACKGROUND_IMAGE);

	backgroundElement->sprite->Begin(D3DXSPRITE_ALPHABLEND);

	RECT rc;

	rc.top = 0;
	rc.left = 0;
	rc.right = 640;
	rc.bottom = 680;

	D3DXVECTOR3 pos(0, round(BackgroundY), 0);
	backgroundElement->sprite->Draw(backgroundElement->texture, &rc, nullptr, &pos, D3DCOLOR_XRGB(255, 255, 255));

	pos = D3DXVECTOR3(0, round(BackgroundY) - 680, 0);
	backgroundElement->sprite->Draw(backgroundElement->texture, &rc, nullptr, &pos, D3DCOLOR_XRGB(255, 255, 255));

	backgroundElement->sprite->End();

}