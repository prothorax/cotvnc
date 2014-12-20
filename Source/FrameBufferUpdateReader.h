/* FrameBufferUpdateReader.h created by helmut on Wed 17-Jun-1998 */

/* Copyright (C) 1998-2000  Helmut Maierhofer <helmut.maierhofer@chello.at>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#import <AppKit/AppKit.h>
#import "ByteReader.h"

@interface FrameBufferUpdateReader : ByteReader
{
    id	headerReader;
    id	rectHeaderReader;
    id	rawEncodingReader;
    id	copyRectangleEncodingReader;
    id	rreEncodingReader;
    id	coRreEncodingReader;
    id	hextileEncodingReader;
    id	tightEncodingReader;
	id	zlibEncodingReader;
	id	zrleEncodingReader;
	id	zlibHexEncodingReader;
	id  richCursorEncodingReader;
    id	connection;
    NSRect currentRect;
    CARD16 numberOfRects;
    double bytesTransferred;
    double bytesRepresented;
    double rectsTransferred;
}

- (void)setFrameBuffer:(id)aBuffer;
- (void)updateComplete;

- (double)compressRatio;
- (double)rectanglesTransferred;
- (double)bytesTransferred;
- (double)bytesRepresented;

@end
