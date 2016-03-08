#ifndef __MAIN_SCENE_H__
#define __MAIN_SCENE_H__

#include "cocos2d.h"

class MainScene : public cocos2d::Layer
{
public:
	static cocos2d::Scene* createScene();
	virtual bool init();
	void initRender();
	void menuCloseCallback(cocos2d::Ref* pSender);
	CREATE_FUNC(MainScene);
private:
	cocos2d::Sprite* _background;
};

#endif // __MAIN_SCENE_H__
