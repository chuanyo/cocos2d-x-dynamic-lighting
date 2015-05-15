#ifndef _LIGHTEFFECT_H_
#define _LIGHTEFFECT_H_

#include "Effect.h"


class LightEffect : public Effect
{
public:
    static LightEffect* create();
    
    void setLightPos(const cocos2d::Vec3& pos);
    void setLightColor(const cocos2d::Color3B& color);
    void setAmbientLightColor(const cocos2d::Color3B& color);
    void setLightCutoffRadius(float value);
    void setLightHalfRadius(float value);
    
    void prepareForRender(cocos2d::Sprite *sprite, cocos2d::Texture2D *normalmap);

protected:
    bool init();

    cocos2d::Vec3 _lightPos;
    cocos2d::Color3B _lightColor;
    cocos2d::Color3B _ambientLightColor;
    float _lightCutoffRadius;
    float _lightHalfRadius;
};

#endif
