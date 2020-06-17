#include "texture_manager.h"
#include "global.h"

void TextureManager::LoadTexture(const TCHAR* name, int id)
{
	TextureElement* newElement = new TextureElement;

	D3DXCreateSprite(g_pd3dDevice, &newElement->sprite);

	D3DXCreateTextureFromFile(g_pd3dDevice, name, &newElement->texture);

	elements.push_back(newElement);
}
TextureElement* TextureManager::GetTexture(int id)
{
	for (int i=0;i<elements.size();++i)
	{
		if (elements[i]->id == id)
		{
			return elements[i];
		}
	}
	return nullptr;
}