//
//  UDHelpLayer.h
//  iLabyrinth
//
//  Created by Rolandas Razma on 7/4/10.
//  Copyright 2010 UD7. All rights reserved.
//

#import "cocos2d.h"


@interface UDHelpLayer : CCLayer {
    CCSprite *_backSprite;
    CGSize  _winSize;
    UITextView *textView;
}

@end


@interface UDHelpScene : CCScene {

}

@end



