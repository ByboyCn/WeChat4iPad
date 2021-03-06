// adler32.cpp: 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"



#include "../WeChatSDK/include/common/zlib/zlib.h"




int WINAPI UnCompress(Bytef *dest, uLongf *destLen, const Bytef *source, uLong sourceLen);
int WINAPI Compress(Bytef *dest, uLongf *destLen, const Bytef *source, uLong sourceLen);
int WINAPI CompressBound(uLong sourceLen);





//unsigned int __stdcall Adler32(unsigned int adler, const unsigned char* buf, unsigned int len);
int WINAPI UnCompress(Bytef *dest, uLongf *destLen, const Bytef *source, uLong sourceLen)
{
	return uncompress(dest, destLen, source, sourceLen);

}
int WINAPI Compress(Bytef *dest, uLongf *destLen, const Bytef *source, uLong sourceLen)
{
	return compress(dest, destLen, source, sourceLen);

}
int WINAPI CompressBound(uLong sourceLen)
{
	return compressBound(sourceLen);

}