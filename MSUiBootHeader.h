/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, June 8, 2021 at 2:42:59 PM Central Daylight Time
                       * Operating System: Version 14.7 (Build 18G5023c)
                       * Image Source: /usr/libexec/lockdownd
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class IOServiceWriter;

@interface MSUiBootHeader : NSObject {

	unsigned _startLocation;
	unsigned _imageAddress;
	unsigned _headerGeneration;
	IOServiceWriter* _serviceWriter;

}

@property (assign) unsigned startLocation;                       //@synthesize startLocation=_startLocation - In the implementation block
@property (assign) unsigned imageAddress;                        //@synthesize imageAddress=_imageAddress - In the implementation block
@property (assign) unsigned headerGeneration;                    //@synthesize headerGeneration=_headerGeneration - In the implementation block
@property (retain) IOServiceWriter * serviceWriter;              //@synthesize serviceWriter=_serviceWriter - In the implementation block
-(id)initWithIOServiceWriter:(id)arg1 ;
-(id)packStructure;
-(BOOL)loadHeaderAtOffset:(unsigned)arg1 ;
-(void)writeHeaderToOffset:(unsigned)arg1 ;
-(void)invalidate;
-(void)setAsFirstGeneration;
-(unsigned)length;
-(void)bumpGeneration;
-(long long)compareTo:(id)arg1 ;
-(BOOL)isValid;
-(void)makeValid;
-(void)dealloc;
-(unsigned)startLocation;
-(void)setStartLocation:(unsigned)arg1 ;
-(unsigned)imageAddress;
-(void)setImageAddress:(unsigned)arg1 ;
-(IOServiceWriter *)serviceWriter;
-(void)setServiceWriter:(IOServiceWriter *)arg1 ;
-(unsigned)headerGeneration;
-(void)setHeaderGeneration:(unsigned)arg1 ;
@end

