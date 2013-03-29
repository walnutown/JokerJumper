//
//  GameScene.h
//  JokerJumper
//
//  Created by Sun on 3/29/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"

@interface GameScene : CCLayer {
    CCTMXTiledMap *tileMapNode;
}

@property (nonatomic, readwrite) CCTMXTiledMap *tileMapNode;

// returns a CCScene that contains the GameLayer as the only child
+(CCScene *) scene;

@end