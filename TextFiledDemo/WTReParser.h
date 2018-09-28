//
//  WTReParser.h
//  WTReTextField
//
//  Created by Alex Skalozub on 5/5/13.
//   (c) 2013 Alex Skalozub.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"),
//  to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
//  and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
//
//  The above  notice and this permission notice shall be included in all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR  HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
//  IN THE SOFTWARE.
//

#import <Foundation/Foundation.h>

@class WTReGroup;

@interface WTReParser : NSObject
{
    NSString *_pattern;
    BOOL _ignoreCase;
    WTReGroup *_node;
    BOOL _finished;
    NSRegularExpression *_exactQuantifierRegex;
    NSRegularExpression *_rangeQuantifierRegex;
}

- (id)initWithPattern:(NSString*)pattern;
- (id)initWithPattern:(NSString*)pattern ignoreCase:(BOOL)ignoreCase;
- (NSString*)reformatString:(NSString*)input;

@property (readonly, nonatomic) NSString *pattern;

@end
